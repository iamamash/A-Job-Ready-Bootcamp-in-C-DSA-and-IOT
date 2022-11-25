// 1. Using STL Array gets and sets a reference to an element based on a given index.
#include <iostream>
#include <array>
#include <tuple>
using namespace std;
int main()
{
    array<int, 5> arr = {1, 2, 3, 4, 5};
    int index, e;
    cout << "Enter the Index : ";
    cin >> index;

    cout << "Enter the Value : ";
    cin >> e;
    arr.at(index) = e;

    cout << arr.at(index);
    return 0;
}

// 2. Using STL Array returns the total number of elements in the array.
#include <iostream>
#include <array>
using namespace std;
int main()
{
    array<int, 5> arr;
    cout << "Total Elements are : " << arr.size() << endl;
    return 0;
}

// 3. Find the first and last element using the STL array.
#include <iostream>
#include <array>
using namespace std;
int main()
{
    array<int, 5> arr = {1, 2, 3, 4, 5};
    cout << "First Element is : " << arr.front() << endl;
    cout << "Last Element is : " << arr.back() << endl;
    return 0;
}

// 4. Returns the element from the given index using the STL array.
#include <iostream>
#include <array>
using namespace std;
int main()
{
    array<int, 5> arr = {1, 2, 3, 4, 5};
    int i;
    cout << "Enter the Index: ";
    cin >> i;
    cout << "Element at index " << i << " is : " << arr.at(i) << endl;
    return 0;
}

// 5. C++ STL program to demonstrate example of array::rbegin() and array::rend()
// functions
#include <iostream>
#include <array>
using namespace std;
int main()
{
    array<int, 5> arr = {1, 2, 3, 4, 5};
    for (auto i = arr.rbegin(); i != arr.rend(); i++)
        cout << *i << " ";
    return 0;
}

// 6. Using STL to check whether an array is empty or not.
#include <iostream>
#include <array>
using namespace std;
int main()
{
    array<int, 0> arr;
    if (arr.empty())
        cout << "Array is Empty" << endl;
    else
        cout << "Array is not Empty" << endl;
    return 0;
}

// 7. Sort an array in ascending order using sort() function in C++ STL
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {69, 200, -30, 0, 85, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr + n);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}

// 8. Sort an array in descending order using sort() function in C++ STL
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {69, 200, -30, 0, 85, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr + n, greater<int>());
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}

// 9. C++ program to find the integers which come an odd number of times in an array
// using C++ STL.
#include <iostream>
#include <array>
using namespace std;
int main()
{
    array<int, 9> arr{1, 2, 2, 3, 4, 3, 5, 4, 1};
    int result = 0;
    for (int i = 0; i < arr.size(); i++)
        result ^= arr[i];
    cout << "The Element which comes Odd number times is : " << result;
    return 0;
}

// 10. Given an integer array nums , return an array answer such that answer[i] is equal to
// the product of all the elements of nums except nums[i].
#include <iostream>
#include <array>
using namespace std;
int *productExceptSelf(int *nums, int numsSize)
{
    int *answer = new int;
    answer[0] = 1;
    for (int i = 1; i < numsSize; i++)
        answer[i] = nums[i - 1] * answer[i - 1];
    int temp = 1;
    for (int i = numsSize - 1; i >= 0; i--)
    {
        answer[i] *= temp;
        temp *= nums[i];
    }
    return answer;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    productExceptSelf(arr, 5);
    return 0;
}
