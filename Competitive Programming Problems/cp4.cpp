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

class Solution
{
public:
    double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
    {
        if (nums1.size() > nums2.size())
            return findMedianSortedArrays(nums2, nums1);

        int low = 0, high = nums1.size(), median = ((nums1.size() + nums2.size()) + 1) / 2;
        while (low <= high)
        {
            int m1 = (low + high) / 2;
            int m2 = median - m1;

            int l1 = (m1 == 0) ? INT_MIN : nums1[m1 - 1];
            int l2 = (m2 == 0) ? INT_MIN : nums2[m2 - 1];
            int r1 = (m1 == nums1.size()) ? INT_MAX : nums1[m1];
            int r2 = (m2 == nums2.size()) ? INT_MAX : nums2[m2];

            if (l1 <= r2 && l2 <= r1)
                if ((nums1.size() + nums2.size()) % 2 == 0)
                    return ((max(l1, l2) + min(r1, r2)) / 2.0);
                else
                    return max(l1, l2);
            else if (l2 > r1)
                low = m1 + 1;
            else
                high = m1 - 1;
        }
        return 0.0;
    }
};

int main()
{
    Solution s;
    vector<int> nums1{1, 2}, nums2{3, 4};
    cout << s.findMedianSortedArrays(nums1, nums2);
    return 0;
}
