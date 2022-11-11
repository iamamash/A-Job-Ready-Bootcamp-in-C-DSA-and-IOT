// 1. Write a recursive function to print first N natural numbers
#include <stdio.h>
void printN(int);
int main()
{
    int num;
    printf("Enter a number:\n");
    scanf("%d", &num);
    printN(num);
    return 0;
}

void printN(int value)
{
    if (value != 0)
    {
        printN(value - 1);
        printf(" %d", value);
    }
}

// 2. Write a recursive function to print first N natural numbers in reverse order
#include <stdio.h>
void printRN(int);
int main()
{
    int num;
    printf("Enter a number:\n");
    scanf("%d", &num);
    printRN(num);
    return 0;
}

void printRN(int value)
{
    if (value != 0)
    {
        printf(" %d", value);
        printRN(value - 1);
    }
}

// 3. Write a recursive function to print first N odd natural numbers
#include <stdio.h>
void odd(int);
int main()
{
    int num;
    printf("Enter a number:\n");
    scanf("%d", &num);
    odd(num);
    return 0;
}

void odd(int value)
{
    if (value != 0)
    {
        odd(value - 1);
        printf(" %d", 2 * value - 1);
    }
}

// 4. Write a recursive function to print first N odd natural numbers in reverse order
#include <stdio.h>
void odd(int);
int main()
{
    int num;
    printf("Enter a number:\n");
    scanf("%d", &num);
    odd(num);
    return 0;
}

void odd(int value)
{
    if (value != 0)
    {
        printf(" %d", 2 * value - 1);
        odd(value - 1);
    }
}

// 5. Write a recursive function to print first N even natural numbers
#include <stdio.h>
void even(int);
int main()
{
    int num;
    printf("Enter a number:\n");
    scanf("%d", &num);
    even(num);
    return 0;
}

void even(int value)
{
    if (value != 0)
    {
        even(value - 1);
        printf(" %d", 2 * value);
    }
}

// 6. Write a recursive function to print first N even natural numbers in reverse order
#include <stdio.h>
void even(int);
int main()
{
    int num;
    printf("Enter a number:\n");
    scanf("%d", &num);
    even(num);
    return 0;
}

void even(int value)
{
    if (value != 0)
    {
        printf(" %d", 2 * value);
        even(value - 1);
    }
}

// 7. Write a recursive function to print squares of first N natural numbers
#include <stdio.h>
void square(int);
int main()
{
    int num;
    printf("Enter a number:\n");
    scanf("%d", &num);
    square(num);
    return 0;
}

void square(int value)
{
    if (value != 0)
    {
        square(value - 1);
        printf(" %d", value * value);
    }
}

// 8. Write a recursive function to print binary of a given decimal number
#include <stdio.h>
int binary(int);
int main()
{
    int num;
    printf("Enter a number:\n");
    scanf("%d", &num);
    printf("%d", binary(num));
    return 0;
}

int binary(int value)
{
    if (value != 0)
    {
        return value % 2 + 10 * binary(value / 2);
    }
}

// 9. Write a recursive function to print octal of a given decimal number
#include <stdio.h>
int octal(int);
int main()
{
    int num;
    printf("Enter a number:\n");
    scanf("%d", &num);
    if (num < 8)
    {
        return printf("%d", num);
    }
    printf("%d", octal(num));
    return 0;
}

int octal(int value)
{
    if (value >= 1)
    {
        return value % 8 + 10 * octal(value / 8);
    }
}

// 10. Write a recursive function to print reverse of a given number
#include <stdio.h>
int reverse(int);
int main()
{
    int num;
    printf("Enter a number:\n");
    scanf("%d", &num);
    if (num < 10)
    {
        return printf("%d", num);
    }
    printf("%d", reverse(num));
    return 0;
}

int rem, sum = 0;
int reverse(int value)
{
    if (value != 0)
    {
        rem = value % 10;
        sum = sum * 10 + rem;
        reverse(value / 10);
    }
    else
        return sum;
    return sum;
}