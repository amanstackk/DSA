# Sliding Window Notes

# Core Idea

Sliding window is mainly used for:

- Contiguous subarrays
- Contiguous substrings

Instead of checking every subarray:

O(n²)

we maintain a moving window:

[l ... r]

Usually reducing complexity to:

O(n)

---

# Fundamental Pattern

```cpp
int l = 0;

for(int r = 0; r < n; r++) {

    // include nums[r]

    while(window invalid) {

        // remove nums[l]
        l++;
    }

    // process valid window
}
```

---

# Deep Intuition

Sliding window works when:

If a window becomes invalid,  
moving left pointer can only improve it.

This monotonic behavior is the key.

---

# Types of Sliding Window

## 1. Fixed Size Window

Window size always remains k.

Pattern:

```cpp
for(int r = 0; r < n; r++) {

    sum += nums[r];

    if(r >= k)
        sum -= nums[r-k];

    if(r >= k-1) {

        // valid window size k

    }
}
```

### Questions

- Leetcode 643 — Maximum Average Subarray I
- Sliding Window Maximum
- First Negative Integer in Every Window

---

## 2. Variable Size Window

Window size changes dynamically.

Pattern:

```cpp
for(int r = 0; r < n; r++) {

    // include nums[r]

    while(window invalid) {

        // shrink window
        l++;
    }

    // process answer
}
```

### Questions

- Longest Substring Without Repeating Characters
- Longest Subarray Sum <= k
- Minimum Size Subarray Sum
- At Most K Distinct Characters

---

# Positive Numbers Sliding Window

Works because:

Adding element:
sum increases

Removing element:
sum decreases

Monotonicity exists.

---

# Longest Subarray Sum <= k

```cpp
int longestSubarray(vector<int>& nums, int k) {

    int l = 0;
    long long sum = 0;
    int ans = 0;

    for(int r = 0; r < nums.size(); r++) {

        sum += nums[r];

        while(sum > k) {

            sum -= nums[l];
            l++;
        }

        ans = max(ans, r - l + 1);
    }

    return ans;
}
```

### Key Observation

After shrinking,  
window becomes maximally valid.

---

# Count Subarrays With Sum <= k

## Important Observation

If window `[l...r]` is valid,  
all suffixes ending at `r` are also valid.

Example:

```text
[2,5,1]

Valid suffixes:

[2,5,1]
[5,1]
[1]
```

Count:

```text
r - l + 1
```

Code:

```cpp
long long countSubarrays(vector<int>& nums, int k) {

    int l = 0;
    long long sum = 0;
    long long cnt = 0;

    for(int r = 0; r < nums.size(); r++) {

        sum += nums[r];

        while(sum > k) {

            sum -= nums[l];
            l++;
        }

        cnt += (r - l + 1);
    }

    return cnt;
}
```

---

# Explicitly Generating Subarrays

```cpp
for(int start = l; start <= r; start++) {

    // subarray start...r
}
```

---

# Frequency Map Sliding Window

Used for string problems.

Pattern:

```cpp
unordered_map<char,int> freq;

for(int r = 0; r < s.size(); r++) {

    freq[s[r]]++;

    while(window invalid) {

        freq[s[l]]--;

        if(freq[s[l]] == 0)
            freq.erase(s[l]);

        l++;
    }
}
```

---

# Longest Substring Without Repeating Characters

Leetcode 3

```cpp
int lengthOfLongestSubstring(string s) {

    vector<int> freq(256,0);

    int l = 0;
    int ans = 0;

    for(int r = 0; r < s.size(); r++) {

        freq[s[r]]++;

        while(freq[s[r]] > 1) {

            freq[s[l]]--;
            l++;
        }

        ans = max(ans, r - l + 1);
    }

    return ans;
}
```

### Logic

Window must always contain unique characters.

---

# Minimum Size Subarray Sum

Leetcode 209

```cpp
int minSubArrayLen(int target, vector<int>& nums) {

    int l = 0;
    long long sum = 0;
    int ans = INT_MAX;

    for(int r = 0; r < nums.size(); r++) {

        sum += nums[r];

        while(sum >= target) {

            ans = min(ans, r - l + 1);

            sum -= nums[l];
            l++;
        }
    }

    return ans == INT_MAX ? 0 : ans;
}
```

### Logic

Shrink aggressively once condition is satisfied.

---

# At Most vs Exactly Trick

Very important pattern.

Many problems:

```text
exactly(k) = atMost(k) - atMost(k-1)
```

Used in:

- Leetcode 992 — Subarrays With K Different Integers
- Leetcode 930 — Binary Subarrays With Sum
- Leetcode 1248 — Count Number of Nice Subarrays

---

# Sliding Window Maximum

Leetcode 239

Different logic.

Uses deque instead of normal shrinking.

Maintain decreasing deque.

Complexity:

```text
O(n)
```

Very important advanced pattern.

---

# When Sliding Window Fails

## 1. Negative Numbers

Example:

```text
[-5, 10, -3]
```

Removing left may increase or decrease sum unpredictably.

Monotonicity breaks.

Use instead:

- Prefix Sum
- HashMap
- Monotonic Queue
- Binary Search
- Deque

---

## 2. Non-Contiguous Problems

Sliding window only works on continuous ranges.

---

# Important Problems To Solve

## Beginner

- Leetcode 643 — Maximum Average Subarray I
- Leetcode 485 — Max Consecutive Ones
- Leetcode 209 — Minimum Size Subarray Sum
- Leetcode 3 — Longest Substring Without Repeating Characters

---

## Intermediate

- Leetcode 1004 — Max Consecutive Ones III
- Leetcode 424 — Longest Repeating Character Replacement
- Leetcode 904 — Fruit Into Baskets
- Leetcode 1493 — Longest Subarray of 1's After Deleting One Element
- Leetcode 930 — Binary Subarrays With Sum

---

## Advanced

- Leetcode 76 — Minimum Window Substring
- Leetcode 239 — Sliding Window Maximum
- Leetcode 992 — Subarrays with K Different Integers
- Leetcode 1248 — Count Number of Nice Subarrays

---

# Recognition Pattern

Strong signals for sliding window:

- Contiguous
- Longest
- Shortest
- Count
- At most
- Exactly
- Distinct
- Sum constraints
- Optimize brute force

---

# Ultimate Mental Model

Expand aggressively.

Shrink only when necessary.

Window always tries to remain:

maximally useful but valid.