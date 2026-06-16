**33. Search element In rotated sorted array-**



&#x09;-just focus on the portion that is surely sorted (because we can surely know then weather our target is in there or not like - low = 0, high = 5, mid = 4,  7,8,9,1,2,3,4,5,6 target = target = 4.. so the 4 lies in the indexes 3 = 4(mid) and high

&#x09;-if we have element there that's fine

&#x09;-if not go to unsorted array



**81. Search in Rotated Sorted Array II**



&#x09;same as the above problem just handle the pain in the ass case (nums\[low] == nums\[mid] == nums\[high])

&#x09;because in that case we are not sure weather the left or right part is sorted so we shrink because that high and low are obv not the target because we have already checked it



