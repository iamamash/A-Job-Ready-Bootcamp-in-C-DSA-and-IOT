// 1. Write a program to calculate sum of first N natural numbers.
#include <stdio.h>
int main()
{
    int sum = 0, i, n;
    printf("Enter a number:\n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        sum = i + sum;
        if (i > n)
        {
            break;
        }
    }
    printf("%d\n", sum);
    return 0;
}

// 2. Write a program to calculate sum of first N even natural numbers.
#include <stdio.h>
int main()
{
    int sum = 0, i, n;
    printf("Enter a number:\n");
    scanf("%d", &n);
    for (i = 1; i <= n * 2; i++)
    {
        if (i % 2 == 0)
        {
            sum = i + sum;
        }
        else
        {
            continue;
        }
    }
    printf("%d\n", sum);
    return 0;
}

// 3. Write a program to calculate sum of first N odd natural numbers.
#include <stdio.h>
int main()
{
    int sum = 0, i, n;
    printf("Enter a number:\n");
    scanf("%d", &n);
    for (i = 1; i <= n * 2; i++)
    {
        if (i % 2 != 0)
        {
            sum = i + sum;
        }
        else
        {
            continue;
        }
    }
    printf("%d\n", sum);
    return 0;
}

// 4. Write a program to calculate sum of squares of first N natural numbers.
#include <stdio.h>
int main()
{
    int sqr = 0, i, n;
    printf("Enter a number:\n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        sqr = (i * i) + sqr;
    }
    printf("%d\n", sqr);
    return 0;
}

// 5. Write a program to calculate sum of cubes of first N natural numbers.
#include <stdio.h>
int main()
{
    int sqr = 0, i, n;
    printf("Enter a number:\n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        sqr = (i * i * i) + sqr;
    }
    printf("%d\n", sqr);
    return 0;
}

// 6. Write a program to calculate factorial of a number.
#include <stdio.h>
int main()
{
    int factorial = 1, i, n;
    printf("Enter a number:\n");
    scanf("%d", &n);
    if (n != 0)
    {
        for (i = n; i > 0; i--)
        {
            factorial = factorial * i;
        }
        printf("%d", factorial);
    }
    else
    {
        printf("Invalid Number\n");
    }
    return 0;
}

// 7. Write a program to count digits in a given number.
#include <stdio.h>
int main()
{
    int n, count = 0;
    printf("Enter a number:\n");
    scanf("%d", &n);
    while (1)
    {
        if (n != 0)
        {
            n = n / 10;
            count++;
        }
        else
        {
            break;
        }
    }
    printf("The digits present in the  number are: %d", count);
    return 0;
}

// 8. Write a program to check whether a given number is a Prime number or
// not.
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, n, temp = 1, p;
    printf("Enter a number:\n");
    scanf("%d", &n);
    for (i = 2; i < n; i++)
    {
        temp = n % i;
        if (temp == 0)
        {
            printf("%d is not a prime number", n);
            break;
        }
    }
    if (temp != 0)
    {
        printf("%d is a prime number", n);
    }
    return 0;
}

// 9. Write a program to calculate LCM of two numbers.
#include <stdio.h>
int main()
{
    int max, n, m;
    printf("Enter two positive numbers:\n");
    scanf("%d %d", &n, &m);
    max = (n > m) ? n : m;
    while (1)
    {
        if (max % n == 0 && max % m == 0)
        {
            printf("The LCM of %d & %d is: %d", n, m, max);
            break;
        }
        ++max;
    }
    return 0;
}

// 10. Write a program to reverse a given number.
#include <stdio.h>
int main()
{
    int n, temp = 0, r = 0;
    printf("Enter a number:\n");
    scanf("%d", &n);
    while (1)
    {
        if (n != 0)
        {
            temp = n % 10;
            n = n / 10;
            r = (r + temp) * 10;
        }
        else
        {
            break;
        }
    }
    printf("The reversed number is: %d", r / 10);
    return 0;
}