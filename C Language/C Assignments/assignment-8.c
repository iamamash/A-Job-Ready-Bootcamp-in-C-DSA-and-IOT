// 1. WAP to draw the following pattern.
// *
// **
// ***
// ****
// *****
#include <stdio.h>
int main()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

// 2. WAP to draw the following pattern.
//     *
//    **
//   ***
//  ****
// *****
#include <stdio.h>
int main()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            if (j >= 6 - i)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}

// 3. WAP to draw the following pattern.
// *****
// ****
// ***
// **
// *
#include <stdio.h>
int main()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 6 - i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

// 4. WAP to draw the following pattern.
// *****
//  ****
//   ***
//    **
//     *
#include <stdio.h>
int main()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            if (j >= i)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}

// 5. WAP to draw the following pattern.
//     *
//    ***
//   *****
//  *******
// *********
#include <stdio.h>
int main()
{
    int i, j, space;
    for (i = 1; i <= 5; i++)
    {
        for (space = 1; space <= 5 - i; space++)
        {
            printf(" ");
        }
        for (j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

// 6. WAP to draw the following pattern.
// *********
//  *******
//   *****
//    ***
//     *
#include <stdio.h>
int main()
{
    int i, j, space;
    for (i = 5; i >= 1; i--)
    {
        for (space = 1; space <= 5 - i; space++)
        {
            printf(" ");
        }
        for (j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

// 7. WAP to draw the following pattern.
// **********
// ****  ****
// ***    ***
// **      **
// *        *
#include <stdio.h>
int main()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 10; j++)
        {
            if (j <= 6 - i || j >= 5 + i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}

// 8. WAP to draw the following pattern.
//    1
//   121
//  12321
// 1234321
#include <stdio.h>
int main()
{
    int i, j, num;
    for (i = 1; i <= 4; i++)
    {
        num = 1;
        for (j = 1; j <= 7; j++)
        {
            if (j >= 5 - i && j <= 3 + i)
            {
                printf("%d", num);
                j < 4 ? num++ : num--;
            }
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}

// 9. WAP to draw the following pattern.
// 1234321
//  12321
//   121
//    1
#include <stdio.h>
int main()
{
    int i, j, num;
    for (i = 1; i <= 4; i++)
    {
        num = 1;
        for (j = 1; j <= 7; j++)
        {
            if (j >= i && j <= 8 - i)
            {
                printf("%d", num);
                j < 4 ? num++ : num--;
            }
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}

// 10. WAP to draw the following pattern.
// 1234321
// 123 321
// 12   21
// 1     1
#include <stdio.h>
int main()
{
    int i, j, num;
    for (i = 1; i <= 5; i++)
    {
        num = 1;
        for (j = 1; j <= 7; j++)
        {
            if (j <= 5 - i || j >= 3 + i)
            {
                printf("%d", num);
                j < 4 ? num++ : num--;
            }
            else
            {
                printf(" ");
                if (j == 4)
                    num--;
            }
        }
        printf("\n");
    }
    return 0;
}

// 11. WAP to draw the following pattern.
//     A
//    ABA
//   ABCBA
//  ABCDCBA
// ABCDEDCBA
#include <stdio.h>
int main()
{
    int i, j, space, a;
    for (i = 1; i <= 5; i++)
    {
        a = 'A';
        for (j = 1; j <= 9; j++)
        {
            if (j >= 6 - i && j <= 4 + i)
            {
                printf("%c", a);
                j < 5 ? a++ : a--;
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}

// 12. WAP to draw the following pattern.
// ABCDCBA
//  ABCBA
//   ABA
//    A
#include <stdio.h>
int main()
{
    int i, j, a;
    for (i = 1; i <= 4; i++)
    {
        a = 'A';
        for (j = 1; j <= 7; j++)
        {
            if (j >= i && j <= 8 - i)
            {
                printf("%c", a);
                j < 4 ? a++ : a--;
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}

// 13. WAP to draw the following pattern.
// ABCDEFGFEDCBA
// ABCDEF FEDCBA
// ABCDE   EDCBA
// ABCD     DCBA
// ABC       CBA
// AB         BA
// A           A
#include <stdio.h>
int main()
{
    int i, j, a;
    for (i = 1; i <= 7; i++)
    {
        a = 'A';
        for (j = 1; j <= 13; j++)
        {
            if (j <= 8 - i || j >= 6 + i)
            {
                printf("%c", a);
                j < 7 ? a++ : a--;
            }
            else
            {
                printf(" ");
                if (j == 7)
                    a--;
            }
        }
        printf("\n");
    }
    return 0;
}

// 14. WAP to draw the following pattern.
// *
// **
// * *
// *  *
// *****
#include <stdio.h>
int main()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            if (j == 1 || j == i || i == 5)
            {
                printf("*");
            }
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}

// 15. WAP to draw the following pattern.
//     *
//    **
//   * *
//  *  *
// *****
#include <stdio.h>
int main()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            if (j == 5 || j == 6 - i || i == 5)
            {
                printf("*");
            }
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}

// 16. WAP to draw the following pattern.
//     *
//    * *
//   *   *
//  *     *
// *********
#include <stdio.h>
int main()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 9; j++)
        {
            if (j == 6 - i || j == 4 + i || i == 5)
            {
                printf("*");
            }
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}

// 17. WAP to draw the following pattern.
// *********
//  *     *
//   *   *
//    * *
//     *
#include <stdio.h>
int main()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 9; j++)
        {
            if (j == i || j == 10 - i || i == 1)
            {
                printf("*");
            }
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}

// 18. WAP to draw the following pattern.
//     *
//    ***
//   *****
//  *******
// *********
// *********
//  *******
//   *****
//    ***
//     *
#include <stdio.h>
int main()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 9; j++)
        {
            if (j >= 6 - i && j <= 4 + i)
            {
                printf("*");
            }
            else
                printf(" ");
        }
        printf("\n");
    }
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 9; j++)
        {
            if (j >= i && j <= 10 - i)
            {
                printf("*");
            }
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}

// 19. WAP to draw the following pattern.
//   *****     *****  
//  *******   *******
// ********* *********
// ******MYSIRG*******
//  ***************** 
//   ***************  
//    *************   
//     ***********    
//      *********
//       *******
//        *****
//         ***        
//          *
#include <stdio.h>
int main()
{
    int i, j;
    for (i = 1; i <= 3; i++)
    {
        for (j = 1; j <= 19; j++)
        {
            if ((j >= 4 - i && j <= 6 + i) || (j >= 14 - i && j <= 16 + i))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    for (i = 1; i <= 1; i++)
    {
        for (j = 1; j <= 19; j++)
        {
            if ((j >= i && j <= 5 + i) || (j >= 12 + i && j <= 18 + i))
            {
                printf("*");
            }
            else if (i == 1 && j == 7)
            {
                printf("M");
            }
            else if (i == 1 && j == 8)
            {
                printf("Y");
            }
            else if (i == 1 && j == 9)
            {
                printf("S");
            }
            else if (i == 1 && j == 10)
            {
                printf("I");
            }
            else if (i == 1 && j == 11)
            {
                printf("R");
            }
            else
                printf("G");
        }
        printf("\n");
    }
    for (i = 1; i <= 9; i++)
    {
        for (j = 1; j <= 19; j++)
        {
            if (j >= i + 1 && j <= 19 - i)
            {
                printf("*");
            }
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}