// 1. Define a class Complex to represent a complex number with instance variables a and
// b to store real and imaginary parts. Also define following member functions
// a. void setData(int,int)
// b. void showData()
// c. Complex add(Complex)
#include <iostream>
using namespace std;
class Complex
{
private:
    int a, b;

public:
    void setData(int x, int y)
    {
        a = x;
        b = y;
    }
    void showData()
    {
        cout << "a = " << a << ","
             << "b = " << b << endl;
    }
    Complex add(Complex c)
    {
        Complex temp;
        temp.a = c.a + a;
        temp.b = c.b + b;
        return temp;
    }
};

int main()
{
    Complex c1, c2, c3;
    c1.setData(2, 3);
    c2.setData(8, 9);
    c1.showData();
    c2.showData();
    c3 = c1.add(c2);
    c3.showData();
    return 0;
}

// 2. Define a class Time to represent a time with instance variables h,m and s to store
// hour, minute and second. Also define following member functions
// a. void setTime(int,int,int)
// b. void showTime()
// c. void normalize()
// d. Time add(Time)
#include <iostream>
using namespace std;
class Time
{
private:
    int h, m, s;

public:
    void setTime(int x, int y, int z)
    {
        h = x;
        m = y;
        s = z;
    }
    void showTime()
    {
        cout << h << "hrs " << m << "min " << s << "sec" << endl;
    }
    void normalize()
    {
        m = m + s / 60;
        s = s % 60;
        h = h + m / 60;
        m = m % 60;
    }
    Time add(Time t)
    {
        Time temp;
        temp.s = s + t.s;
        temp.m = m + t.m;
        temp.h = h + t.h;
        temp.normalize();
        return temp;
    }
};

int main()
{
    Time t1, t2, t3;
    t1.setTime(5, 50, 30);
    t2.setTime(7, 20, 34);
    t1.showTime();
    t2.showTime();
    t3 = t1.add(t2);
    t3.showTime();
    return 0;
}

// 3. Define a class Cube and calculate Volume of Cube and initialise it using constructor.
#include <iostream>
using namespace std;
class Cube
{
public:
    Cube(int x)
    {
        cout << "Volume of Cube is: " << x * x * x << endl;
    }
};

int main()
{
    Cube c(4);
    return 0;
}

// 4. Define a class Counter and Write a program to Show Counter using Constructor.
#include <iostream>
using namespace std;
class Counter
{
private:
    int counter = 0;

public:
    Counter()
    {
        cout << ++counter;
    }
};

int main()
{
    Counter c;
    return 0;
}

// 5. Define a class Date and write a program to Display Date and initialise date object
// using Constructors.
#include <iostream>
using namespace std;
class Date
{
private:
    int d, m, y;

public:
    Date(int day, int month, int year)
    {
        d = day;
        m = month;
        y = year;
    }
    void showDate()
    {
        cout << d << "/" << m << "/" << y << endl;
    }
};

int main()
{
    Date d1(12, 9, 2022), d2(12, 12, 2012);
    d1.showDate();
    d2.showDate();
    return 0;
}

// 6. Define a class student and write a program to enter student details using constructor
// and define member function to display all the details.
#include <iostream>
using namespace std;
class Student
{
private:
    int rollno, age, cls;
    static int num;
    string name;

public:
    int i;
    Student(int r, string n, int a, int c)
    {
        rollno = r;
        name = n;
        age = a;
        cls = c;
    }
    void showDetails()
    {
        cout << "Student " << ++num << ":" << endl;
        cout << "rollno: " << rollno << ", name: " << name << ", age: " << age << ", class: " << cls << endl
             << endl;
    }
};

int Student::num;

int main()
{
    Student s1(1, "Amash", 20, 12), s2(2, "Ansari", 19, 10);
    s1.showDetails();
    s2.showDetails();
    return 0;
}

// 7. Define a class Box and write a program to enter length, breadth and height and
// initialise objects using constructor also define member functions to calculate volume
// of the box.
#include <iostream>
using namespace std;
class Box
{
private:
    int len, br, hei;

public:
    Box(int l, int b, int h)
    {
        len = l;
        br = b;
        hei = h;
    }
    void showVolume()
    {
        cout << len * br * hei << endl;
    }
};

int main()
{
    Box b1(2, 4, 6), b2(3, 9, 12);
    b1.showVolume();
    b2.showVolume();
    return 0;
}

// 8. Define a class Bank and define member functions to read principal , rate of interest
// and year. Another member functions to calculate simple interest and display it.
// Initialise all details using constructor.
#include <iostream>
using namespace std;
class Bank
{
private:
    int p, r, t;

public:
    Bank(int principal, int roi, int time)
    {
        p = principal;
        r = roi;
        t = time;
    }
    void SI()
    {
        cout << (p * r * t) / 100 << endl;
    }
};

int main()
{
    Bank b1(1000, 5, 1), b2(1000, 5, 2);
    b1.SI();
    b2.SI();
    return 0;
}

// 9. Define a class Bill and define its member function get() to take detail of customer ,
// calculateBill() function to calculate electricity bill using below tariff :
// Upto 100 unit RS. 1.20 per unit
// From 100 to 200 unit RS. 2 per unit
// Above 200 units RS. 3 per unit.
#include <iostream>
using namespace std;
class Bill
{
private:
    int houseno, units, amount;
    string name;

public:
    void get(int h, int u, string n)
    {
        houseno = h;
        units = u;
        name = n;
    }
    void calculateBill()
    {
        if (units <= 100)
        {
            amount = 1.20 * units;
            cout << "Name: " << name << " House no: " << houseno << " Amount: " << amount << endl;
        }
        else if (units > 100 && units <= 200)
        {
            amount = 2 * units;
            cout << "Name: " << name << " House no: " << houseno << " Amount: " << amount << endl;
        }
        else
        {
            amount = 3 * units;
            cout << "Name: " << name << " House no: " << houseno << " Amount: " << amount << endl;
        }
    }
};

int main()
{
    Bill b1, b2;
    b1.get(10, 55, "Amash");
    b2.get(20, 300, "Ansari");
    b1.calculateBill();
    b2.calculateBill();
    return 0;
}

// 10. Define a class StaticCount and create a static variable. Increment this variable in a
// function and call this 3 times and display the result.
#include <iostream>
using namespace std;
class StaticCount
{
private:
    static int count;

public:
    void increment()
    {
        ++count;
        cout << count << endl;
    }
};

int StaticCount::count;

int main()
{
    StaticCount s1;
    s1.increment();
    s1.increment();
    s1.increment();
    return 0;
}