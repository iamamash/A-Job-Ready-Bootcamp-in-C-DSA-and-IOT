// 1. Write a program which takes the month number as an input and display
// number of days in that month.
#include <stdio.h>
int main()
{
    int month;
    printf("Enter a number:\n");
    scanf("%d", &month);
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
        printf("There are 31 days in this month");
    else if (month == 4 || month == 6 || month == 9 || month == 11)
        printf("There are 30 days int his month");
    else if (month == 2)
        printf("There are 28 days in this month");
    else
        printf("INVALID MONTH");
    return 0;
}

// 2. Write a menu driven program with the following options:
// a. Addition
// b. Subtraction
// c. Multiplication
// d. Division
// e. Exit
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x, a, b;
    printf("Select one of the following:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Exit\n");
    printf("Enter your choice:\n");
    scanf("%d", &x);
    switch (x)
    {
    case 1:
        printf("Enter two numbers:\n");
        scanf("%d %d", &a, &b);
        printf("Sum is: %d", a + b);
        break;

    case 2:
        printf("Enter two numbers:\n");
        scanf("%d %d", &a, &b);
        printf("Difference is: %d", a - b);
        break;

    case 3:
        printf("Enter two numbers:\n");
        scanf("%d %d", &a, &b);
        printf("Product is: %d", a * b);
        break;

    case 4:
        printf("Enter two numbers:\n");
        scanf("%d %d", &a, &b);
        printf("Division is: %d", a / b);
        break;

    case 5:
        exit(0);
        break;

    default:
        printf("INVALID CHOICE");
        break;
    }
    return 0;
}

// 3. Write a program which takes the day number of a week and displays a
// unique greeting message for the day.
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x;
    printf("Select a day:\n");
    printf("1. Sunday\n");
    printf("2. Monday\n");
    printf("3. Tuesday\n");
    printf("4. Wednesday\n");
    printf("5. Thursday\n");
    printf("6. Friday\n");
    printf("7. Saturday\n");
    printf("Enter your choice:\n");
    scanf("%d", &x);
    switch (x)
    {
    case 1:
        printf("I wish you to have a Sunday filled with love and loved ones:-)");
        break;

    case 2:
        printf("Hope you have a great Monday:->");
        break;

    case 3:
        printf("Lots of wishes and blessings for the Tuesday:-}");
        break;

    case 4:
        printf("It must be Wednesday, there goes that camel again:+)");
        break;

    case 5:
        printf("Wishing you a lovely Thursday:~)");
        break;

    case 6:
        printf("Fridays best day to spend time with the people you love:-]");
        break;

    case 7:
        printf("Wishing you for the most fun Saturday:=)");
        break;

    default:
        printf("INVALID CHOICE");
        break;
    }
    return 0;
}

// 4. Write a menu driven program with the following options:
// a. Check whether a given set of three numbers are lengths of an
// isosceles triangle or not
// b. Check whether a given set of three numbers are lengths of sides of
// a right angled triangle or not
// c. Check whether a given set of three numbers are equilateral triangle
// or not
// d. Exit
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x, num1, num2, num3;
    printf("Select any one of the following:\n");
    printf("1. For checking an isosceles triangle.\n");
    printf("2. For checking an right triangle.\n");
    printf("3. For checking an equilateral triangle.\n");
    printf("4. Exit.\n");
    printf("Enter your choice:\n");
    scanf("%d", &x);
    switch (x)
    {
    case 1:
        printf("Enter three numbers as length of triangle:\n");
        scanf("%d %d %d", &num1, &num2, &num3);
        if (num1 == num2 || num1 == num3 || num2 == num3)
            printf("The given lengths are the sides of an isosceles triangle");
        else
            printf("The given lengths are not the sides of an isosceles triangle");
        break;

    case 2:
        printf("Enter first leg of the triangle:\n");
        scanf("%d", &num1);
        printf("Enter second leg of the triangle:\n");
        scanf("%d", &num2);
        printf("Enter hypotenuse of the triangle:\n");
        scanf("%d", &num3);
        x = (num1 * num1) + (num2 * num2);
        if (x == num3)
            printf("The given lengths are the sides of a right triangle");
        else
            printf("The given lengths are not the sides of a right triangle");
        break;

    case 3:
        printf("Enter three numbers as length of triangle:\n");
        scanf("%d %d %d", &num1, &num2, &num3);
        if (num1 == num2 && num1 == num3 && num2 == num3)
            printf("The given lengths are the sides of an equilateral triangle");
        else
            printf("The given lengths are not the sides of an equilateral triangle");
        break;

    case 4:
        exit(0);

    default:
        printf("INVALID CHOICE");
        break;
    }
    return 0;
}

// 5. Convert the following if-else-if construct into switch case:
// if(var == 1)
// System.out.println("good");
// else if(var == 2)
// System.out.println("better");
// else if(var == 3)
// System.out.println("best");
// else
// System.out.println("invalid");
#include <stdio.h>
int main()
{
    int var;
    printf("Select any one of the following:\n");
    printf("1.\n");
    printf("2.\n");
    printf("3.\n");
    printf("Enter your choice:\n");
    scanf("%d", &var);
    switch (var)
    {
    case 1:
        printf("good");
        break;

    case 2:
        printf("better");
        break;

    case 3:
        printf("best");
        break;

    default:
        printf("invalid");
        break;
    }
    return 0;
}

