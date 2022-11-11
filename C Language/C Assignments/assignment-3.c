// 1. Write a program to check whether a given number is positive or non-positive.
#include <stdio.h>
int main()
{
    int a;
    printf("Enter a number\n");
    scanf("%d", &a);
    if (a > 0)
    {
        printf("%d is a positive number", a);
    }
    else
    {
        printf("%d is a non-positive number", a);
    }
    return 0;
}

// 2. Write a program to check whether a given number is divisible by 5 or not
#include <stdio.h>
int main()
{
    int a;
    printf("Enter a number\n");
    scanf("%d", &a);
    if (a % 5 == 0)
    {
        printf("%d is divisible by 5", a);
    }
    else
    {
        printf("%d is not divisible by 5", a);
    }
    return 0;
}

// 3. Write a program to check whether a given number is an even number or an odd
// number.
#include <stdio.h>
int main()
{
    int a;
    printf("Enter a number\n");
    scanf("%d", &a);
    if (a % 2 == 0)
    {
        printf("%d is an even number", a);
    }
    else
    {
        printf("%d is not an even number", a);
    }
    return 0;
}

// 4. Write a program to check whether a given number is an even number or an odd
// number without using % operator.
#include <stdio.h>
int main()
{
    int a;
    printf("Enter a number\n");
    scanf("%d", &a);
    if ((a & 1) == 0)
    {
        printf("%d is an even number", a);
    }
    else
    {
        printf("%d is not an even number", a);
    }
    return 0;
}

// 5. Write a program to check whether a given number is a three-digit number or not.
#include <stdio.h>
int main()
{
    int a;
    printf("Enter a number\n");
    scanf("%d", &a);
    if (a >= 100 || a <= -100)
    {
        printf("%d is a three digit number", a);
    }
    else
    {
        printf("%d is not a three digit number", a);
    }
    return 0;
}

// 6. Write a program to print greater between two numbers. Print one number of both are
// the same.
#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter two numbers\n");
    scanf("%d %d", &a, &b);
    if (a > b)
    {
        printf("%d is greater number than %d", a, b);
    }
    else if (a == b)
    {
        printf("%d is equal to %d", a, b);
    }
    else
    {
        printf("%d is greater number than %d", b, a);
    }

    return 0;
}

// 7. Write a program to check whether roots of a given quadratic equation are real &
// distinct, real & equal or imaginary roots
#include <stdio.h>
#include <math.h>
int main()
{
    double a, b, c, discriminant, root1, root2, realPart, imagPart;
    printf("Enter the cofficient of a, b & c\n");
    scanf("%lf %lf %lf", &a, &b, &c);
    discriminant = b * b - 4 * a * c;
    if (discriminant > 0)
    {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("The roots of the quadratic equation are real\n");
    }
    else if (discriminant == 0)
    {
        root1 = root2 = -b / (2 * a);
        printf("The root of the quadratic equation is real & equal\n");
    }
    else
    {
        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);
        printf("root1 = %.2lf+%.2lfi and root2 = %.2f-%.2fi", realPart, imagPart, realPart, imagPart);
    }
    return 0;
}

// 8. Write a program to check whether a given year is a leap year or not.
#include <stdio.h>
int main()
{
    int y;
    printf("Enter a year\n");
    scanf("%d", &y);
    if (y % 4 == 0)
    {
        printf("%d is leap year", y);
    }
    else
    {
        printf("%d is not a leap year", y);
    }
    return 0;
}

// 9. Write a program to find the greatest among three given numbers. Print number once
// if the greatest number appears two or three times.
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter three numbers\n");
    scanf("%d %d %d", &a, &b, &c);
    if ((a >= b) && (a >= c))
    {
        printf("%d is greater", a);
    }
    else if ((b >= a) && (b >= c))
    {
        printf("%d is greater", b);
    }
    else
    {
        printf("%d is greater", c);
    }
    return 0;
}

// 10. Write a program which takes the cost price and selling price of a product from the
// user. Now calculate and print profit or loss percentage.
#include <stdio.h>
int main()
{
    int a, b, c, s, p, l;
    printf("Enter cost price\n");
    scanf("%d", &c);
    printf("Enter selling price\n");
    scanf("%d", &s);

    a = s - c;           // Formula for calculating profit.
    p = ((a * 100) / c); // Formula for calculating profit%
    printf("profit percentage is %d\n", p);

    b = c - s;           // Formula for calculating profit.
    l = ((b * 100) / c); // Formula for calculating profit.
    printf("loss percentage is %d", l);
    return 0;
}

