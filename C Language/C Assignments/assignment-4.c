// 1. Write a program to print MySirG 5 times on the screen.
#include <stdio.h>
int main()
{
    int i;
    for (i = 1; i <= 5; i++)
    {
        printf(" MySirG\n");
    }
    return 0;
}

// 2. Write a program to print the first 10 natural numbers.
#include <stdio.h>
int main()
{
    int n;
    for (n = 1; n <= 10; n++)
    {
        printf(" %d\n", n);
    }
    return 0;
}

// 3. Write a program to print the first 10 natural numbers in reverse order
#include <stdio.h>
int main()
{
    int n;
    for (n = 10; n >= 1; n--)
    {
        printf(" %d\n", n);
    }
    return 0;
}

// 4. Write a program to print the first 10 odd natural numbers
#include <stdio.h>
int main()
{
    int n;
    for (n = 1; n <= 20; n++)
    {
        if (n % 2 == 0)
        {
            continue;
        }
        else
            printf("%d\n", n);
    }
    return 0;
}

// 5. Write a program to print the first 10 odd natural numbers in reverse order.
#include <stdio.h>
int main()
{
    int n;
    for (n = 20; n >= 1; n--)
    {
        if (n % 2 == 0)
        {
            continue;
        }
        else
            printf("%d\n", n);
    }
    return 0;
}

// 6. Write a program to print the first 10 even natural numbers
#include <stdio.h>
int main()
{
    int n;
    for (n = 1; n <= 20; n++)
    {
        if (n % 2 == 0)
        {
            printf("%d\n", n);
        }
        else
            continue;
    }
    return 0;
}

// 7. Write a program to print the first 10 even natural numbers in reverse order
#include <stdio.h>
int main()
{
    int n;
    for (n = 20; n >= 1; n--)
    {
        if (n % 2 == 0)
        {
            printf("%d\n", n);
        }
        else
            continue;
    }
    return 0;
}

// 8. Write a program to print squares of the first 10 natural numbers
#include <stdio.h>
int main()
{
    int n;
    for (n = 1; n <= 10; n++)
    {
        printf("%d\n", n * n);
    }
    return 0;
}

// 9. Write a program to print cubes of the first 10 natural numbers
#include <stdio.h>
int main()
{
    int n;
    for (n = 1; n <= 10; n++)
    {
        printf("%d\n", n * n * n);
    }
    return 0;
}

// 10. Write a program to print a table of 5.
#include <stdio.h>
int main()
{
    int n;
    for (n = 1; n <= 10; n++)
    {
        printf("%d\n", n * 5);
    }
    return 0;
}