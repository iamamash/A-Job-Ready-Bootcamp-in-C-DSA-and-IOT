// 1. Define a function to input variable length string and store it in an array without
// memory wastage.
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i = 0, j = 1;
    char c, *q, *ptr = (char *)malloc(sizeof(char));
    if (ptr == NULL)
    {
        printf("Memory Allocation Failed:\n");
        return 0;
    }
    printf("Enter a string:\n");
    while (c != '\n')
    {
        c = getc(stdin);
        ++j;
        ptr = (char *)realloc(ptr, j * sizeof(char));
        *(ptr + i) = c;
        ++i;
    }
    *(ptr + i) = '\0';
    for (i = 0; *(ptr + i); i++)
        printf("%c", *(ptr + i));
    free(ptr);
    return 0;
}

// 2. Write a program to ask the user to input a number of data values he would like to
// enter then create an array dynamically to accommodate the data values. Now take
// the input from the user and display the average of data values.
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num, i, avg = 0;
    printf("Enter a number of data values:\n");
    scanf("%d", &num);
    int *ptr = (int *)calloc(num, sizeof(int));
    if (ptr == NULL)
    {
        printf("Memory Allocation Failed:\n");
        return 0;
    }
    printf("Enter the %d data values:\n", num);
    for (i = 0; i < num; i++)
    {
        scanf("%d", ptr + i);
        avg += *(ptr + i);
    }
    avg = avg / num;
    printf("The average of data values is: %d", avg);
    free(ptr);
    return 0;
}

// 3. Write a program to calculate the sum of n numbers entered by the user using malloc
// and free.
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, num, sum = 0;
    printf("Enter the number of values:\n");
    scanf("%d", &num);
    int *ptr = (int *)calloc(num, sizeof(int));
    if (ptr == NULL)
    {
        printf("Memory Allocation Failed:\n");
        return 0;
    }
    printf("Enter the %d values to calculate the sum:\n", num);
    for (i = 0; i < num; i++)
    {
        scanf("%d", (ptr + i));
        sum += *(ptr + i);
    }
    printf("The sum of %d numbers is: %d\n", num, sum);
    free(ptr);
    return 0;
}

// 4. Write a program to input and print text using dynamic memory allocation.
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i = 0, j = 1;
    char txt, *ptr = (char *)malloc(sizeof(char));
    if (ptr == NULL)
    {
        printf("Memory Allocation Failed:\n");
        return 0;
    }
    printf("Enter the text:\n");
    while (txt != '\n')
    {
        txt = getc(stdin);
        ++j;
        ptr = (char *)realloc(ptr, j * sizeof(char));
        *(ptr + i) = txt;
        ++i;
    }
    *(ptr + i) = '\0';
    for (i = 0; *(ptr + i); i++)
        printf("%c", *(ptr + i));
    free(ptr);
    return 0;
}

// 5. Write a program to read a one dimensional array, print sum of all elements along with
// inputted array elements using dynamic memory allocation.
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i = 0, num, sum = 0;
    printf("Enter the size of array:\n");
    scanf("%d", &num);
    int *ptr = (int *)calloc(num, sizeof(int));
    if (ptr == NULL)
    {
        printf("Memory Allocation Failed:\n");
        return 0;
    }
    printf("Enter the values:\n");
    while (i != num)
    {
        scanf("%d", ptr + i);
        sum += *(ptr + i);
        ++i;
    }
    *(ptr + i) = '\0';
    printf("Sum is: %d", sum);
    free(ptr);
    return 0;
}

// 6. Write a program in C to find the largest element using Dynamic Memory Allocation.
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, max;
    printf("Enter the 5 values:\n");
    int *ptr = (int *)malloc(sizeof(int));
    if (ptr == NULL)
    {
        printf("Memory Allocation Failed:\n");
        return 0;
    }
    for (i = 0; i < 5; i++)
        scanf("%d", ptr + i);
    max = *(ptr + 0);
    for (i = 0; i < 5; i++)
    {
        if (*(ptr + i) > max)
            max = *(ptr + i);
    }
    printf("Largest element is: %d", max);
    free(ptr);
    return 0;
}

// 7. Write a program to demonstrate memory leak in C.
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr = (int *)malloc(sizeof(int));
    ptr = NULL;
    return 0;
}

// 8. Write a program to demonstrate dangling pointers in C.
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i = 5;
    int *ptr = (int *)malloc(sizeof(int));
    *ptr = i;
    printf("BEFORE FREE: %d\n", *ptr);
    free(ptr);
    printf("AFTER FREE : %d", *ptr);
    return 0;
}

// 9. Write a program to allocate memory dynamically of the size in bytes entered by the
// user. Also handle the case when memory allocation is failed.
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int bytes;
    printf("Enter the size in bytes:\n");
    scanf("%d", &bytes);
    int *ptr = (int *)calloc(bytes, sizeof(int));
    if (ptr == NULL)
    {
        printf("Memory Allocation Failed:\n");
        return 0;
    }
    else
        printf("Memory Allocation Success:\n");
    return 0;
}

// 10. Find out the maximum and minimum from an array using dynamic memory allocation
// in C.
#include <stdio.h>
#include <stdlib.h>
int maxMin()
{
    int i, max, min;
    printf("Enter the 5 values:\n");
    int *ptr = (int *)malloc(sizeof(int));
    if (ptr == NULL)
    {
        printf("Memory Allocation Failed:\n");
        return 0;
    }
    for (i = 0; i < 5; i++)
        scanf("%d", ptr + i);
    min = *(ptr + 0);
    max = *(ptr + 0);
    for (i = 0; i < 5; i++)
    {
        if (*(ptr + i) > max)
            max = *(ptr + i);
        else if (*(ptr + i) < min)
            min = *(ptr + i);
    }
    printf("Maximum element is: %d\n", max);
    printf("Minimum element is: %d", min);
    free(ptr);
    return 0;
}

int main()
{
    maxMin();
    return 0;
}