// 11. Write a program to take marks of 5 subjects from the user. Assume marks are given
// out of 100 and passing marks is 33. Now display whether the candidate passed the
// examination or failed.
#include <stdio.h>
int main()
{
    int amash, diggi, pankaj, rohan, subhnesh;
    printf("Enter the marks:\n");
    scanf("%d %d %d %d %d", &amash, &diggi, &pankaj, &rohan, &subhnesh);
    if (amash >= 33)
    {
        printf("amash has passed the exmination\n");
    }
    else
    {
        printf("amash has failed the exmination\n");
    }
    if (diggi >= 33)
    {
        printf("diggi has passed the exmination\n");
    }
    else
    {
        printf("diggi has failed the exmination\n");
    }
    if (pankaj >= 33)
    {
        printf("pankaj has passed the exmination\n");
    }
    else
    {
        printf("pankaj has failed the exmination\n");
    }
    if (rohan >= 33)
    {
        printf("rohan has passed the exmination\n");
    }
    else
    {
        printf("rohan has failed the exmination\n");
    }
    if (subhnesh >= 33)
    {
        printf("subhnesh has passed the exmination\n");
    }
    else
    {
        printf("subhnesh has failed the exmination\n");
    }
    return 0;
}

// 12. Write a program to check whether a given alphabet is in uppercase or lowercase.
#include <stdio.h>
int main()
{
    char a;
    printf("Enter an alphabet\n");
    scanf("%c", &a);
    if (a >= 65 && a <= 90)
    {
        printf("%c is an uppercase alphabet", a);
    }
    else if (a >= 97 && a <= 122)
    {
        printf("%c is an lowercase alphabet", a);
    }
    return 0;
}

// 13. Write a program to check whether a given number is divisible by 3 and divisible by 2.
#include <stdio.h>
int main()
{
    int a;
    printf("Enter a number\n");
    scanf("%d", &a);
    if (a % 3 == 0)
    {
        printf("%d is divisible by 3", a);
    }
    else if (a % 2 == 0)
    {
        printf("%d  is divisible by 2", a);
    }
    else
    {
        printf("%d is niether divisible by 3 nor 2", a);
    }
    return 0;
}

// 14. Write a program to check whether a given number is divisible by 7 or divisible by 3.
#include <stdio.h>
int main()
{
    int a;
    printf("Enter a number\n");
    scanf("%d", &a);
    if (a % 3 == 0)
    {
        printf("%d is divisible by 3", a);
    }
    else if (a % 7 == 0)
    {
        printf("%d  is divisible by 7", a);
    }
    else
    {
        printf("%d is niether divisible by 3 nor 7", a);
    }
    return 0;
}

// 15. Write a program to check whether a given number is positive, negative or zero.
#include <stdio.h>
int main()
{
    int a;
    printf("Enter a number\n");
    scanf("%d", &a);
    if (a > 0)
    {
        printf("%d is a positive number", a);
    }
    else if (a < 0)
    {
        printf("%d  is a negative number", a);
    }
    else
    {
        printf("%d is a zero", a);
    }
    return 0;
}

// 16. Write a program to check whether a given character is an alphabet (uppercase), an
// alphabet (lower case), a digit or a special character.
#include <stdio.h>
int main()
{
    char a;
    printf("Enter an alphabet\n");
    scanf("%c", &a);
    if (a >= 65 && a <= 90)
    {
        printf("%c is an uppercase alphabet", a);
    }
    else if (a >= 97 && a <= 122)
    {
        printf("%c is a lowercase alphabet", a);
    }
    else if (a >= 48 && a <= 57)
    {
        printf("%c is a digit", a);
    }
    else if ((a >= 33 && a <= 47) || (a >= 58 && a <= 64) || (a >= 91 && a <= 96) || (a >= 123 && a <= 126))
    {
        printf("%c is a special character", a);
    }
    return 0;
}

// 17. Write a program which takes the length of the sides of a triangle as an input. Display
// whether the triangle is valid or not.
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter three numbers\n");
    scanf("%d %d %d", &a, &b, &c);
    if ((a + b + c == 180) && a != 0 && b != 0 && c != 0)
    {
        printf("This is a valid triangle");
    }
    else
    {
        printf("This is not a valid triagle");
    }
    return 0;
}

// 18. Write a program which takes the month number as an input and display number of
// days in that month.
#include <stdio.h>
int main()
{
    int m;
    printf("Enter a month\n");
    scanf("%d", &m);
    if ((m == 1) || (m == 3) || (m == 5) || (m == 7) || (m == 8) || (m == 1) || (m == 10) || (m == 12))
    {
        printf("This month has 31 days");
    }
    else if ((m == 4) || (m == 6) || (m == 9) || (m == 11))
    {
        printf("This month has 30 days");
    }
    else if (m == 2)
    {
        printf("This month has 28 days");
    }
    else
    {
        printf("Invalid month");
    }
    return 0;
}