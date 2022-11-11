// 1. Write a function to calculate length of the string.
#include <stdio.h>
int strlength(char s[])
{
    int i;
    for (i = 0; s[i]; i++)
        ;
    return printf("%d", i - 1);
}

int main()
{
    char str[20];
    printf("Enter a string:\n");
    fgets(str, 20, stdin);
    strlength(str);
    return 0;
}

// 2. Write a function to reverse a string.
#include <stdio.h>
int strrev(char s[])
{
    int i;
    for (i = 19; i >= 0; i--)
        if (s[i])
            printf("%c", s[i]);
    return 0;
}

int main()
{
    char str[20];
    printf("Enter a string:\n");
    fgets(str, 20, stdin);
    strrev(str);
    return 0;
}

// 3. Write a function to compare two strings.
#include <stdio.h>
#include <string.h>
int strcomp(char s[], char s2[])
{
    int i = 0, count = 0;
    if (strlen(s) == strlen(s2))
    {
        while (s[i] && s2[i])
        {
            if (s[i] != s2[i])
            {
                count = 1;
                break;
            }
            ++i;
        }
        if (count > 0)
            return 0;
        else
            return 1;
    }
    else
        return 0;
}

int main()
{
    char str[20], str2[20];
    printf("Enter first string:\n");
    fgets(str, 20, stdin);
    printf("Enter second string:\n");
    fgets(str2, 20, stdin);
    int count = strcomp(str, str2);
    if (count)
        printf("Both the strings are same.");
    else
        printf("Both the strings are not same.");
    return 0;
}

// 4. Write a function to transform string into uppercase.
#include <stdio.h>
int strupr(char s[])
{
    int i;
    for (i = 0; s[i]; i++)
    {
        if (s[i] >= 97 && s[i] <= 122)
            s[i] = s[i] - 32;
    }
    return printf("%s", s);
}

int main()
{
    char str[20];
    printf("Enter a string:\n");
    fgets(str, 20, stdin);
    strupr(str);
    return 0;
}

// 5. Write a function to transform a string into lowercase.
#include <stdio.h>
int strlow(char s[])
{
    int i;
    for (i = 0; s[i]; i++)
    {
        if (s[i] >= 65 && s[i] <= 90)
            s[i] = s[i] + 32;
    }
    return printf("%s", s);
}

int main()
{
    char str[20];
    printf("Enter a string:\n");
    fgets(str, 20, stdin);
    strlow(str);
    return 0;
}

// 6. Write a function to check whether a given string is an alphanumeric string or not.
// (Alphanumeric string must contain at least one alphabet and one digit).
#include <stdio.h>
int alpha(char s[])
{
    int i, a = 0, d = 0;
    for (i = 0; s[i]; i++)
    {
        if ((s[i] >= 65 && s[i] <= 90) || (s[i] >= 97 && s[i] <= 122))
            a = 1;
        else if ((s[i] >= 48 && s[i] <= 57))
        {
            d = 1;
        }
    }
    if (a == 1 && d == 1)
        return printf("This is an alphanumeric string");
    else
        return printf("This is not an alphanumeric string");
}

int main()
{
    char str[20];
    printf("Enter a string:\n");
    fgets(str, 20, stdin);
    alpha(str);
    return 0;
}

// 7. Write a function to check whether a given string is palindrome or not.
#include <stdio.h>
#include <string.h>
int plnd(char s[])
{
    int l, i;
    l = strlen(s);
    l = l - 1;
    for (i = 0; i < l / 2; i++)
    {
        if (s[i] != s[l - i - 1])
            return printf("This is not a palindrome");
    }
    return printf("This is a palindrome");
}

int main()
{
    char str[20];
    printf("Enter a string:\n");
    fgets(str, 20, stdin);
    plnd(str);
    return 0;
}

// 8. Write a function to count words in a given string.
#include <stdio.h>
#include <string.h>
int isWord(char s[])
{
    int len, i, count = 0;
    len = strlen(s);
    for (i = 0; i < len; i++)
    {
        if (s[i] == 32)
            ++count;
    }
    if (count == 0)
        return printf("There is 1 word in the string.");
    else
        return printf("There are %d words in the string.", count + 1);
}

int main()
{
    char str[20];
    printf("Enter a string:\n");
    fgets(str, 20, stdin);
    isWord(str);
    return 0;
}

// 9. Write a function to reverse a string word wise. (For example if the given string is
// “Mysirg Education Services” then the resulting string should be “Services Education
// Mysirg” ).
#include <stdio.h>
#include <string.h>
void swap(char s[], int start, int end)
{
    int i = start, j = end, temp;
    while (i <= j)
    {
        temp = s[j];
        s[j] = s[i];
        s[i] = temp;
        --j;
        ++i;
    }
}

int main()
{
    int i = 0, flag = 0, start = 0, end = 0;
    char str[100];
    printf("Enter a string:\n");
    fgets(str, 100, stdin);
    while (str[i])
    {
        while (str[i] != 32)
        {
            if (str[i] == '\0')
            {
                flag = 1;
                break;
            }
            ++end;
            ++i;
        }
        swap(str, start, end - 1);
        if (flag == 1)
            break;
        start = ++end;
        ++i;
    }
    swap(str, 0, i - 1);
    for (i = 0; str[i]; i++)
    {
        if (str[i] != '\n')
            printf("%c", str[i]);
    }
    return 0;
}

// 10. Write a function to find the repeated character in a given string.
#include <stdio.h>
#include <string.h>
int rep(char s[])
{
    int i, j, len, r = 0, n = 0;
    len = strlen(s);
    for (i = 0; s[i]; i++)
    {
        if (s[i] != -1)
            for (j = i + 1; j < len - 1; j++)
                if (s[i] == s[j])
                {
                    s[j] = -1;
                    r = 1;
                    n = 1;
                }
        if (r == 1)
            printf("%c is a repeated character.\n", s[i]);
        r = 0;
    }
    if (i == len)
        if (n == 0)
            return printf("No repeated character found in the string");
}

int main()
{
    char str[20];
    printf("Enter a string:\n");
    fgets(str, 20, stdin);
    rep(str);
    return 0;
}