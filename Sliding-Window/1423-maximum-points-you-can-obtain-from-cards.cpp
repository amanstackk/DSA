class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();

        // take all from left
        int leftSum = 0;
        for (int i = 0; i < k; i++) leftSum += cardPoints[i];

        int rightSum = 0;
        int ans = leftSum;

        // ❌ tries mixing but incorrectly
        for (int i = 0; i < k; i++) {
            leftSum -= cardPoints[k - 1 - i];
            rightSum += cardPoints[n - 1 - i];
            ans = max(ans, leftSum + rightSum);
        }

        return ans;
    }
};