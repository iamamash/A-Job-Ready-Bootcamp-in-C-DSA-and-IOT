// 1. Write a program to calculate the sum of two matrices each of order 3x3.
#include <stdio.h>
int main()
{
    int i, j, a[3][3], b[3][3], c[3][3];
    printf("Enter values for first array:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            scanf("%d", &a[i][j]);
    }
    printf("Enter values for second array:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            scanf("%d", &b[i][j]);
    }
    printf("Sum of two matrices are:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}

// 2. Write a program to calculate the product of two matrices each of order 3x3.
#include <stdio.h>
int main()
{
    int i, j, a[3][3], b[3][3], c[3][3];
    printf("Enter values for first array:\n");
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            scanf("%d", &a[i][j]);
    printf("Enter values for second array:\n");
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            scanf("%d", &b[i][j]);
    printf("Sum of two matrices are:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            c[i][j] = a[i][j] * b[i][j];
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}

// 3. Write a program in C to find the transpose of a given matrix.
#include <stdio.h>
int main()
{
    int i, j, a[3][2], b[3][2];
    printf("Enter values for first matrix:\n");
    for (i = 0; i < 3; i++)
        for (j = 0; j < 2; j++)
            scanf("%d", &a[i][j]);
    printf("Transpose of the given matrix is:\n");
    for (j = 0; j < 2; j++)
    {
        for (i = 0; i < 3; i++)
        {
            b[j][i] = a[i][j];
            printf("%d\t", b[j][i]);
        }
        printf("\n");
    }
    return 0;
}

// 4. Write a program in C to find the sum of right diagonals of a matrix.
#include <stdio.h>
int main()
{
    int i, j, a[3][3], sum = 0;
    printf("Enter the values for matrix:\n");
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            scanf("%d", &a[i][j]);
    for (i = 0; i < 3; i++)
    {
        for (j = i; j < i + 1; j++)
        {
            sum += a[i][j];
        }
    }
    printf("Sum of right diagonals of the matrix is: %d", sum);
    return 0;
}

// 5. Write a program in C to find the sum of left diagonals of a matrix.
#include <stdio.h>
int main()
{
    int i, j, a[3][3], sum = 0;
    printf("Enter the values for matrix:\n");
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            scanf("%d", &a[i][j]);
    for (i = 0; i < 3; i++)
    {
        for (j = 2 - i; j >= 2 - i; j--)
        {
            sum += a[i][j];
        }
    }
    printf("Sum of left diagonals of the matrix is: %d", sum);
    return 0;
}

// 6. Write a program in C to find the sum of rows and columns of a Matrix.
#include <stdio.h>
int main()
{
    int i, j, a[3][3], sum = 0;
    printf("Enter values for first array:\n");
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            scanf("%d", &a[i][j]);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            sum += a[i][j];
        }
        printf("Sum of %d coloumn is: %d\n", i, sum);
        sum = 0;
    }
    printf("\n");
    for (j = 0; j < 3; j++)
    {
        for (i = 0; i < 3; i++)
        {
            sum += a[i][j];
        }
        printf("Sum of %d row is: %d\n", j, sum);
        sum = 0;
    }
    return 0;
}

// 7. Write a program in C to print or display the lower triangular of a given matrix.
#include <stdio.h>
int main()
{
    int i, j, a[3][3];
    printf("Enter the values for matrix:\n");
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            scanf("%d", &a[i][j]);
    printf("Lower triangular of a given matrix is:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}

// 8. Write a program in C to print or display an upper triangular matrix.
#include <stdio.h>
int main()
{
    int i, j, a[3][3];
    printf("Enter the values for matrix:\n");
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            scanf("%d", &a[i][j]);
    printf("Upper triangular of a given matrix is:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = i; j < 3; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}

// 9. Write a program in C to accept a matrix and determine whether it is a sparse matrix.
#include <stdio.h>
int main()
{
    int i, j, a[2][3], count = 0;
    printf("Enter the values for matrix:\n");
    for (i = 0; i < 2; i++)
        for (j = 0; j < 3; j++)
            scanf("%d", &a[i][j]);
    for (i = 0; i < 2; i++)
    {
        for (j = i; j < 3; j++)
        {
            if (a[i][j] == 0)
                ++count;
        }
    }
    if (count > (2 * 3) / 2)
        printf("The given matrix is a sparse matrix");
    else
        printf("The given matrix is not a sparse matrix");
    return 0;
}

// 10. Write a program in C to find the row with maximum number of 1s.
#include <stdio.h>
int main()
{
    int i, j, a[3][3], count = 0, var1 = 0, var2 = 0, var3 = 0;
    printf("Enter the values for matrix:\n");
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            scanf("%d", &a[i][j]);
    for (j = 0; j < 3; j++)
    {
        for (i = 0; i < 3; i++)
        {
            if (a[j][i] == 1)
                ++count;
        }
        if (j == 0)
            var1 = count;
        else if (j == 1)
            var2 = count;
        else
            var3 = count;
        count = 0;
    }
    if (var1 > var2 && var1 > var3)
        printf("First row is having the maximum number of 1");
    else if (var2 > var1 && var2 > var3)
        printf("Second row is having the maximum number of 1");
    else
        printf("Third row is having the maximum number of 1");
    return 0;
}