// 4. Median of Two Sorted Arrays
// Problem Statement
// Given two sorted arrays nums1 and nums2 of size m and n respectively, return the
// median of the two sorted arrays.
// The overall run time complexity should be O(log (m+n)).
// Example 1:
// Input: nums1 = [1,3], nums2 = [2]
// Output: 2.00000
// Explanation: merged array = [1,2,3] and median is 2.

// Example 2:
// Input: nums1 = [1,2], nums2 = [3,4]
// Output: 2.50000
// Explanation: merged array = [1,2,3,4] and median is (2 + 3) / 2 = 2.5.
#include <bits/stdc++.h>
using namespace std;
double findMedianSortedArrays(int *nums1, int nums1Size, int *nums2, int nums2Size)
{
    if (nums1Size > nums2Size)
        return findMedianSortedArrays(nums2, nums2Size, nums1, nums1Size);
    int low = 0, high = nums1Size, median = ((nums1Size + nums2Size) + 1) / 2;
    while (low <= high)
    {
        int mid1 = (low + high) / 2;
        int mid2 = median - mid1;

        int l1 = (mid1 == 0) ? INT_MIN : nums1[mid1 - 1];
        int l2 = (mid2 == 0) ? INT_MIN : nums2[mid2 - 1];
        int r1 = (mid1 == nums1Size) ? INT_MAX : nums1[mid1];
        int r2 = (mid2 == nums2Size) ? INT_MAX : nums2[mid2];

        if (l1 <= r2 && l2 <= r1)
        {
            if ((nums1Size + nums2Size) % 2 == 0)
                return (max(l1, l2) + min(r1, r2)) / 2.0;
            else
                return max(l1, l2);
        }
        else if (l2 > r1)
            low = mid1 + 1;
        else
            high = mid1 - 1;
    }
    return 0.0;
}

int main()
{
    int arr1[] = {1, 4, 7, 10, 12}, arr2[] = {2, 3, 6, 15};
    cout << findMedianSortedArrays(arr1, 5, arr2, 4) << endl;
    return 0;
}