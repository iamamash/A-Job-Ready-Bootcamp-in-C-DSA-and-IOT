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
#include <iostream>
using namespace std;
void productExceptSelf(int *nums, int numsSize)
{
    int *ptr = new int;
    ptr[0] = 1;
    for (int i = 1; i < numsSize; i++)
        ptr[i] = nums[i - 1] * ptr[i - 1];
    int temp = 1;
    for (int i = numsSize - 1; i >= 0; i--)
    {
        ptr[i] *= temp;
        temp *= nums[i];
    }
    for (int i = 0; i < numsSize; i++)
        cout << ptr[i] << " ";
}

int main()
{
    int nums[100], size;
    cout << "Enter the size of array: ";
    cin >> size;
    cout << "Enter " << size << " values:" << endl;
    for (int i = 0; i < size; i++)
        cin >> nums[i];
    productExceptSelf(nums, size);
    return 0;
}