// 6. Program to check whether a year is a leap year or not. Using switch
// statement
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x, year;
    printf("Select any one of the following:\n");
    printf("1. Check whether a year is a leap year or not.\n");
    printf("2. Exit.\n");
    printf("Enter your choice:\n");
    scanf("%d", &x);
    switch (x)
    {
    case 1:
        printf("Enter a year:\n");
        scanf("%d", &year);
        if (year % 4 == 0)
            printf("%d is a leap year.", year);
        else
            printf("%d is not a leap year.", year);
        break;

    case 2:
        exit(0);

    default:
        printf("INVALID CHOICE");
        break;
    }
    return 0;
}

// 7. Program to take the value from the user as input electricity unit charges
// and calculate total electricity bill according to the given condition . Using
// the switch statement.
// For the first 50 units Rs. 0.50/unit
// For the next 100 units Rs. 0.75/unit
// For the next 100 units Rs. 1.20/unit
// For units above 250 Rs. 1.50/unit
// An additional surcharge of 20% is added to the bill.
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int choice;
    float units, surcharge;
    printf("Select the units you've used:\n");
    printf("1. 0 - 50 units.\n");
    printf("2. 51 - 150 units.\n");
    printf("3. 151 - 250 units.\n");
    printf("4. Above 250 units.\n");
    printf("5. Exit.\n");
    printf("Enter your choice:\n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("Enter the units you've used:\n");
        scanf("%f", &units);
        units = units * 0.50;
        surcharge = units * 20 / 100;
        printf("Your electricity bill is: Rs. %f", units + surcharge);
        break;

    case 2:
        printf("Enter the units you've used:\n");
        scanf("%f", &units);
        units = units * 0.75;
        surcharge = units * 20 / 100;
        printf("Your electricity bill is: Rs. %f", units + surcharge);
        break;

    case 3:
        printf("Enter the units you've used:\n");
        scanf("%f", &units);
        units = units * 1.20;
        surcharge = units * 20 / 100;
        printf("Your electricity bill is: Rs. %f", units + surcharge);
        break;

    case 4:
        printf("Enter the units you've used:\n");
        scanf("%f", &units);
        units = units * 1.50;
        surcharge = units * 20 / 100;
        printf("Your electricity bill is: Rs. %f", units + surcharge);
        break;

    case 5:
        exit(0);
        break;

    default:
        printf("INVALID CHOICE");
        break;
    }
    return 0;
}

// 8. Program to convert a positive number into a negative number and negative
// number into a positive number using a switch statement.
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num;
    printf("Select any one of the following:\n");
    printf("1. Convert any positive number to negative number.\n");
    printf("2. Convert any negative number to positive number.\n");
    printf("3. Exit.\n");
    printf("Enter your choice:\n");
    scanf("%d", &num);
    switch (num)
    {
    case 1:
        printf("Enter a positive number:\n");
        scanf("%d", &num);
        if (num > 0)
            printf("Negative of %d is: %d", num, num * -1);
        else
            printf("%d is not a positive number", num);
        break;

    case 2:
        printf("Enter a negative number:\n");
        scanf("%d", &num);
        if (num < 0)
            printf("Positive of %d is: %d", num, num * -1);
        else
            printf("%d is not a negative number", num);
        break;

    case 3:
        exit(0);
        break;

    default:
        printf("INVALID CHOICE");
        break;
    }
    return 0;
}

// 9. Program to Convert even number into its upper nearest odd number
// Switch Statement.
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num;
    printf("Select any one of the following:\n");
    printf("1. Convert even number into its upper nearest odd number.\n");
    printf("2. Exit.\n");
    printf("Enter your choice:\n");
    scanf("%d", &num);
    switch (num)
    {
    case 1:
        printf("Enter a number:\n");
        scanf("%d", &num);
        if (num >= 0)
            printf("Upper nearest odd number of %d is %d", num, num - 1);
        else
            printf("Upper nearest odd number of %d is %d", num, num + 1);
        break;

    case 2:
        exit(0);

    default:
        printf("INVALID CHOICE");
        break;
    }
    return 0;
}

// 10. C program to find all roots of a quadratic equation using switch case
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int choice;
    double a, b, c, discriminant, root1, root2, realPart, imagPart;
    printf("Select any one of the following:\n");
    printf("1. For finding all the roots of a quadratic equation.\n");
    printf("2. Exit.\n");
    printf("Enter your choice:\n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("Enter the cofficient of a, b & c\n");
        scanf("%lf %lf %lf", &a, &b, &c);
        discriminant = b * b - 4 * a * c;
        if (discriminant > 0)
        {
            root1 = (-b + sqrt(discriminant)) / (2 * a);
            root2 = (-b - sqrt(discriminant)) / (2 * a);
            printf("root1 = %lf and root2 = %lf", root1, root2);
        }
        else if (discriminant == 0)
        {
            root1 = root2 = -b / (2 * a);
            printf("root1 = %lf and root2 = %lf", root1, root2);
        }
        else
        {
            realPart = -b / (2 * a);
            imagPart = sqrt(-discriminant) / (2 * a);
            printf("root1 = %.2lf+%.2lfi and root2 = %.2f-%.2fi", realPart, imagPart, realPart, imagPart);
        }
        break;

    case 2:
        exit(0);
        break;

    default:
        printf("INVALID CHOICE");
        break;
    }
    return 0;
}