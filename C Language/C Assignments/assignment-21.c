// 1. Define a structure Employee with member variables id, name, salary
#include <stdio.h>
struct Employee
{
    int id;
    char name[20];
    float salary;
};

// 2. Write a function to take input employee data from the user. [ Refer structure from
// question 1 ]int
#include <stdio.h>
#include <string.h>
struct Employee
{
    int id;
    char name[20];
    float salary;
};

struct Employee input()
{
    struct Employee e;
    printf("Enter employee id, name & salary:\n");
    scanf("%d", &e.id);
    fflush(stdin);
    fgets(e.name, 20, stdin);
    e.name[strlen(e.name) - 1] = '\0';
    scanf("%f", &e.salary);
    return e;
}

// void display(struct Employee);
int main()
{
    struct Employee e2;
    // e2 = input();
    // display(e2);
    return 0;
}

// 3. Write a function to display employee data. [ Refer structure from question 1 ]
void display(struct Employee e)
{
    printf("%d %s %f", e.id, e.name, e.salary);
}

// 4. Write a function to find the highest salary employee from a given array of 10
// employees. [ Refer structure from question 1]
#include <stdio.h>
struct Employee
{
    int id;
    char name[20];
    float salary;
};

void maxSalary(struct Employee e[])
{
    int i;
    struct Employee max;
    max = e[0];
    for (i = 0; i < 10; i++)
        if (e[i].salary > max.salary)
            max = e[i];
    printf("Employee with highest salary is: %f", max.salary);
}

int main()
{
    int i;
    struct Employee e[10];
    printf("Enter Employee's Salary:\n");
    for (i = 0; i < 10; i++)
        scanf("%f", &e[i].salary);
    maxSalary(e);
    return 0;
}

// 5. Write a function to sort employees according to their salaries [ refer structure from
// question 1]
#include <stdio.h>
struct Employee
{
    int id;
    char name[20];
    float salary;
};

void sortBySalary(struct Employee E[], int size)
{
    int i, j;
    struct Employee e1;
    for (i = 0; i < size; i++)
    {
        for (j = i + 1; j <= size - 1; j++)
        {
            if (E[i].salary > E[j].salary)
            {
                e1 = E[i];
                E[i] = E[j];
                E[j] = e1;
            }
        }
        printf("%f ", E[i].salary);
    }
}

int main()
{
    int i;
    struct Employee e[5];
    printf("Enter Employee's Salary:\n");
    for (i = 0; i < 5; i++)
        scanf("%f", &e[i].salary);
    sortBySalary(e, 5);
    return 0;
}

// 6. Write a function to sort employees according to their names [refer structure from
// question 1]
#include <stdio.h>
#include <string.h>
struct Employee
{
    int id;
    char name[20];
    float salary;
};

int M = 5, N = 20;
void sortByName(struct Employee e[M][N])
{
    int i, j, result;
    struct Employee e1;
    for (i = 0; i < 5; i++)
    {
        for (j = i + 1; j <= 4; j++)
        {
            result = strcmp(e[i], e[j]);
            if (result > 0)
            {
                strcpy(e1.name, e[i]);
                strcpy(e[i], e[j]);
                strcpy(e[j], e1.name);
            }
        }
        printf("%s", e[i]);
    }
}

int main()
{
    int i;
    struct Employee e[5][20];
    printf("Enter Employee names:\n");
    for (i = 0; i < 5; i++)
        fgets(e[i], 20, stdin);
    printf("\n");
    sortByName(e);
    return 0;
}

// 7. Write a program to calculate the difference between two time periods.
#include <stdio.h>
struct Time
{
    int sec;
    int min;
    int hrs;
};

void diff(struct Time startTime, struct Time stopTime, struct Time *ptr)
{
    while (stopTime.sec > startTime.sec)
    {
        --startTime.min;
        startTime.sec += 60;
    }
    ptr->sec = startTime.sec - stopTime.sec;

    while (stopTime.min > startTime.min)
    {
        --startTime.hrs;
        startTime.min += 60;
    }
    ptr->min = startTime.min - stopTime.min;
    ptr->hrs = startTime.hrs - stopTime.hrs;
}

