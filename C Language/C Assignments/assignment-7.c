// 1. Write a program to find the Nth term of the Fibonnaci series.
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a = 0, b = 1, c = 0, n, count = 0;
    printf("Enter a positive number:\n");
    scanf("%d", &n);
    if (n <= 0)
    {
        printf("INVALID NUMBER");
        exit(0);
    }
    else if (n == 1)
    {
        printf("The %d term of Fibonnaci series is: %d", n, a);
        exit(0);
    }
    else if (n == 2)
    {
        printf("The %d term of Fibonnaci series is: %d", n, b);
        exit(0);
    }
    else
    {
        for (count = 2; count <= n;)
        {
            if (count != n)
            {
                c = a + b;
                count++;
            }
            else
            {
                printf("The %d term of Fibonaci series is: %d", n, b);
                break;
            }
            if (count != n)
            {
                a = b + c;
                count++;
            }
            else
            {
                printf("The %d term of Fibonaci series is: %d", n, c);
                break;
            }
            if (count != n)
            {
                b = a + c;
                count++;
            }
            else
            {
                printf("The %d term of Fibonaci series is: %d", n, a);
                break;
            }
        }
    }
    return 0;
}

// 2. Write a program to print first N terms of Fibonacci series.
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a = 0, b = 1, c = 0, n, count = 2;
    printf("Enter a positive number:\n");
    scanf("%d", &n);
    if (n <= 0)
    {
        printf("INVALID NUMBER");
        exit(0);
    }
    else if (n == 1)
    {
        printf("The very %dst term of Fibonnaci series is:\n %d", n, a);
        exit(0);
    }
    else if (n == 2)
    {
        printf("The first %d terms of Fibonnaci series are:\n%d\n", n, a);
        printf("%d\n", b);
        exit(0);
    }
    else
    {
        printf("The first %d terms of Fibonnaci series are:\n%d\n", n, a);
        printf("%d\n", b);
        while (count < n)
        {
            c = a + b;
            printf("%d\n", c);
            count++;
            a = b;
            b = c;
        }
    }
    return 0;
}

// 3. Write a program to check whether a given number is there in the Fibonacci.
// series or not.
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a = 0, b = 1, c = 0, n, count;
    printf("Enter a positive number:\n");
    scanf("%d", &n);
    if (n < 0)
    {
        printf("INVALID NUMBER");
        exit(0);
    }
    else if (n == 0 || n == 1)
    {
        printf("%d is present in Fibonacci series", n);
        exit(0);
    }
    else
    {
        while (count < n)
        {
            c = a + b;
            if (c == n)
            {
                printf("%d is present in Fibonacci series", c);
                exit(0);
            }
            else
            {
                count++;
                a = b;
                b = c;
            }
        }
    }
    printf("%d is not present in Fibonacci series", n);
    return 0;
}

// 4. Write a program to calculate HCF of two numbers.
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num1, num2, hcf = 1;
    printf("Enter two positive numbers:\n");
    scanf("%d %d", &num1, &num2);
    if (num1 <= 0 || num2 <= 0)
    {
        printf("INVALID NUMBER");
        exit(0);
    }
    for (int i = 1; i <= num1 || i <= num2; i++)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            hcf = i;
        }
    }
    printf("HCF of %d & %d is %d", num1, num2, hcf);
    return 0;
}

// 5. Write a program to check whether two given numbers are co-prime
// numbers or not.
#include <stdio.h>
int main()
{
    int num1, num2, hcf;
    printf("Enter two numbers:\n");
    scanf("%d %d", &num1, &num2);
    for (int i = 1; i <= num1 || i <= num2; i++)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            hcf = i;
        }
    }
    if (hcf ==1)
        return printf("%d & %d are co-prime numbers.", num1, num2);
    else
        return printf("%d & %d are not co-prime numbers.", num1, num2);
    return 0;
}

// 6. Write a program to print all Prime numbers under 100.
#include <stdio.h>
int main()
{
    int i, n = 1;
    while (n <= 100)
    {
        i = 2;
        while (i < n)
        {
            if (n % i == 0 && n != 100)
            {
                n++;
            }
            i++;
        }
        if (n != 1 && n != 100)
        {
            printf(" %d ", n);
        }
        n++;
    }
    return 0;
}

// 7. Write a program to print all Prime numbers between two given numbers.
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num1, num2, i;
    printf("Enter two positive numbers:\n");
    scanf("%d %d", &num1, &num2);
    if (num1 <= 1 || num2 <= 1)
    {
        printf("INVALID NUMBERS");
    }
    else
    {
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
                    continue;
                }
                else if (num1 % i == 0)
                {
                    num1++;
                    continue;
                }
                i++;
            }
            printf(" %d ", num1);
            num1++;
        }
    }
    return 0;
}

// 8. Write a program to find next Prime number of a given number.
#include <stdio.h>
int main()
{
    int num1, i, temp;
    printf("Enter a positive number:\n");
    scanf("%d", &num1);
    if (num1 <= 1)
    {
        printf("INVALID NUMBER");
    }
    else
    {
        temp = num1 + 1;
        while (temp)
        {
            i = 2;
            while (i < num1 * 2)
            {
                if (i != temp)
                {
                    if (temp % 2 == 0)
                    {
                        temp++;
                        continue;
                    }
                    i++;
                }
                else
                    break;
            }
            printf("The next prime number of %d is %d", num1, temp);
            break;
        }
    }
    return 0;
}

// 9. Write a program to check whether a given number is an Armstrong number
// or not.
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a, b, num1, num2, temp1 = 0, temp2 = 1, count = 0, temp3 = 0;
    printf("Enter a number:\n");
    scanf("%d", &num1);
    a = num1;
    num2 = num1;
    if (num1 <= 9)
    {
        printf("%d is not an armstrong number", num1);
        exit(0);
    }
    else
    {
        while (a != 0)
        {
            a = a / 10;
            count++;
        }
        b = count;
        while (num2 != 0)
        {
            count = b;
            temp1 = num2 % 10;
            num2 = num2 / 10;
            while (count != 0)
            {
                temp2 *= temp1;
                count--;
            }
            temp3 = temp2 + temp3;
            temp2 = 1;
        }
        if (temp3 == num1)
        {
            printf("%d is an armstrong number", temp3);
        }
        else
        {
            printf("%d is not an armstrong number", num1);
        }
    }
    return 0;
}

// 10. Write a program to print all Armstrong numbers under 1000.
#include <stdio.h>
int main()
{
    int a, b, i, c, temp1 = 0, temp2 = 1, temp3 = 0, count = 0;
    i = 10;
    a = i;
    c = i;
    while (c < 1000)
    {
        i = c;
        a = i;
        while (a != 0)
        {
            a = a / 10;
            count++;
        }
        b = count;
        while (i != 0)
        {
            count = b;
            temp1 = i % 10;
            i = i / 10;
            while (count != 0)
            {
                temp2 *= temp1;
                count--;
            }
            temp3 = temp2 + temp3;
            temp2 = 1;
        }
        if (temp3 == c)
        {
            printf(" %d ", temp3);
        }
        temp3 = 0;
        c++;
    }
    return 0;
}
