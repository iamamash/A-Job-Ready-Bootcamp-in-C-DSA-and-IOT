// 1. Write a function to find the greatest number from the given array of any size. (TSRS)
#include <stdio.h>
int greatest(int *);
int main()
{
    int arr[10];
    greatest(arr);
    return 0;
}

int greatest(int a[])
{
    int grt = 0;
    printf("Enter 10 number:\n");
    for (int i = 0; i < 10; i++)
        scanf("%d", &a[i]);
    grt = a[0];
    for (int i = 0; i < 10; i++)
    {
        if (a[i] > grt)
            grt = a[i];
    }
    return printf("%d is the greatest number present in the arrray", grt);
}

// 2. Write a function to find the smallest number from the given array of any size. (TSRS)
#include <stdio.h>
int smallest(int *);
int main()
{
    int arr[10];
    smallest(arr);
    return 0;
}

int smallest(int a[])
{
    int small = 0;
    printf("Enter 10 numbers:\n");
    for (int i = 0; i < 10; i++)
        scanf("%d", &a[i]);
    small = a[0];
    for (int i = 0; i < 10; i++)
    {
        if (a[i] < small)
            small = a[i];
    }
    return printf("%d is the smallest number in the array", small);
}

// 3. Write a function to sort an array of any size. (TSRS)
#include <stdio.h>
int sort(int *);
int main()
{
    int arr[10];
    sort(arr);
    return 0;
}

int sort(int a[])
{
    int i, j, var = 0;
    printf("Enter 10 numbers:\n");
    for (i = 0; i < 10; i++)
        scanf("%d", &a[i]);
    for (i = 0; i < 10; i++)
    {
        for (j = i + 1; j < 10; j++)
        {
            if (a[i] < a[j])
            {
                continue;
            }
            else
            {
                var = a[i];
                a[i] = a[j];
                a[j] = var;
                var = 0;
            }
        }
        printf("%d ", a[i]);
    }
    return 0;
}

// 4. Write a function to rotate an array by n position in d direction. The d is an indicative
// value for left or right. (For example, if array of size 10 is [32, 29, 40, 12, 70]; n is 2 and
// d is left, then the resulting array after left rotation 2 times is [40, 12, 70, 32, 29] )
#include <stdio.h>
int main()
{
    int i, n, arr1[5], arr2[5];
    printf("Enter 5 numbers:\n");
    for (i = 0; i < 5; i++)
        scanf("%d", &arr1[i]);
    for (i = 0; i < 5; i++)
        arr2[i] = arr1[i];
    printf("Select the direction in which you want to rotate the array:\n");
    printf("1. Left\n");
    printf("2. Right\n");
    printf("Enter your choice:\n");
    scanf("%d", &n);
    switch (n)
    {
    case 1:
        printf("Enter the number of positions you want to rotate\n");
        scanf("%d", &n);
        for (i = 0; i < 5; i++)
        {
            if (n > 5)
            {
                n = n - 5;
            }
            if ((n + i) < 5)
            {
                arr2[i] = arr1[n + i];
                printf("%d ", arr2[i]);
            }
            else
            {
                arr2[i] = arr1[(n + i) - 5];
                printf("%d ", arr2[i]);
            }
        }
        break;

    case 2:
        printf("Enter the number of positions you want to rotate\n");
        scanf("%d", &n);
        for (i = 0; i < 5; i++)
        {
            if (n > 5)
            {
                n = n - 5;
            }

            if (((5 - n) + i) < 5)
            {
                arr2[i] = arr1[(5 - n) + i];
                printf("%d ", arr2[i]);
            }
            else
            {
                arr2[i] = arr1[((5 - n) + i) - 5];
                printf("%d ", arr2[i]);
            }
        }
        break;

    default:
        printf("INVALID CHOICE");
        break;
    }
    return 0;
}

// 5. Write a function to find the first occurrence of adjacent duplicate values in the array.
// Function has to return the value of the element.
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, j, arr[5];
    printf("Enter 5 values\n");
    for (i = 0; i < 5; i++)
        scanf("%d", &arr[i]);
    for (i = 0; i < 5; i++)
    {
        for (j = i; j < 4; j++)
        {
            if (arr[i] == arr[j + 1])
            {
                printf("First occurance of duplicate values int the array is: %d", arr[i]);
                exit(0);
            }
            else
                continue;
        }
    }
    if (i == 5)
    {
        printf("There is no duplicate value found in the array.");
    }
    return 0;
}

// 6. Write a function in C to read n number of values in an array and display it in reverse
// order.
#include <stdio.h>
int main()
{
    int i, arr1[5], arr2[5];
    printf("Enter 5 values\n");
    for (i = 0; i < 5; i++)
        scanf("%d", &arr1[i]);
    for (i = 0; i < 5; i++)
    {
        arr2[i] = arr1[4 - i];
        printf("%d ", arr2[i]);
    }
    return 0;
}

