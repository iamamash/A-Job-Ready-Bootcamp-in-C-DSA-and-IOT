// 1. Write a program to find the number of vowels in each of the 5 strings stored in two
// dimensional arrays, taken from the user.
#include <stdio.h>
int main()
{
    int i, count = 0;
    char str[5][20];
    printf("Enter 5 string:\n");
    for (i = 0; i < 5; i++)
        fgets(str[i], 20, stdin);
    for (i = 0; i < 5; i++)
    {
        for (int j = 0; str[i][j]; j++)
            if ((str[i][j] == 65) || (str[i][j] == 69) || (str[i][j] == 73) || (str[i][j] == 79) || (str[i][j] == 85) || (str[i][j] == 97) || (str[i][j] == 101) || (str[i][j] == 105) || (str[i][j] == 111) || (str[i][j] == 117))
                count++;
    }
    if (count == 0)
        printf("No vowels found in the string.");
    else
        printf("There are %d vowels in the string.", count);
    return 0;
}

// 2. Write a program to sort 10 city names stored in two dimensional arrays, taken from
// the user.
#include <stdio.h>
#include <string.h>
int main()
{
    int i, rounds, result;
    char str[10][20], temp[20];
    printf("Enter 10 city names:\n");
    for (i = 0; i < 10; i++)
        fgets(str[i], 20, stdin);
    for (rounds = 1; rounds < 10; rounds++)
        for (i = 0; i < 10 - rounds; i++)
        {
            result = strcmp(str[i], str[i + 1]);
            if (result > 0)
            {
                strcpy(temp, str[i]);
                strcpy(str[i], str[i + 1]);
                strcpy(str[i + 1], temp);
            }
        }
    for (i = 0; i < 10; i++)
        printf("%s", str[i]);
    return 0;
}

// 3. Write a program to read and display a 2D array of strings in C language.
#include <stdio.h>
int main()
{
    int i, count = 0;
    char str[5][20];
    printf("Enter 5 string:\n");
    for (i = 0; i < 5; i++)
        fgets(str[i], 20, stdin);
    printf("\n");
    for (i = 0; i < 5; i++)
        puts(str[i]);
    return 0;
}

// 4. Write a program to search a string in the list of strings.
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, j, count;
    char str[5][20], str1[20];
    printf("Enter 5 string:\n");
    for (i = 0; i < 5; i++)
        fgets(str[i], 20, stdin);
    printf("\n");
    printf("Enter the string you want to search for:\n");
    fgets(str1, 20, stdin);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; str[i][j]; j++)
            if (str[i][j] == str1[j])
            {
                count = 1;
                continue;
            }
            else
            {
                count = 0;
                break;
            }
        if (count == 1)
        {
            printf("Match found: %s", str[i]);
            exit(0);
        }
    }
    printf("No match found!!\n");
    return 0;
}

// 5. Suppose we have a list of email addresses, check whether all email addresses have
// ‘@’ in it. Print the odd email out.
#include <stdio.h>
int main()
{
    int i, j, count = 0;
    char str[5][25];
    printf("Enter the email:\n");
    for (i = 0; i < 5; i++)
        fgets(str[i], 25, stdin);
    printf("Emails without '@' are:\n");
    for (i = 0; i < 5; i++)
    {
        count = 0;
        for (j = 0; str[i][j]; j++)
        {
            if (str[i][j] == 64)
            {
                count = 1;
                break;
            }
            else
                continue;
        }
        if (count == 0)
            printf("%s", str[i]);
    }
    return 0;
}

// 6. Write a program to print the strings which are palindrome in the list of strings.
#include <stdio.h>
#include <string.h>
int main()
{
    int i, j, len, flag = 0, r;
    char str[5][20];
    printf("Enter the string:\n");
    for (i = 0; i < 5; i++)
        fgets(str[i], 20, stdin);
    printf("\n");
    for (i = 0; i < 5; i++)
    {
        len = strlen(str[i]);
        len = len - 1;
        for (j = 0; j < len; j++)
        {
            if (str[i][j] != str[i][len - j - 1])
            {
                flag = 0;
                break;
            }
            else
            {
                flag = 1;
                continue;
            }
        }
        if (flag == 1)
        {
            printf("%s", str[i]);
            flag = 0;
            r = 1;
        }
        len = 0;
    }
    if (flag == 0 && r != 1)
        printf("No palindrome found in the list of the strings.");
    return 0;
}

// 7. From the list of IP addresses, check whether all ip addresses are valid.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int i = 0, j = 0, x;
    char ip[20] = "1.2.0.555", *a;
    printf("Invalid IP Addresses are:\n");
    a = strtok(ip, ".");
    while (a != NULL)
    {
        x = atoi(a);
        if ((x < 0) || (x > 255))
            printf("%d", x);
        a = strtok(NULL, ".");
    }
    return 0;
}

