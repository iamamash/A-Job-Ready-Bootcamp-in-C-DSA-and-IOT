// 1. Write a program to print Hello Students on the screen.
#include <stdio.h>
int main()
{
    printf("Hello Students");
    return 0;
}

// 2. Write a program to print Hello in the first line and Students in the second line.
#include <stdio.h>
int main()
{
    printf("Hello\nStudents");
    return 0;
}

// 3. Write a program to print “MySirG” on the screen. (Remember to print in double quotes)
#include <stdio.h>
int main()
{
    printf("\"MySirG\"");
    return 0;
}

// 4. WAP to find the area of the circle. Take radius of circle from user as input and print the
// result in below given format.
#include <stdio.h>
#include <conio.h>
int main()
{
    int a, r;
    float p = 3.14;
    printf("Enter the radius value:");
    scanf("%d", &r);
    a = p * (r * r);
    printf("Area of circle is %d having the radius %d", a, r);
    return 0;
}

// 5. WAP to calculate the length of String using printf function.
#include <stdio.h>
#include <conio.h>
int main()
{
    char a[100];
    int length;
    printf("Enter a string to calculate its length\n");
    gets(a);
    length = strlen(a);
    printf("Length of the string = %d\n", length);
    return 0;
}

// 6. WAP to print the name of the user in double quotes.
#include <stdio.h>
int main()
{
    printf("\"Hello , Amit Kumar\"");
    return 0;
}

// 7. WAP to print “%d” on the screen.
#include <stdio.h>
int main()
{
    printf("%%d");
    return 0;
}

// 8. WAP to print “\n” on the screen.
#include <stdio.h>
int main()
{
    printf("/n");
    return 0;
}

// 9. WAP to print “\\” on the screen.
#include <stdio.h>
int main()
{
    printf("");
    return 0;
}

// 10. WAP to take date as an input in below given format and convert the date format and
// display the result as given below.
#include <stdio.h>
int main()
{
    int d, m, y;
    printf("Enter the Date:\n");
    scanf("%d / %d / %d", &d, &m, &y);
    printf("Day - %d ,Month - %d ,Year - %d", d, m, y);
    return 0;
}

// 11. WAP to take time as an input in below given format and convert the time format and
// display the result as given below.
#include <stdio.h>
int main()
{
    int h, m;
    printf("Enter the Time:");
    scanf("%d:%d", &h, &m);
    printf("%d Hour and %d Minute", h, m);
    return 0;
}

// 12. Find output of below code:
// int main()
// {
//     int x = printf(“ineuron”);
//     printf(“% d”, x);
//     return 0;
// }
// ERROR COMES AS OUTPUT.