// 3. Peak Index in a Mountain Array
// Problem Statement:
// An array arr a mountain if the following properties hold:
// -->    arr.length >= 3
// -->    There exists some i with 0 < i < arr.length - 1 such that:
//         -->     arr[0] < arr[1] < ... < arr[i - 1] < arr[i]
//         -->     arr[i] > arr[i + 1] > ... > arr[arr.length - 1]
// Given a mountain array arr , return the index i such that arr[0] < arr[1] < ... < arr[i -
// 1] < arr[i] > arr[i + 1] > ... > arr[arr.length - 1] .
// You must solve it in O(log(arr.length)) time complexity.
// Example 1:
// Input: arr = [0,1,0]
// Output: 1

// Example 2:
// Input: arr = [0,10,5,2]
// Output: 1
#include <iostream>
using namespace std;
int peakIndexInMountainArray(int *arr, int arrSize)
{
    int start = 0, end = arrSize - 1, mid = (start + end) / 2, ans;
    while (start < end)
    {
        if (arr[mid] > arr[mid + 1])
        {
            if (arr[mid] >= arr[mid - 1])
            {
                ans = mid;
                break;
            }
            end = mid;
        }
        else
            start = mid;
        mid = (start + end) / 2;
    }
    return arr[mid];
}

int main()
{
    int arr[] = {-1, 0, 3, 8, 50, 11, 4, 0, -2};
    cout << peakIndexInMountainArray(arr, 9);
    return 0;
}