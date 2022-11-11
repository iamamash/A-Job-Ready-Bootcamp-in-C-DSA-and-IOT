// 1. Write a function to calculate LCM of two numbers. (TSRS)
#include <stdio.h>
int LCM(int, int);
int main()
{
    int num1, num2;
    printf("Enter two numbers:\n");
    scanf("%d %d", &num1, &num2);
    LCM(num1, num2);
    return 0;
}

int LCM(int value1, int value2)
{
    int max;
    max = (value1 > value2) ? value1 : value2;
    while (1)
    {
        if (max % value1 == 0 && max % value2 == 0)
        {
            printf("LCM is: %d", max);
            break;
        }
        ++max;
    }
    return 0;
}

// 2. Write a function to calculate HCF of two numbers. (TSRS)
#include <stdio.h>
int HCF(int, int);
int main()
{
    int num1, num2;
    printf("Enter two numbers: \n");
    scanf("%d %d", &num1, &num2);
    HCF(num1, num2);
}

int HCF(int value1, int value2)
{
    int hcf;
    for (int i = 1; i <= value1 || i <= value2; i++)
    {
        if (value1 % i == 0 && value2 % i == 0)
        {
            hcf = i;
        }
    }
    printf("HCF is: %d", hcf);
    return 0;
}

// 3. Write a function to check whether a given number is Prime or not. (TSRS)
#include <stdio.h>
#include <stdlib.h>
int prime(int);
int main()
{
    int num;
    printf("Enter a number:\n");
    scanf("%d", &num);
    prime(num);
    return 0;
}

int prime(int value)
{
    int i;
    for (i = 2; i < value; i++)
    {
        if (value % i == 0)
        {
            printf("%d is not a prime number", value);
            exit(0);
        }
    }
    return printf("%d is a prime number", value);
}

// 4. Write a function to find the next prime number of a given number. (TSRS)
#include <stdio.h>
int nextPrime(int);
int main()
{
    int num;
    printf("Enter a number:\n");
    scanf("%d", &num);
    nextPrime(num);
    return 0;
}

int nextPrime(int value)
{
    int i, val;
    val = value + 1;
    while (val)
    {
        i = 2;
        while (i < value * 2)
        {
            if (i != val)
            {
                if (val % i == 0)
                {
                    ++val;
                    continue;
                }
                else
                    i++;
            }
            else
                break;
        }
        return printf("%d is the next prime number", val);
    }
}

// 5. Write a function to print first N prime numbers (TSRN)
#include <stdio.h>
#include <stdlib.h>
void PRIME(int);
int main()
{
    int num;
    printf("Enter a number:\n");
    scanf("%d", &num);
    PRIME(num);
    return 0;
}

void PRIME(int value)
{
    int i, val = 2, count = 0;
    while (count < value)
    {
        i = 2;
        while (i < val)
        {
            if (val % i == 0)
            {
                ++val;
                i = 2;
                continue;
            }
            else
                i++;
        }
        printf(" %d", val);
        val++;
        count++;
    }
    exit(0);
}

// 6. Write a function to print all Prime numbers between two given numbers. (TSRN)
#include <stdio.h>
#include <stdlib.h>
void Prime(int, int);
int main()
{
    int num1, num2;
    printf("Enter two numbers:\n");
    scanf("%d %d", &num1, &num2);
    Prime(num1, num2);
    return 0;
}

void Prime(int value1, int value2)
{
    int i, num1, num2;
    num1 = value1;
    num2 = value2;
    while (num1 < num2)
    {
        i = 2;
        while (i < num1 && num1 <= num2)
        {
            if (num1 == num2)
            {
                if (num1 % i == 0)
                {
                    exit(0);
                }
                i++;
            }
            else if (num1 % i == 0)
            {
                ++num1;
                i = 2;
                continue;
            }
            else
                i++;
        }
        printf(" %d", num1);
        num1++;
    }
}

// 7. Write a function to print first N terms of Fibonacci series (TSRN)
#include <stdio.h>
void fibonacci(int);
int main()
{
    int num;
    printf("Enter a number:\n");
    scanf("%d", &num);
    fibonacci(num);
    return 0;
}

void fibonacci(int value)
{
    int count = 2, a = 1, b = 1, c;
    if (value == 1)
    {
        printf(" %d", a);
    }
    else if (value == 2)
    {
        printf("%d %d", a, b);
    }
    else
    {
        printf("%d %d", a, b);
        while (count < value)
        {
            if (count != value)
            {
                c = a + b;
                printf(" %d", c);
                count++;
            }
            else
            {
                break;
            }
            if (count != value)
            {
                a = b + c;
                printf(" %d", a);
                count++;
            }
            else
            {
                break;
            }
            if (count != value)
            {
                b = c + a;
                printf(" %d", b);
                count++;
            }
            else
            {
                break;
            }
        }
    }
}

// 8. Write a function to print PASCAL Triangle. (TSRN)
#include <stdio.h>
void pascal(int);
int main()
{
    int num;
    printf("Enter the number:\n");
    scanf("%d", &num);
    pascal(num);
    return 0;
}

void pascal(int value)
{
    int num, i, j, space;
    for (i = 0; i < value; i++)
    {
        num = 1;
        for (space = 0; space < value - i - 1; space++)
        {
            printf(" ");
        }
        for (j = 0; j <= i; j++)
        {
            printf("%d", num);
            printf(" ");
            num = num * (i - j) / (j + 1);
        }
        printf("\n");
    }
}

// 9. Write a program in C to find the square of any number using the function.
#include <stdio.h>
int square(int);
int main()
{
    int num;
    printf("Enter a number:\n");
    scanf("%d", &num);
    square(num);
    return 0;
}

int square(int value)
{
    return printf("Square of %d is: %d", value, value * value);
}

// 10. Write a program in C to find the sum of the series 1!/1+2!/2+3!/3+4!/4+5!/5 using the
// function.
#include <stdio.h>
int factorial();
int main()
{
    factorial();
    return 0;
}

int factorial()
{
    int sum, num1 = 1, num2 = 1, num3 = 1, num4 = 1, num5 = 1;
    for (int i = 1; i <= 2; i++)
    {
        num2 *= i;
    }
    for (int i = 1; i <= 3; i++)
    {
        num3 *= i;
    }
    for (int i = 1; i <= 4; i++)
    {
        num4 *= i;
    }
    for (int i = 1; i <= 5; i++)
    {
        num5 *= i;
    }
    sum = 1 / 1 + num2 / 2 + num3 / 3 + num4 / 4 + num5 / 5;
    return printf("Sum is: %d", sum);
}


// PASCAL TRIANGLE..
int fact(int value)
{
    int fact = 1;
    for (int i = value; i > 0; i--)
        fact *= i;
    return fact;
}

int combination(int n, int r)
{
    return fact(n) / (fact(r) * fact(n - r));
}

int permutation(int n, int r)
{
    return fact(n) / fact(n - r);
}

int pascal(int value)
{
    int i, j, space;
    for (i = 0; i < value; i++)
    {
        for (space = 0; space < value - i; space++)
        {
            printf(" ");
        }
        for (j = 0; j <= i; j++)
        {
            printf("%d ", combination(i, j));
        }
        printf("\n");
    }
    return 0;
}

#include <stdio.h>
int main()
{
    int num;
    printf("Enter the value:\n");
    scanf("%d", &num);
    pascal(num);
    return 0;
}