int main()
{
    struct Time t1, t2, difference;
    printf("Enter start  hours, minutes, seconds:\n");
    scanf("%d %d %d", &t1.hrs, &t1.min, &t1.sec);
    printf("\n");
    printf("Enter stop hours, minutes, seconds:\n");
    scanf("%d %d %d", &t2.hrs, &t2.min, &t2.sec);
    printf("\n");
    printf("Time difference is: %d:%d:%d -", t1.hrs, t1.min, t1.sec);
    printf(" %d:%d:%d", t2.hrs, t2.min, t2.sec);
    diff(t1, t2, &difference);
    printf(" = %d:%d:%d", difference.hrs, difference.min, difference.sec);
    return 0;
}

// 8. Write a program to store information of 10 students and display them using structure.
#include <stdio.h>
#include <string.h>
struct Students
{
    int rollno;
    char name[20];
    int age;
};

void DISPLAY(struct Students s[])
{
    for (int i = 0; i < 10; i++)
    {
        printf("Student %d details:\n", i + 1);
        printf("Rollno: %d\n", s[i].rollno);
        printf("Name: %s\n", s[i].name);
        printf("Age: %d\n", s[i].age);
        printf("\n");
    }
}

int main()
{
    int i;
    struct Students stud[10];
    printf("Enter students details:\n");
    printf("Enter 10 students rollno:\n");
    for (i = 0; i < 10; i++)
        scanf("%d", &stud[i].rollno);
    fflush(stdin);
    printf("Enter 10 students name:\n");
    for (i = 0; i < 10; i++)
    {
        fgets(stud[i].name, 20, stdin);
        stud[i].name[strlen(stud[i].name) - 1] = '\0';
    }
    printf("Enter 10 students age:\n");
    for (i = 0; i < 10; i++)
        scanf("%d", &stud[i].age);
    printf("\n");
    DISPLAY(stud);
    return 0;
}

// 9. Write a program to store information of n students and display them using structure.
#include <stdio.h>
#include <string.h>
struct Students
{
    int rollno;
    char name[20];
    int age;
};

void Display(struct Students s[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("Student %d details:\n", i + 1);
        printf("Rollno: %d\n", s[i].rollno);
        printf("Name: %s\n", s[i].name);
        printf("Age: %d\n", s[i].age);
        printf("\n");
    }
}

int main()
{
    int i, num;
    struct Students stud[100];
    printf("Enter the no of students, of which you want to store the details:\n");
    scanf("%d", &num);
    printf("Enter %d students rollno:\n", num);
    for (i = 0; i < num; i++)
        scanf("%d", &stud[i].rollno);
    fflush(stdin);
    printf("Enter %d students name:\n", num);
    for (i = 0; i < num; i++)
    {
        fgets(stud[i].name, 20, stdin);
        stud[i].name[strlen(stud[i].name) - 1] = '\0';
    }
    printf("Enter %d students age:\n", num);
    for (i = 0; i < num; i++)
        scanf("%d", &stud[i].age);
    printf("\n");
    Display(stud, num);
    return 0;
}

// 10. Write a program to enter the marks of 5 students in Chemistry, Mathematics and
// Physics (each out of 100) using a structure named Marks having elements roll no.,
// name, chem_marks, maths_marks and phy_marks and then display the percentage
// of each student.
#include <stdio.h>
#include <string.h>
struct Marks
{
    int rollno;
    char name[20];
    int chemistryMarks;
    int mathematicsMarks;
    int physicsMarks;
};

void displayPercentage(struct Marks s[])
{
    int percentage;
    for (int i = 0; i < 5; i++)
    {
        char a[2] = {'%'};
        percentage = ((s[i].chemistryMarks + s[i].mathematicsMarks + s[i].physicsMarks) * 100) / 300;
        printf("Student %d got: %d%s\n", i + 1, percentage, a);
    }
}

int main()
{
    int i;
    struct Marks stud[5];
    printf("Enter 5 students details:\n");
    printf("Enter 5 students rollno:\n");
    for (i = 0; i < 5; i++)
        scanf("%d", &stud[i].rollno);
    printf("\n");
    fflush(stdin);
    printf("Enter 5 students name:\n");
    for (i = 0; i < 5; i++)
    {
        fgets(stud[i].name, 20, stdin);
        stud[i].name[strlen(stud[i].name) - 1] = '\0';
    }
    printf("\n");
    printf("Enter 5 students marks of Chemistry, Mathematics & Physics:\n");
    for (i = 0; i < 5; i++)
    {
        printf("Enter Student %d marks:\n", i + 1);
        scanf("%d %d %d", &stud[i].chemistryMarks, &stud[i].mathematicsMarks, &stud[i].physicsMarks);
    }
    printf("\n");
    displayPercentage(stud);
    return 0;
}
