// 1. Write a recursive function to calculate sum of first N natural numbers.
#include <stdio.h>
int printN(int);
int main()
{
    int num;
    printf("Enter a number:\n");
    scanf("%d", &num);
    printf("%d", printN(num));
    return 0;
}

int printN(int value)
{
    if (value != 0)
    {
        return value + printN(value - 1);
    }
}

// 2. Write a recursive function to calculate sum of first N odd natural numbers.
#include <stdio.h>
int odd(int);
int main()
{
    int num;
    printf("Enter a number:\n");
    scanf("%d", &num);
    printf("%d", odd(num));
    return 0;
}

int odd(int value)
{
    if (value != 0)
    {
        return 2 * value - 1 + odd(value - 1);
    }
}

// 3. Write a recursive function to calculate sum of first N even natural numbers.
#include <stdio.h>
int even(int);
int main()
{
    int num;
    printf("Enter a number:\n");
    scanf("%d", &num);
    printf("%d", even(num));
    return 0;
}

int even(int value)
{
    if (value != 0)
    {
        return 2 * value + even(value - 1);
    }
}

// 4. Write a recursive function to calculate sum of squares of first n natural numbers.
#include <stdio.h>
int square(int);
int main()
{
    int num;
    printf("Enter a number:\n");
    scanf("%d", &num);
    printf("%d", square(num));
    return 0;
}

int square(int value)
{
    if (value != 0)
    {
        return value * value + square(value - 1);
    }
}

// 5. Write a recursive function to calculate sum of digits of a given number.
#include <stdio.h>
int sum(int);
int main()
{
    int num;
    printf("Enter a number:\n");
    scanf("%d", &num);
    printf("%d", sum(num));
    return 0;
}

int sum(int value)
{
    if (value != 0)
    {
        return value % 10 + sum(value / 10);
    }
}

// 6. Write a recursive function to calculate factorial of a given number.
#include <stdio.h>
int fact(int);
int main()
{
    int num;
    printf("Enter a number:\n");
    scanf("%d", &num);
    printf("%d", fact(num));
    return 0;
}

int fact(int value)
{
    if (value >= 2)
    {
        return value * fact(value - 1);
    }
}

// 7. Write a recursive function to calculate HCF of two numbers.
#include <stdio.h>
int hcf(int, int);
int main()
{
    int num1, num2;
    printf("Enter two numbers:\n");
    scanf("%d %d", &num1, &num2);
    printf("%d", hcf(num1, num2));
    return 0;
}

int hcf(int value1, int value2)
{
    while (value1 != value2)
    {
        if (value1 > value2)
            return hcf(value1 - value2, value2);
        else
            return hcf(value1, value2 - value1);
    }
    return value1;
}

// 8. Write a recursive function to print first N terms of Fibonacci series.
#include <stdio.h>
void fib(int);
int main()
{
    int num, n2 = 1, n3 = 1;
    printf("Enter a number:\n");
    scanf("%d", &num);
    printf("%d %d", n2, n3);
    fib(num - 2);
    return 0;
}

int a = 1, b = 1;
void fib(int value)
{
    int var, count = 0;
    if (count <= value && value != 0)
    {
        var = a;
        a = a + b;
        printf(" %d", a);
        ++count;
        b = var;
        fib(value - 1);
    }
}

// 9. Write a program in C to count the digits of a given number using recursion.
#include <stdio.h>
int counts(int);
int count = 0;
int main()
{
    int num;
    printf("Enter a number:\n");
    scanf("%d", &num);
    counts(num);
    printf("%d", count);
    return 0;
}

int counts(int value)
{
    if (value != 0)
    {
        value / 10;
        count++;
        return counts(value / 10);
    }
}

// 10. Write a program in C to calculate the power of any number using recursion.
#include <stdio.h>
int pwr(int, int);
int main()
{
    int base, power;
    printf("Enter the base:\n");
    scanf("%d", &base);
    printf("Enter the power:\n");
    scanf("%d", &power);
    printf("Answer is : %d", pwr(base, power));
    return 0;
}

int pwr(int value1, int value2)
{
    if (value2 != 0)
        return value1 * pwr(value1, value2 - 1);
    else
        return 1;
}