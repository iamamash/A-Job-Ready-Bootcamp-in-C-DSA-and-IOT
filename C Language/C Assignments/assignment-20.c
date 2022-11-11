// 1. Write a function to swap values of two in variables of calling function. (TSRS)
#include <stdio.h>
int swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    return (*a, *b);
}

int main()
{
    int num1, num2;
    printf("Enter two numbers:\n");
    scanf("%d %d", &num1, &num2);
    swap(&num1, &num2);
    printf("a = %d, b = %d", num1, num2);
    return 0;
}

// 2. Write a function to swap strings of two char arrays of calling functions. (TSRS)
#include <stdio.h>
#include <string.h>
int SWAP(char *s1, char *s2)
{
    char temp[20];
    for (int i = 0; *(s1 + i); i++)
        temp[i] = *(s1 + i);
    for (int i = 0; *(s2 + i); i++)
        *(s1 + i) = *(s2 + i);
    for (int i = 0; temp[i]; i++)
        *(s2 + i) = temp[i];
    return (*s1, *s2);
}

int main()
{
    char str1[20], str2[20];
    printf("Enter two strings:\n");
    fgets(str1, 20, stdin);
    fflush(stdin);
    fgets(str2, 20, stdin);
    SWAP(str1, str2);
    printf("a = %sb = %s", str1, str2);
    return 0;
}

// 3. Write a function to sort an array of int type values. [ void sort(int *ptr,int size); ]
#include <stdio.h>
void sort(int *ptr, int size)
{
    int i, j, temp[5];
    for (i = 0; i < size; i++)
    {
        for (j = i + 1; j <= size - 1; j++)
        {
            if (*(ptr + i) < *(ptr + j))
                continue;
            else
            {
                temp[i] = *(ptr + i);
                *(ptr + i) = *(ptr + j);
                *(ptr + j) = temp[i];
            }
        }
        printf("%d ", *(ptr + i));
    }
}

int main()
{
    int i, arr[5];
    printf("Enter 5 values:\n");
    for (i = 0; i < 5; i++)
        scanf("%d", &arr[i]);
    sort(arr, 5);
    return 0;
}

// 4. Write a program in C to demonstrate how to handle the pointers in the program.
#include <stdio.h>
int func(int *ptr)
{
    int i, temp = 1;
    for (i = *ptr; i > 0; i--)
    {
        temp *= i;
    }
    return printf("Factorial of %d is: %d", *ptr, temp);
}

int main()
{
    int num;
    printf("Enter a number:\n");
    scanf("%d", &num);
    func(&num);
    return 0;
}

// 5. Write a program to find the maximum number between two numbers using a pointer.
#include <stdio.h>
int max(int *ptr1, int *ptr2)
{
    if (*ptr1 > *ptr2)
        return 1;
    else
        return 0;
}

int main()
{
    int num1, num2;
    printf("Enter two numbers:\n");
    scanf("%d %d", &num1, &num2);
    if (max(&num1, &num2))
        printf("%d is greater number.", num1);
    else
        printf("%d is greater number.", num2);
    return 0;
}

// 6. Write a program to calculate the length of the string using a pointer.
#include <stdio.h>
int len(char *p)
{
    int count = 0;
    for (int i = 0; *(p + i); i++)
    {
        ++count;
    }
    return printf("Length of the string is: %d", count - 1);
}

int main()
{
    char str[20];
    printf("Enter a string:\n");
    fgets(str, 20, stdin);
    len(str);
    return 0;
}

// 7. Write a program to count the number of vowels and consonants in a string using a
// pointer.
#include <stdio.h>
int check(char *p)
{
    int i, v = 0, c = 0;
    for (i = 0; *(p + i); i++)
    {
        if (*(p + i) != 32)
        {
            if ((*(p + i) == 65) || (*(p + i) == 69) || (*(p + i) == 73) || (*(p + i) == 79) || (*(p + i) == 85) || (*(p + i) == 97) || (*(p + i) == 101) || (*(p + i) == 105) || (*(p + i) == 111) || (*(p + i) == 117))
                ++v;
            else
                ++c;
        }
    }
    return printf("Vowels: %d, Consonants: %d", v, c - 1);
}

int main()
{
    char str[20];
    printf("Enter a string:\n");
    fgets(str, 20, stdin);
    check(str);
    return 0;
}

// 8. Write a program to compute the sum of all elements in an array using pointers.
#include <stdio.h>
int sum(int *ptr)
{
    int i, sum = 0;
    for (i = 0; i < 5; i++)
        sum += *(ptr + i);
    return printf("Sum of the elements is: %d", sum);
}

int main()
{
    int i, arr[5];
    printf("Enter 5 values:\n");
    for (i = 0; i < 5; i++)
        scanf("%d", &arr[i]);
    sum(arr);
    return 0;
}

// 9. Write a program to print the elements of an array in reverse order.
#include <stdio.h>
int rev(int *ptr)
{
    int i, j, a[5];
    for (i = 4; i >= 0; i--)
        for (j = 4 - i; j < 5;)
        {
            a[j] = *(ptr + i);
            break;
        }
    for (i = 0; i < 5; i++)
        printf("%d ", a[i]);
    return 0;
}

int main()
{
    int i, arr[5];
    printf("Enter 5 values:\n");
    for (i = 0; i < 5; i++)
        scanf("%d", &arr[i]);
    rev(arr);
    return 0;
}

// 10. Write a program to print a string in reverse using a pointer.
#include <stdio.h>
#include <string.h>
int revStr(char *p)
{
    char s[20];
    strcpy(s, strrev(p));
    return printf("%s", s);
}

int main()
{
    int i;
    char str[20];
    printf("Enter a string:");
    fgets(str, 20, stdin);
    revStr(str);
    return 0;
}
