// 1. Write a program to calculate the length of the string. (without using built-in method)
#include <stdio.h>
int main()
{
    int i;
    char str[20];
    printf("Enter a string:\n");
    fgets(str, 20, stdin);
    for (i = 0; str[i]; i++)
        ;
    printf("%d", i - 1);
    return 0;
}

// 2. Write a program to count the occurrence of a given character in a given string.
#include <stdio.h>
int main()
{
    int i, count = 0;
    char str[20], occ[2];
    printf("Enter a string:\n");
    fgets(str, 20, stdin);
    printf("Enter the character whose occurance you want to see:\n");
    fgets(occ, 2, stdin);
    for (i = 0; str[i]; i++)
    {
        if (str[i] == occ[0])
            count++;
    }
    if (count == 0)
        printf("No such character found in the string.");
    else
        printf("The occurance of the requested character is: %d", count);
    return 0;
}

// 3. Write a program to count vowels in a given string
#include <stdio.h>
int main()
{
    int i, count = 0;
    char str[20];
    printf("Enter a string:\n");
    fgets(str, 20, stdin);
    for (i = 0; str[i]; i++)
    {
        if ((str[i] == 65) || (str[i] == 69) || (str[i] == 73) || (str[i] == 79) || (str[i] == 85) || (str[i] == 97) || (str[i] == 101) || (str[i] == 105) || (str[i] == 111) || (str[i] == 117))
            count++;
    }
    if (count == 0)
        printf("No vowels found in the string.");
    else
        printf("There are %d vowels in the string.", count);
    return 0;
}

// 4. Write a program to convert a given string into uppercase
#include <stdio.h>
int main()
{
    int i;
    char str[20];
    printf("Enter a string:\n");
    fgets(str, 20, stdin);
    for (i = 0; str[i]; i++)
    {
        if (str[i] >= 97 && str[i] <= 122)
            str[i] = str[i] - 32;
    }
    printf("%s", str);
    return 0;
}

// 5. Write a program to convert a given string into lowercase
#include <stdio.h>
int main()
{
    int i;
    char str[20], str2[20];
    printf("Enter a string:\n");
    fgets(str, 20, stdin);
    for (i = 0; str[i]; i++)
    {
        if (str[i] >= 65 && str[i] <= 90)
            str[i] = str[i] + 32;
    }
    printf("%s", str);
    return 0;
}

// 6. Write a program to reverse a string.
#include <stdio.h>
int main()
{
    int i;
    char str[20];
    printf("Enter a string:\n");
    fgets(str, 20, stdin);
    for (i = 19; i >= 0; i--)
        if (str[i])
            printf("%c", str[i]);
    return 0;
}

// 7. Write a program in C to count the total number of alphabets, digits and special
// characters in a string.
#include <stdio.h>
int main()
{
    int i, a = 0, d = 0, s = 0;
    char str[20];
    printf("Enter a string:\n");
    fgets(str, 20, stdin);
    for (i = 0; str[i]; i++)
    {
        if ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122))
            ++a;
        else if (str[i] >= 48 && str[i] <= 57)
            ++d;
        else if ((str[i] >= 32 && str[i] <= 47) || (str[i] >= 58 && str[i] <= 64) || (str[i] >= 91 && str[i] <= 96) || (str[i] >= 123 && str[i] <= 126))
            ++s;
    }
    printf("The total number of alphabets in the string are: %d\n", a);
    printf("The total number of digits in the string are: %d\n", d);
    printf("The total number of special characters in the string are: %d", s);
    return 0;
}

// 8. Write a program in C to copy one string to another string.
#include <stdio.h>
int main()
{
    int i;
    char str[20] = {"AMASH"}, str2[20] = {"ANSARI"};
    for (i = 0; str[i]; i++)
    {
        str2[i] = str[i];
        printf("%c", str2[i]);
    }
    return 0;
}

// 9. Write a C program to sort a string array in ascending order.
#include <stdio.h>
int main()
{
    int i, j, var = 0;
    char str[20];
    printf("Enter a string:\n");
    fgets(str, 20, stdin);
    for (i = 0; str[i]; i++)
    {
        if (str[i])
        {
            for (j = i + 1; str[j]; j++)
            {
                if (str[i] < str[j])
                    continue;
                else
                {
                    var = str[i];
                    str[i] = str[j];
                    str[j] = var;
                    var = 0;
                }
            }
        }
        printf("%c", str[i]);
    }
    return 0;
}

// 10. Write a program in C to Find the Frequency of Characters.
#include <stdio.h>
int main()
{
    int i, j, count = 1;
    char str[20], str2[20];
    printf("Enter a string:\n");
    fgets(str, 20, stdin);
    for (i = 0; str[i]; i++)
    {
        if (str[i] && str[i] != -1)
        {
            for (j = i + 1; str[j]; j++)
            {
                if (str[i] == str[j] && str[j] != -1 && str[j])
                {
                    ++count;
                    str[j] = -1;
                }
            }
            printf("The Frequency of '%c' character is: %d\n", str[i], count);
            count = 1;
        }
    }
    return 0;
}