// 8. Given a list of words followed by two words, the task is to find the minimum distance
// between the given two words in the list of words.
// (Example : s = {“the”,”quick”,”brown”,”fox”,”quick”}
// word1 = “the”, word2 = “fox”, OUTPUT : 1 )
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int i, num1 = -1, num2 = -1, temp, min = 100;
    char s[5][20] = {{"the"}, {"quick"}, {"brown"}, {"fox"}, {"quick"}};
    char word1[20] = "brown", word2[20] = "quick";
    printf("Shortest path between the desired words is:\n");
    for (i = 0; i < 5; i++)
    {
        if (strcmp(s[i], word1) == 0)
            num1 = i;
        if (strcmp(s[i], word2) == 0)
            num2 = i;
        if (num1 != -1 && num2 != -1)
        {
            temp = abs(num2 - num1);
            if (temp < min)
                min = temp;
        }
    }
    printf("%d", min);
    return 0;
}

// 9. Write a program that asks the user to enter a username. If the username entered is
// one of the names in the list then the user is allowed to calculate the factorial of a
// number. Otherwise, an error message is displayed.
#include <stdio.h>
#include <stdlib.h>
int fact()
{
    int num, var = 1;
    printf("\nEnter a number\n");
    scanf("%d", &num);
    for (int i = num; i > 0; i--)
    {
        var *= i;
    }
    return printf("Factorial of %d is: %d\n", num, var);
}

int main()
{
    int i, j, count = 0, k = 0;
    char name[20], arr[5][20] = {{"Amash"}, {"Pankaj"}, {"Diggi"}, {"Rohan"}, {"Shubhnesh"}};
    printf("Enter the username:\n");
    fgets(name, 20, stdin);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; arr[i][j]; j++)
        {
            if (arr[i][j] == name[j])
            {
                count = 1;
                continue;
            }
            else
            {
                count = 0;
                break;
            }
        }
        if (count == 1)
        {
            fact();
            exit(0);
        }
    }
    if (i == 5)
    {
        printf("Please try to login with correct credentials!!\n");
        exit(0);
    }
    return 0;
}

// 10. Create an authentication system. It should be menu driven.
#include <stdio.h>
#include <stdlib.h>
int M = 3, N = 20;
int checkEmail(char Email[M][N])
{

    int i, j, count = 0;
    char email[20];
    printf("Enter your email:\n");
    fgets(email, 20, stdin);
    printf("\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; Email[i][j]; j++)
            if (Email[i][j] == email[j])
            {
                count = 1;
                continue;
                ;
            }
            else
            {
                count = 0;
                break;
            }
        if (count == 1)
            return 1;
    }
    return 0;
}

int checkPassword(char Password[M][N])
{
    int i, j, count = 0;
    char password[20];
    printf("Enter your password:\n");
    fgets(password, 20, stdin);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; Password[i][j]; j++)
            if (Password[i][j] == password[j])
            {
                count = 1;
                continue;
            }
            else
            {
                count = 0;
                break;
            }
        if (count == 1)
            return 1;
    }
    return 0;
}

int FACT()
{
    int num, var = 1;
    printf("\nEnter a number\n");
    scanf("%d", &num);
    for (int i = num; i > 0; i--)
    {
        var *= i;
    }
    return printf("Factorial of %d is: %d\n", num, var);
}

int LCM()
{
    int max, n, m;
    printf("Enter two positive numbers:\n");
    scanf("%d %d", &n, &m);
    max = (n > m) ? n : m;
    while (1)
    {
        if (max % n == 0 && max % m == 0)
        {
            return printf("The LCM of %d & %d is: %d", n, m, max);
        }
        ++max;
    }
}

int features()
{
    int choice;
    printf("Select one of the following:\n");
    printf("1. Calculate Factorial\n");
    printf("2. Calculate LCM\n");
    printf("3. Exit\n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        FACT();
        break;

    case 2:
        LCM();
        break;

    case 3:
        exit(0);

    default:
        printf("INVALID CHOICE!!\n");
        break;
    }
    return 0;
}

int main()
{
    int i;
    char password[20], e[3][20] = {{"abc@gmail.com"}, {"xyz@gmail.com"}, {"123@gmail.com"}}, p[3][20] = {{"maihudon"}, {"bhootaaya"}, {"saasbhikabhibahuthi"}};
    if (checkEmail(e) && checkPassword(p))
    {
        features();
        exit(0);
    }
    else
    {
        printf("Please try to login with correct credentials");
        exit(0);
    }
    return 0;
}