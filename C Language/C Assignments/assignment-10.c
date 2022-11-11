// 1. Write a function to calculate the area of a circle. (TSRS)
#include <stdio.h>
int area(int);
int main()
{
    int radius;
    printf("Enter the radius value:\n");
    scanf("%d", &radius);
    area(radius);
    return 0;
}

int area(int r)
{
    int area;
    area = 3.14 * (r * r);
    return printf("Area is: %d", area);
}

// 2. Write a function to calculate simple interest. (TSRS)
#include <stdio.h>
int si(int, int, int);
int main()
{
    int P, R, T;
    printf("Enter the amount:\n");
    scanf("%d", &P);
    printf("Enter the interest:\n");
    scanf("%d", &R);
    printf("Enter the time:\n");
    scanf("%d", &T);
    si(P, R, T);
    return 0;
}

int si(int p, int r, int t)
{
    return printf("Simple Interest is: %d", (p * r * t) / 100);
}

// 3. Write a function to check whether a given number is even or odd. Return 1 if the
// number is even, otherwise return 0. (TSRS)
#include <stdio.h>
int check(int);
int main()
{
    int num;
    printf("Enter a number:\n");
    scanf("%d", &num);
    check(num);
    return 0;
}

int check(int value)
{
    if (value % 2 == 0)
        return 1;
    else
        return 0;
}

// 4. Write a function to print first N natural numbers (TSRN)
#include <stdio.h>
void natural(int);
int main()
{
    int num;
    printf("Enter the value:\n");
    scanf("%d", &num);
    natural(num);
    return 0;
}

void natural(int value)
{
    int n;
    for (n = 1; n <= value; n++)
    {
        printf(" %d", n);
    }
}

// 5. Write a function to print first N odd natural numbers. (TSRN)
#include <stdio.h>
void oddNatural(int);
int main()
{
    int num;
    printf("Enter the value:\n");
    scanf("%d", &num);
    oddNatural(num);
    return 0;
}

void oddNatural(int value)
{
    for (int i = 1; i <= value; i++)
    {
        if (i % 2 == 0)
            continue;
        else
            printf(" %d", i);
    }
}

// 6. Write a function to calculate the factorial of a number. (TSRS)
#include <stdio.h>
int fact(int);
int main()
{
    int num;
    printf("Enter a number:\n");
    scanf("%d", &num);
    fact(num);
    return 0;
}

int fact(int value)
{
    for (int i = value - 1; i >= 1; i--)
    {
        value *= i;
    }
    return printf("Factorial is %d", value);
}

// 7. Write a function to calculate the number of combinations one can make from n items
// and r selected at a time. (TSRS)
#include <stdio.h>
int factn(int);
int factr(int);
int factnr(int);
int main()
{
    int n, r;
    printf("Enter the value for n:\n");
    scanf("%d", &n);
    printf("Enter the value for r:\n");
    scanf("%d", &r);
    printf("The number of combinations one can make from n items and r selected at a time are: %d", factn(n) / factr(r) * factnr(n - r));
    return 0;
}

int factn(int value)
{
    int a = 1;
    for (int i = 1; i <= value; i++)
    {
        a *= i;
    }
    return a;
}

int factr(int value)
{
    int a = 1;
    for (int i = 1; i <= value; i++)
    {
        a *= i;
    }
    return a;
}

int factnr(int value)
{
    int a = 1;
    for (int i = 1; i <= value; i++)
    {
        a *= i;
    }
    return a;
}

// 8. Write a function to calculate the number of arrangements one can make from n items
// and r selected at a time. (TSRS)
#include <stdio.h>
int FACTN(int);
int FACTR(int);
int main()
{
    int n, r;
    printf("Enter the value for n:\n");
    scanf("%d", &n);
    printf("Enter the value for r:\n");
    scanf("%d", &r);
    printf("The number of arrangements one can make from n items and r selected at a time are: %d", FACTN(n) / FACTR(r));
    return 0;
}

int FACTN(int value)
{
    int a = 1;
    for (int i = 1; i <= value; i++)
    {
        a *= i;
    }
    return a;
}

int FACTR(int value)
{
    int a = 1;
    for (int i = 1; i <= value; i++)
    {
        a *= i;
    }
    return a;
}

// 9. Write a function to check whether a given number contains a given digit or not.
// (TSRS)
#include <stdio.h>
#include <stdlib.h>
int digitCheck(int, int);
int main()
{
    int num, digit;
    printf("Enter a number:\n");
    scanf("%d", &num);
    printf("Enter a digit:\n");
    scanf("%d", &digit);
    digitCheck(num, digit);
    return 0;
}

int digitCheck(int value, int d)
{
    int num;
    for (int i = 0; i <= value; i++)
    {
        num = value % 10;
        value = value / 10;
        if (num == d)
        {
            return printf("%d is present in number", num);
            exit(0);
        }
    }
    return printf("%d is not found in number", d);
}

// 10. Write a function to print all prime factors of a given number. For example, if the
// number is 36 then your result should be 2, 2, 3, 3. (TSRN)
#include <stdio.h>
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
    int val, count = 1;
    val = value;
    for (int i = 2; i <= value; i++)
    {
        if (val % i == 0)
        {
            while (1)
            {
                val = val / i;
                count *= i;
                printf(" %d", i);
                if (val % i == 0 && count != value && count <= value)
                    continue;
                else
                {
                    break;
                }
            }
            if (count == value)
                break;
        }
        else
            continue;
    }
    return 0;
}