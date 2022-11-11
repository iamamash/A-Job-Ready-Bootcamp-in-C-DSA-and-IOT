// 1. Define a class Complex to represent a complex number. Declare instance member.
// variables to store real and imaginary part of a complex number, also define instance
// member functions to set values of complex number and print values of complex
// number
#include <iostream>
using namespace std;
class Complex
{
private:
    int real, img;

public:
    void setValue(int x, int y)
    {
        real = x;
        img = y;
    }

    void getValue()
    {
        cout << real << " + " << img << "i" << endl;
    }
};

int main()
{
    Complex c1, c2;
    c1.setValue(3, 5);
    c2.setValue(10, 2);
    c1.getValue();
    c2.getValue();
    return 0;
}

// 2. Define a class Time to represent Time (like 3 hr 45 min 20 sec). Declare appropriate
// number of instance member variables and also define instance member functions to
// set values for time and display values of time.
#include <iostream>
using namespace std;
class Time
{
private:
    int hrs, min, sec;

public:
    void setTime(int h, int m, int s)
    {
        hrs = h;
        min = m;
        sec = s;
    }

    void getTime()
    {
        cout << hrs << "hrs " << min << "min " << sec << "sec." << endl;
    }
};

int main()
{
    Time t1, t2;
    t1.setTime(3, 45, 20);
    t2.setTime(4, 42, 120);
    t1.getTime();
    t2.getTime();
    return 0;
}

// 3. Define a class Factorial and define an instance member function to find the Factorial
// of a number using class.
#include <iostream>
using namespace std;
class Factorial
{
private:
    int fact = 1;

public:
    void factorial(int f);
};

void Factorial::factorial(int f)
{
    for (int i = f; i > 0; i--)
        fact *= i;
    cout << "Factorial of " << f << " is " << fact;
}

int main()
{
    Factorial f;
    int fact;
    cout << "Enter a number:\n";
    cin >> fact;
    f.factorial(fact);
    return 0;
}

// 4. Define a class LargestNumber and define an instance member function to find the
// Largest of three Numbers using the class.
#include <iostream>
using namespace std;
class LargestNumber
{
public:
    void lgnum(int x, int y, int z)
    {
        if (x > y && x > z)
            cout << "Largest number is: " << x;
        else if (y > x && y > z)
            cout << "Largest number is: " << y;
        else
            cout << "Largest number is: " << z;
    }
};

int main()
{
    LargestNumber l1;
    int num1, num2, num3;
    cout << "Enter 3 numbers:\n";
    cin >> num1 >> num2 >> num3;
    l1.lgnum(num1, num2, num3);
    return 0;
}

// 5. Define a class ReverseNumber and define an instance member function to find
// Reverse of a Number using class.
#include <iostream>
using namespace std;
class ReverseNumber
{
public:
    void reverse(int n);
};

void ReverseNumber::reverse(int n)
{
    int temp;
    while (n != 0)
    {
        temp = n % 10;
        n = n / 10;
        cout << temp;
    }
}

int main()
{

    int num;
    ReverseNumber r;
    cout << "Enter a number:\n";
    cin >> num;
    r.reverse(num);
    return 0;
}

// 6. Define a class Square to find the square of a number and write a C++ program to
// Count number of times a function is called.
#include <iostream>
using namespace std;
class Square
{
    static int count;

public:
    void sqr(int r)
    {
        r = r * r;
        cout << "Square of the number is: " << r << endl;
        cout << "Function is called " << ++count << " times.\n";
    }
};
int Square::count;
int main()
{
    int num;
    Square s;
    cout << "Enter a number:\n";
    cin >> num;
    s.sqr(num);
    return 0;
}

// 7. Define a class Greatest and define instance member function to find Largest among
// 3 numbers using classes.
#include <iostream>
using namespace std;
class Greatest
{
public:
    void getNUm(int x, int y, int z)
    {
        if (x > y && x > z)
            cout << "Largest number is: " << x;
        else if (y > x && y > z)
            cout << "Largest number is: " << y;
        else
            cout << "Largest number is: " << z;
    }
};

int main()
{
    Greatest l1;
    int num1, num2, num3;
    cout << "Enter 3 numbers:\n";
    cin >> num1 >> num2 >> num3;
    l1.getNUm(num1, num2, num3);
    return 0;
}

// 8. Define a class Rectangle and define an instance member function to find the area of
// the rectangle.
#include <iostream>
using namespace std;
class Rectangle
{
public:
    void rec(int l, int b)
    {
        cout << "Area of rectangle is: " << l * b;
    }
};

int main()
{
    Rectangle r;
    int len, br;
    cout << "Enter the length of rectangle:\n";
    cin >> len;
    cout << "Enter the width of rectangle:\n";
    cin >> br;
    r.rec(len, br);
    return 0;
}

// 9. Define a class Circle and define an instance member function to find the area of the
// circle.
#include <iostream>
using namespace std;
class Circle
{
public:
    void circle(int r)
    {
        cout << "Area of cicle is: " << 3.14 * (r * r);
    }
};

int main()
{
    Circle c;
    int radius;
    cout << "Enter the radius of cicle:\n";
    cin >> radius;
    c.circle(radius);
    return 0;
}

// 10. Define a class Area and define instance member functions to find the area of the
// different shapes like square, rectangle , circle etc.
#include <iostream>
using namespace std;
class Area
{
public:
    void area();
};

void Area::area()
{
    int num;
    cout << "Select any one of the following:\n";
    cout << "1. Area of square.\n";
    cout << "2. Area of rectangle.\n";
    cout << "3. Area of circle.\n";
    cout << "4. Exit.\n";
    cin >> num;
    switch (num)
    {
    case 1:
        cout << "Enter the value:\n";
        cin >> num;
        cout << "Area of square is: " << num * num;
        break;

    case 2:
        cout << "Enter the length:\n";
        cin >> num;
        int num1;
        cout << "Enter the breadth:\n";
        cin >> num1;
        cout << "Area of rectangle is: " << num * num1;
        break;

    case 3:
        cout << "Enter the radius:\n";
        cin >> num;
        cout << "Area of circle is: " << 3.14 * (num * num);
        break;

    case 4:
        break;

    default:
        break;
    }
}

int main()
{
    Area a;
    a.area();
    return 0;
}