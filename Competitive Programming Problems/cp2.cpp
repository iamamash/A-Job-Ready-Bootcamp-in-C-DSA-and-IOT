// 2. Product of Array Except Self
// Problem Statement:-
// Given an integer array nums , return an array answer such that answer[i] is equal to the
// product of all the elements of nums except nums[i] .
// The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.
// You must write an algorithm that runs in O(n) time and without using the division
// operation.
// Example 1:
// Input: nums = [1,2,3,4]
// Output: [24,12,8,6]

// Example 2:
// Input: nums = [-1,1,0,-3,3]
// Output: [0,0,9,0,0]
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> productExceptSelf(vector<int> &nums)
    {
        vector<int> v(nums.size(), 1);

        for (int i = 1; i < nums.size(); i++)
            v[i] = nums[i - 1] * v[i - 1];

        int temp = 1;
        for (int i = nums.size() - 1; i >= 0; i--)
        {
            v[i] *= temp;
            temp *= nums[i];
        }

        return v;
    }
};

int main()
{
    Solution s;
    vector<int> nums{1, 2, 3, 4};
    vector<int> temp(s.productExceptSelf(nums));
    for (auto i : temp)
        cout << i << " ";
    return 0;
}
