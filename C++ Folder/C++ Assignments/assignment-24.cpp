// 1. Define a function to check whether a given number is a Prime number or not.
#include <iostream>
#include <stdlib.h>
using namespace std;
void prime(int);
int main()
{
    int num;
    cout << "Enter a number:\n";
    cin >> num;
    prime(num);
    return 0;
}

void prime(int n)
{
    int i;
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            cout << n << " is not a prime number";
            exit(0);
        }
    }
    cout << n << " is a prime number";
}

// 2. Define a function to find the highest value digit in a given number.
#include <iostream>
using namespace std;
int highest(int, int);
int main()
{
    int num, count = 0, temp = 0;
    cout << "Enter a number:\n";
    cin >> num;
    temp = num;
    while (temp != 0)
    {
        ++count;
        temp = temp / 10;
    }
    // cout << count;
    highest(num, count);
    return 0;
}

int highest(int value, int size)
{
    int temp, max, i = size;
    max = value % 10;
    while (size != 0)
    {
        temp = value % 10;
        value = value / 10;
        if (max < temp)
        {
            i = size;
        }
        --size;
    }
    cout << i << " digit value is highest in the given number";
}

// 3. Define a function to calculate x raised to the power y.
#include <iostream>
using namespace std;
void pwr(int, int);
int main()
{
    int base, power;
    cout << "Enter the base value:" << endl;
    cin >> base;
    cout << "Enter the power:" << endl;
    cin >> power;
    pwr(base, power);
    return 0;
}

void pwr(int b, int p)
{
    int base = b;
    --p;
    while (p != 0)
    {
        b *= base;
        --p;
    }
    cout << "Answer is: " << b;
}

// 4. Define a function to print Pascal Triangle up to N lines.
#include <iostream>
using namespace std;
int fact(int);
int combination(int, int);
void pascal(int);
int main()
{
    int num;
    cout << "Enter the number of lines:\n";
    cin >> num;
    pascal(num);
    return 0;
}

void pascal(int value)
{
    int i, j, space;
    for (i = 0; i < value; i++)
    {
        for (space = 0; space < value - i; space++)
            cout << " ";

        for (j = 0; j <= i; j++)
        {
            cout << combination(i, j);
            cout << " ";
        }
        cout << endl;
    }
}

int combination(int n, int r)
{
    return fact(n) / (fact(r) * fact(n - r));
}

int fact(int value)
{
    int fact = 1;
    for (int i = value; i > 0; i--)
        fact *= i;
    return fact;
}

// 5. Define a function to check whether a given number is a term in a Fibonacci series or
// not.
#include <iostream>
#include <cmath>
using namespace std;
int isFibonacci(int);
int isPerfectSquare(int);
int main()
{
    int num;
    cout << "Enter a number:\n";
    cin >> num;
    isFibonacci(num) ? cout << num << " is a Fibonacci number" : cout << num << " is not a Fibonacci number";
    return 0;
}

int isFibonacci(int n)
{
    return (isPerfectSquare(5 * n * n + 4) || isPerfectSquare(5 * n * n - 4));
}

int isPerfectSquare(int value)
{
    int x = sqrt(value);
    return (x * x == value);
}

// 6. Define a function to swap data of two int variables using call by reference
#include <iostream>
using namespace std;
int swap(int &, int &);
int main()
{
    int a, b;
    cout << "Enter 2 numbers:\n";
    cin >> a >> b;
    swap(a, b);
    return 0;
}

int swap(int &num1, int &num2)
{
    int c;
    c = num1;
    num1 = num2;
    num2 = c;
    cout << "a: " << num1 << endl
         << "b: " << num2;
    return 0;
}

// 7. Write a function using the default argument that is able to add 2 or 3 numbers.
#include <iostream>
using namespace std;
int sum(int, int, int = 0);
int main()
{
    int a = 2, b = 3, c = 4;
    cout << "Sum of 2 numbers is: " << sum(a, b) << endl;
    cout << "Sum of 3 numbers is: " << sum(a, b, c);
    return 0;
}

int sum(int x, int y, int z)
{
    return x + y + z;
}

// 8. Define overloaded functions to calculate area of circle, area of rectangle and area of
// triangle.
#include <iostream>
using namespace std;
int area(int);
int area(int, int);
int area();
int main()
{
    int l = 5, b = 3, r = 4;
    cout << "Area of circle is: " << area(r) << endl;
    cout << "Area of rectangle is: " << area(l, b) << endl;
    cout << "Area of triangle is: " << area();
    return 0;
}

int area(int value)
{
    return 3.14 * (value * value);
}

int area(int value1, int value2)
{
    return value1 * value2;
}

int area()
{
    int base = 3, height = 4;
    return (base * height) / 2;
}

// 9. Write functions using function overloading to find a maximum of two numbers and
// both the numbers can be integer or real.
#include <iostream>
using namespace std;
int max(int, int);
float max(float, float);
int main()
{
    int a = 5, b = 10;
    float x = 3.05, y = 3.1;
    cout << "Greater number is: " << max(a, b) << endl;
    cout << "Greater number is: " << max(x, y);
    return 0;
}

int max(int n, int m)
{
    return n > m ? n : m;
}

float max(float n, float m)
{
    return n > m ? n : m;
}

// 10. Write functions using function overloading to add two numbers having different data
// types.
#include <iostream>
using namespace std;
int SUM(int, int);
float SUM(float, float);
int main()
{
    int a = 10, b = 20;
    float x = 9.2, y = 8.43;
    cout << "Sum of 2 numbers is: " << SUM(a, b) << endl;
    cout << "Sum of 2 numbers is: " << SUM(x, y);
    return 0;
}

int SUM(int n, int m)
{
    return n + m;
}

float SUM(float n, float m)
{
    return n + m;
}