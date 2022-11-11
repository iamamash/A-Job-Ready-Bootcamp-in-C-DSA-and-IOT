// 1. Write a program to print unit digit of a given number.
#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter a number\n");
    scanf("%d", &a);
    b = a % 10;
    printf("The unit of the number is %d", b);
    return 0;
}

// 2. Write a program to print a given number without its last digit.
#include <stdio.h>
int main()
{
    int a;
    printf("Enter a number\n");
    scanf("%d", &a);
    printf("The given number %d without its last digit is: %d", a, a / 10);
    return 0;
}

// 3. Write a program to swap values of two int variables
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter a value for a:\n");
    scanf("%d", &a);
    printf("Enter a value for b:\n");
    scanf("%d", &b);
    c = a;
    a = b;
    b = c;
    printf("Swapped value of a is %d and b is %d", a, b);
    return 0;
}

// 4. Write a program to swap values of two int variables without using a third variable.
#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter a value for a:\n");
    scanf("%d", &a);
    printf("Enter a value for b:\n");
    scanf("%d", &b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("Swapped value of a is %d & b is %d", a, b);
    return 0;
}

// 5. Write a program to input a three-digit number and display the sum of the digits.
#include <stdio.h>
int main()
{
    int a, sum = 0;
    printf("Enter a three digit number:\n");
    scanf("%d", &a);
    if (a <= 0 || a > 999)
        printf("The digits exceeds the limit");
    while (a != 0)
    {
        sum += a % 10;
        a = a / 10;
    }
    printf("Sum is: %d", sum);
    return 0;
}

// 6. Write a program which takes a character as an input and displays its ASCII code.
#include <stdio.h>
int main()
{
    char a;
    printf("Enter a character:\n");
    scanf("%c", &a);
    printf("The ASCII code of character is: %d", a);
    return 0;
}

// 7. Write a program to find the position of first 1 in LSB.
#include <stdio.h>
int main()
{
    int a, result = 0, count = 0;
    printf("Enter a number:\n");
    scanf("%d", &a);
    while (a != 0)
    {
        result = a & 1;
        count++;
        if (result == 1)
        {
            printf("The position of the first 1 in LSB is: %d", count);
            break;
        }
        else
            a = a >> 1;
    }
    return 0;
}

// 8. Write a program to check whether the given number is even or odd using a bitwise
// operator.
#include <stdio.h>
int main()
{
    int a;
    printf("Enter a number:\n");
    scanf("%d", &a);
    if (a & 1 == 1)
    {
        printf("%d is odd", a);
    }
    else
    {
        printf("%d is even", a);
    }
    return 0;
}

// 9. Write a program to print size of an int, a float, a char and a double type variable
#include <stdio.h>
int main()
{
    int i;
    float f;
    char c;
    double d;
    i = sizeof(i);
    f = sizeof(f);
    c = sizeof(c);
    d = sizeof(d);
    printf("The size of int is: %d\n", i);
    printf("The size of float is: %f\n", f);
    printf("The size of char is: %c\n", c);
    printf("The size of double is: %lf\n", d);
    return 0;
}

// 10. Write a program to make the last digit of a number stored in a variable as zero.
// (Example - if x=2345 then make it x=2340)
#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter a number\n");
    scanf("%d", &a);
    b = a % 10;
    a = a - b;
    printf("The new number is: %d", a);
    return 0;
}

// 11. Write a program to input a number from the user and also input a digit. Append a
// digit in the number and print the resulting number. (Example - number=234 and
// digit=9 then the resulting number is 2349)
#include <stdio.h>
int main()
{
    int n, d;
    printf("Enter a number:\n");
    scanf("%d", &n);
    printf("Enter a number:\n");
    scanf("%d", &d);
    n = n * 10;
    n = n + d;
    printf("The new number is: %d", n);
    return 0;
}

// 12. Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR and
// convert it into USD.
#include <stdio.h>
int main()
{
    float inr, usd;
    printf("Enter the amount in INR:\n");
    scanf("%f", &inr);
    usd = inr / 76.23;
    printf("%f INR in USD is: %f", inr, usd);
    return 0;
}

// 13. Write a program to take a three-digit number from the user and rotate its digits by
// one position towards the right.
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a, i, num;
    printf("Enter a three digit number:\n");
    scanf("%d", &a);
    if (a <= 99 || a > 999)
    {
        printf("INVALID NUMBER");
        exit(0);
    }
    while (a != 0)
    {
        num = a % 10;
        a = a / 10;
        printf("%d", num);
    }
    return 0;
}
