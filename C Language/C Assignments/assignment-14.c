// 1. Write a program to calculate the sum of numbers stored in an array of size 10. Take
// array values from the user.
#include <stdio.h>
int main()
{
    int i, sum = 0, arr[10];
    printf("Enter 10 numbers:\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    printf("Sum is: %d", sum);
    return 0;
}

// 2. Write a program to calculate the average of numbers stored in an array of size 10.
// Take array values from the user.
#include <stdio.h>
int main()
{
    int i, sum = 0, arr[10];
    float avg;
    printf("Enter 10 numbers:\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    printf("%f", avg = sum / 10.0);
    return 0;
}

// 3. Write a program to calculate the sum of all even numbers and sum of all odd
// numbers, which are stored in an array of size 10. Take array values from the user.
#include <stdio.h>
int main()
{
    int sumEven = 0, sumOdd = 0, arr[10];
    printf("Enter 10 numbers:\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0)
            sumEven += arr[i];
        else
            sumOdd += arr[i];
    }
    printf("Sum of even numbers is: %d\n", sumEven);
    printf("Sum of odd numbers is: %d", sumOdd);
    return 0;
}

// 4. Write a program to find the greatest number stored in an array of size 10. Take array
// values from the user.
#include <stdio.h>
int main()
{
    int i, greatest, arr[10];
    printf("Enter 10 numbers:\n");
    for (i = 0; i < 10; i++)
        scanf("%d", &arr[i]);
    greatest = arr[0];
    for (i = 0; i < 10; i++)
    {
        if (arr[i] > greatest)
            greatest = arr[i];
    }
    printf("Greatest number in array is %d ", greatest);
    return 0;
}

// 10. Write a program to find the smallest number stored in an array of size 10. Take array
// values from the user.
#include <stdio.h>
int main()
{
    int i, smallest, arr[10];
    printf("Enter 10 numbers:\n");
    for (i = 0; i < 10; i++)
        scanf("%d", &arr[i]);
    smallest = arr[0];
    for (i = 0; i < 10; i++)
    {
        if (arr[i] < smallest)
            smallest = arr[i];
    }
    printf("Smallest number in array is %d ", smallest);
    return 0;
}

// 6. Write a program to sort elements of an array of size 10. Take array values from the
// user.
#include <stdio.h>
int main()
{
    int i, var = 0, arr[10];
    printf("Enter 10 numbers:\n");
    for (i = 0; i < 10; i++)
        scanf("%d", &arr[i]);
    for (i = 0; i < 10; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            if (arr[i] < arr[j])
                continue;
            else
            {
                var = arr[i];
                arr[i] = arr[j];
                arr[j] = var;
                var = 0;
            }
        }
        printf("%d ", arr[i]);
    }
    return 0;
}

// 7. Write a program to find second largest in an array.Take array values from the user.
#include <stdio.h>
int main()
{
    int i, var = 0, arr[10];
    printf("Enter 10 numbers:\n");
    for (i = 0; i < 10; i++)
        scanf("%d", &arr[i]);
    for (i = 0; i < 10; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            if (arr[i] < arr[j])
                continue;
            else
            {
                var = arr[i];
                arr[i] = arr[j];
                arr[j] = var;
                var = 0;
            }
        }
    }
    printf("%d is the second largest number in the array", arr[i - 2]);
    return 0;
}

// 8. Write a program to find the second smallest number in an array.Take array values
// from the user.
#include <stdio.h>
int main()
{
    int i, var = 0, arr[10];
    printf("Enter 10 numbers:\n");
    for (i = 0; i < 10; i++)
        scanf("%d", &arr[i]);
    for (i = 0; i < 10; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            if (arr[i] > arr[j])
                continue;
            else
            {
                var = arr[i];
                arr[i] = arr[j];
                arr[j] = var;
                var = 0;
            }
        }
    }
    printf("%d is the second smallest number in the array", arr[i - 2]);
    return 0;
}

// 9. Write a program in C to read n number of values in an array and display it in reverse
// order. Take array values from the user.
#include <stdio.h>
int main()
{
    int i, j, arr1[10], arr2[10];
    printf("Enter 10 numbers:\n");
    for (i = 0; i < 10; i++)
        scanf("%d", &arr1[i]);
    for (i = 9; i >= 0; i--)
    {
        for (j = 9 - i; j < 10;)
        {
            arr2[j] = arr1[i];
            printf("%d ", arr2[j]);
            break;
        }
    }
    return 0;
}

// 10. Write a program in C to copy the elements of one array into another array.Take array
// values from the user.
#include <stdio.h>
int main()
{
    int i, j, arr1[10], arr2[10];
    printf("Enter 10 numbers:\n");
    for (i = 0; i < 10; i++)
        scanf("%d", &arr1[i]);
    for (i = 0; i < 10; i++)
    {
        for (j = i; j < 10;)
        {
            arr2[j] = arr1[i];
            printf("%d ", arr2[j]);
            break;
        }
    }
    return 0;
}