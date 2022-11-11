// 1. Create a class FLOAT that contains one float data member. Overload all the four
// arithmetic operators so that they can operate on the objects of FLOAT.
#include <iostream>
using namespace std;
class Float
{
private:
    float x;

public:
    Float(int a)
    {
        x = a;
    }
    void operator+(Float f)
    {
        cout << "Operator+ Called : " << x + f.x << endl;
    }
    void operator-(Float f)
    {
        cout << "Operator- Called : " << x - f.x << endl;
    }
    void operator/(Float f)
    {
        cout << "Operator/ Called : " << x / f.x << endl;
    }
    void operator*(Float f)
    {
        cout << "Operator* Called : " << x * f.x << endl;
    }
};

int main()
{
    Float f1(10), f2(5);
    f1 + f2;
    f1 - f2;
    f1 / f2;
    f1 *f2;
    return 0;
}

// 2. Define a class Rectangle and overload area function for different types of data type.
#include <iostream>
using namespace std;
class Rectangle
{
private:
    int l, b;

public:
    void area(int x, int y)
    {
        cout << "Area of Int is : " << x * y << endl;
    }
    void area(double x, double y)
    {
        cout << "Area of Double is : " << x * y << endl;
    }
    void area(float x, float y)
    {
        cout << "Area of Float is : " << x * y << endl;
    }
};

int main()
{
    Rectangle r;
    r.area(2, 3);
    r.area(2.1, 3.3);
    return 0;
}

// 3. Define a base class Animals having member function sound() . Define another
// derived class from Animals class named Dogs. You need to override the sound
// function of the base class in the derived class.
#include <iostream>
using namespace std;
class Animals
{
public:
    virtual void sound()
    {
        cout << "Sound of Animals is Called" << endl;
    }
};

class Dogs : public Animals
{
public:
    virtual void sound()
    {
        cout << "Sound of Dogs is Called" << endl;
    }
};

int main()
{
    Dogs d;
    d.sound();
    return 0;
}

// 4. Define a class Addition that can add 2 or 3 numbers of different data types using
// function overloading.
#include <iostream>
using namespace std;
class Addition
{
public:
    void add(int x, int y, int z)
    {
        cout << "Add of Int is Called : " << x + y + z << endl;
    }
    void add(int x, int y)
    {
        cout << "Add of Int is Called : " << x + y << endl;
    }
    void add(double x, double y, double z)
    {
        cout << "Add of Double is Called : " << x + y + z << endl;
    }
};

int main()
{
    Addition a;
    a.add(1, 2, 3);
    a.add(2, 3);
    a.add(4.5, 9.0);
    return 0;
}

// 5. Define a class A having multiple constructors. Define another class B derived from
// class A. Create derived class constructors and show use of constructor in this single
// inheritance.
#include <iostream>
using namespace std;
class A
{
public:
    A() { cout << "A Default Constructor Called" << endl; }
    A(int x) { cout << "A Single Parameterized Called" << endl; }
    A(int x, int y) { cout << "A Double Parameterized Constructor Called" << endl; }
};

class B : public A
{
public:
    B() { cout << "B Default Constructor Called" << endl; }
    B(int x) { cout << "B Single Parameterized Constructor Called" << endl; }
    B(int x, int y) { cout << "B Double Parameterized Constructor Called" << endl; }
};

int main()
{
    B b1(2), b2, b3(2, 3);
    return 0;
}

// 6. C++ Program to illustrate the use of Constructors in multilevel inheritance of your
// choice.
#include <iostream>
using namespace std;
class Abc
{
public:
    Abc() { cout << "Abc Default Called" << endl; }
};

class Xyz : public Abc
{
public:
    Xyz() { cout << "Xyz Default Called" << endl; }
};

class Pqr : public Xyz
{
public:
    Pqr() { cout << "Pqr Default Called" << endl; }
};

int main()
{
    Pqr p1, p2;
    return 0;
}

// 7. C++ Program to illustrate the use of Constructors in single inheritance of your choice.
#include <iostream>
using namespace std;
class A1
{
public:
    A1() { cout << "A1 Default Constructor Called" << endl; }
    A1(int x) { cout << "A1 Single Parameterized Called" << endl; }
    A1(int x, int y) { cout << "A1 Double Parameterized Constructor Called" << endl; }
};

class B1 : public A1
{
public:
    B1() { cout << "B1 Default Constructor Called" << endl; }
    B1(int x) { cout << "B1 Single Parameterized Constructor Called" << endl; }
    B1(int x, int y) { cout << "B1 Double Parameterized Constructor Called" << endl; }
};

int main()
{
    B1 b1(2), b2, b3(2, 3);
    return 0;
}

// 8. Write a C++ program to find the factorial of a number using copy constructor
#include <iostream>
using namespace std;
class Factorial
{
public:
    Factorial(int x)
    {
        int temp = 1;
        for (int i = x; i > 0; i--)
            temp *= i;
        cout << "Factorial of " << x << " is " << temp << endl;
    }
};

int main()
{
    Factorial f(5);
    return 0;
}

// 9. Write a C++ program to calculate the area of triangle, rectangle and circle using
// constructor overloading. The program should be menu driven.
#include <iostream>
using namespace std;
class Area
{
public:
    Area()
    {
        cout << "1. Area of Triangle." << endl;
        cout << "2. Area of Rectangle." << endl;
        cout << "3. Area of Circle." << endl;
        cout << "4. Exit" << endl;
        cout << "Enter Your Choice" << endl;
        int ch;
        cin >> ch;
        switch (ch)
        {
        case 1:
            cout << "Enter Base Value : ";
            int base;
            cin >> base;
            cout << "Enter Height Value : ";
            int hei;
            cin >> hei;
            cout << "Area of Triangle is : " << (base * hei) / 2 << endl;
            break;

        case 2:
            cout << "Enter Length : ";
            int len;
            cin >> len;
            cout << "Enter Width : ";
            int wid;
            cin >> wid;
            cout << "Area of Rectangle is : " << len * wid << endl;
            break;

        case 3:
            cout << "Enter Radius : ";
            int r;
            cin >> r;
            cout << "Area of Triangle is : " << 3.14 * (r * r) << endl;
            break;

        case 4:
            exit(0);

        default:
            break;
        }
    }
};

int main()
{
    Area a;
    return 0;
}

// 10. Create a C++ class for player objects with the following attributes: player no., name,
// number of matches and number of goals done in each match. The number of
// matches varies for each player. Write a parameterized constructor which initializes
// player no., name, number of subjects and creates an array for number of goals and
// number of matches dynamically.
#include <iostream>
using namespace std;
class Player
{
private:
    int pno, mno, gno;
    string name;

public:
    Player(int pNo, int mNo, int gNo, string n)
    {
        int arr[mNo];
        for (int i = 0; i < mNo; i++)
        {
            cout << "Enter the Number of Goals in Match " << i + 1 << " : ";
            cin >> arr[i];
        }
        cout << "_______________________________________________" << endl;
        cout << "\nPlayer Name is   : " << n << endl;
        cout << "Player Number is : " << pNo << endl;
        cout << "*************** Match Summary ***************" << endl;
        for (int i = 0; i < mNo; i++)
        {
            cout << "| The Number of Goals in Match " << i + 1 << " are " << arr[i] << " |" << endl;
        }
        cout << "_______________________________________________" << endl;
    }
};

int main()
{
    Player p(10, 5, 10, "Aamsh");
    return 0;
}
