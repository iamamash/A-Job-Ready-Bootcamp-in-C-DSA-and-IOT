// 1. Define a class Complex with appropriate instance variables and member functions.
// Overload following operators
// a. << insertion operator
// b. >> extraction operator
#include <iostream>
using namespace std;
class Complex
{
private:
    int a, b;

public:
    friend ostream &operator<<(ostream &os, Complex &c)
    {
        os << c.a << " + " << c.b << "i" << endl;
        return os;
    }
    friend istream &operator>>(istream &i, Complex &c)
    {
        cout << "Enter the values for a: ";
        i >> c.a;
        cout << "Enter the values for b: ";
        i >> c.b;
        return i;
    }
};

int main()
{
    Complex c1;
    cin >> c1;
    cout << c1;
    return 0;
}

// 2. Define a class Complex with appropriate instance variables and member functions.
// One of the functions should be setData() to set the properties of the object. Make
// sure the names of formal arguments are the same as names of instance variables.
#include <iostream>
using namespace std;
class Complexs
{
private:
    int a, b;

public:
    void setData(int a, int b)
    {
        this->a = a;
        this->b = b;
    }
    void showData()
    {
        cout << a << " + " << b << "i" << endl;
    }
};

int main()
{
    Complexs c;
    c.setData(2, 3);
    c.showData();
    return 0;
}

// 3. Overload subscript operator [] that will be useful when we want to check for an index
// out of bound.
#include <iostream>
using namespace std;
class Subscript
{
private:
    int arr[5];

public:
    int i;
    void setValue()
    {
        cout << "Enter values for array: " << endl;
        for (i = 0; i < 5; i++)
            cin >> arr[i];
    }
    void operator[](int index)
    {
        cout << "value on " << index << " is: " << arr[index];
    }
};

int main()
{
    Subscript s;
    s.setValue();
    s[3];
    return 0;
}

// 4. Create a student class and overload new and delete operators as a member function
// of the class.
// 5. Create a student class and overload new and delete operators outside the class.
// 6. Create a complex class and overload assignment operator for that class.
#include <iostream>
using namespace std;
class complex
{
private:
    int a, b;

public:
    complex(int x, int y)
    {
        a = x;
        b = y;
    }
    void operator=(complex c)
    {
        a = c.a;
        b = c.b;
    }
    void show()
    {
        cout << "a = " << a << ", b = " << b << endl;
    }
};

int main()
{
    complex c1(2, 3), c2(4, 5);
    c1 = c2;
    c1.show();
    return 0;
}

// 7. Create an Integer class and overload logical not operator for that class.
#include <iostream>
using namespace std;
class Integer
{
private:
    int x;

public:
    Integer(int value)
    {
        x = value;
    }
    void operator!()
    {
        cout << "Logical Not value of " << x << " is : " << !x << endl;
    }
};

int main()
{
    Integer i(3);
    !i;
    return 0;
}

// 8. Create a Coordinate class for 3 variables x,y and z and overload comma operator
// such that when you write c3 = (c1 , c2 ) then c2 is assigned to c3. Where c1,c2,and
// c3 are objects of 3D coordinate class.
#include <iostream>
using namespace std;
class Coordinate
{
private:
    int x, y, z;

public:
    Coordinate(int a = 0, int b = 0, int c = 0)
    {
        x = a;
        y = b;
        z = c;
    }
    Coordinate operator,(Coordinate c)
    {
        Coordinate temp;
        temp.x = c.x;
        temp.y = c.y;
        temp.z = c.z;
        return temp;
    }
    void show()
    {
        cout << x << ", " << y << ", " << z << endl;
    }
};

int main()
{
    Coordinate c1(1, 2, 3), c2(4, 5, 6), c3;
    c3 = (c1, c2);
    c3.show();
    return 0;
}

// 9. Create an Integer class that contains int x as an instance variable and overload
// casting int() operator that will type cast your Integer class object to int data type.
#include <iostream>
using namespace std;
class Integers
{
private:
    int x;

public:
    Integers(int a)
    {
        x = a;
    }
    operator int()
    {
        return x * x;
    }
};

int main()
{
    Integers i(2);
    int x = (int)i;
    cout << x;
    return 0;
}

// 10. Create a Distance class having 2 instance variable feet and inches. Also create
// default constructor and parameterized constructor takes 2 variables . Now overload ()
// function call operator that takes 3 arguments a , b and c and set feet = a + c + 5 and
// inches = a+b + 15.
#include <iostream>
using namespace std;
class Distance
{
private:
    int feet, inches;

public:
    Distance(){};
    Distance(int f, int i)
    {
        feet = f;
        inches = i;
    }
    void operator()(int a, int b, int c)
    {
        feet = a + c + 5;
        inches = a + b + 15;
    }
    void show()
    {
        cout << "feet : " << feet << endl;
        cout << "inches : " << inches << endl;
    }
};

int main()
{
    Distance d(2, 3);
    d(2, 3, 4);
    d.show();
    return 0;
}

// 11. Create a class Marks that have one member variable marks and one member
// function that will print marks. We know that we can access member functions using
// (.) dot operator. Now you need to overload (->) arrow operator to access that
// function.
#include <iostream>
using namespace std;
class Marks
{
private:
    int marks;

public:
    Marks(int m)
    {
        marks = m;
    }
    void show()
    {
        cout << marks << endl;
    }
};

int main()
{
    Marks m(100);
    Marks *ptr = &m;
    ptr->show();
    return 0;
}