// 7. Write a function in C to count a total number of duplicate elements in an array.
#include <stdio.h>
int main()
{
    int i, j, count = 0, arr[5];
    printf("Enter 5 values:\n");
    for (i = 0; i < 5; i++)
        scanf("%d", &arr[i]);
    for (i = 0; i < 5; i++)
    {
        for (j = i + 1; j < 5; j++)
        {
            if (arr[i] == arr[j])
            {
                ++count;
                break;
            }
        }
    }
    printf("Total number of duplicate elements in array are: %d ", count);
    return 0;
}

// 8. Write a function in C to print all unique elements in an array.
#include <stdio.h>
int main()
{
    int i, j, count, arr[5];
    printf("Enter 5 values\n");
    for (i = 0; i < 5; i++)
        scanf("%d", &arr[i]);
    for (i = 0; i < 5; i++)
    {
        count = 0;
        for (j = 0; j < 5; j++)
        {
            if (i != j)
            {
                if (arr[i] == arr[j])
                {
                    ++count;
                    break;
                }
            }
        }
        if (count == 0)
        {
            printf("Unique elements in array are:\n");
            printf("%d ", arr[i]);
        }
    }
    return 0;
}

// 9. Write a function in C to merge two arrays of the same size sorted in descending
// order.
#include <stdio.h>
int main()
{
    int i, n1, n2, n3, var = 0;
    printf("Enter the size of array:\n");
    scanf("%d", &n1);
    int arr1[n1], arr2[n1];
    n3 = n1 + n1;
    int arr3[n3];
    printf("Enter the %d values for first array:\n", n1);
    for (i = 0; i < n1; i++)
    {
        scanf("%d", &arr1[i]);
        arr3[i] = arr1[i];
    }
    int k = n1;
    printf("Enter the %d values for second array:\n", n1);
    for (i = 0; i < n1; i++)
    {
        scanf("%d", &arr2[i]);
        arr3[k] = arr2[i];
        k++;
    }

    printf("Merged array is:\n");
    for (i = 0; i < n3; i++)
    {
        for (int j = i + 1; j < n3; j++)
        {
            if (arr3[i] > arr3[j])
                continue;
            else
            {
                var = arr3[i];
                arr3[i] = arr3[j];
                arr3[j] = var;
                var = 0;
            }
        }
        printf("%d ", arr3[i]);
    }
    return 0;
}

// 10. Write a function in C to count the frequency of each element of an array.
#include <stdio.h>
int main()
{
    int i, j, arr[5], arr2[5], count;
    printf("Enter values for array:\n");
    for (i = 0; i < 5; i++)
        scanf("%d", &arr[i]);
    for (i = 0; i < 5; i++)
    {
        count = 1;
        if (arr[i] != -1)
        {
            for (j = i + 1; j < 5; j++)
            {
                if (arr[i] == arr[j])
                {
                    ++count;
                    arr[j] = -1;
                }
            }
            arr2[i] = count;
        }
    }

    for (i = 0; i < 5; i++)
        if (arr[i] != -1)
            printf("Frequency of %d is %d\n", arr[i], arr2[i]);
    return 0;
}

// 4. Write a function to rotate an array by n position in d direction. The d is an indicative
// value for left or right. (For example, if array of size 10 is [32, 29, 40, 12, 70]; n is 2 and
// d is left, then the resulting array after left rotation 2 times is [40, 12, 70, 32, 29] )

// ANOTHER WAY OF SOLVING THIS QUESTION.
#include <stdio.h>
int main()
{
    int i, n, j = 0, temp = 0, arr1[5];
    printf("Enter 5 numbers:\n");
    for (i = 0; i < 5; i++)
        scanf("%d", &arr1[i]);
    printf("Select the direction in which you want to rotate the array:\n");
    printf("1. Left\n");
    printf("2. Right\n");
    printf("Enter your choice:\n");
    scanf("%d", &n);
    switch (n)
    {
    case 1:
        printf("Enter the number of positions you want to rotate\n");
        scanf("%d", &n);
        for (i = 0; i < n; i++)
        {
            temp = arr1[j];
            for (j = 0; j < 4; j++)
                arr1[j] = arr1[j + 1];
            arr1[j] = temp;
            j = 0;
        }
        for (i = 0; i < 5; i++)
            printf("%d ", arr1[i]);
        break;

    case 2:
        printf("Enter the number of positions you want to rotate\n");
        scanf("%d", &n);
        for (i = 0; i < n; i++)
        {
            j = 4;
            temp = arr1[j];
            for (j = 4; j > 0; j--)
                arr1[j] = arr1[j - 1];
            arr1[j] = temp;
        }
        for (i = 0; i < 5; i++)
            printf("%d ", arr1[i]);
        break;

    default:
        printf("INVALID CHOICE");
        break;
    }
    return 0;
}