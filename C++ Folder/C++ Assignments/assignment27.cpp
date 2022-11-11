// 1. Define a class Complex with appropriate instance variables and member functions.
// Define following operators in the class:
// a. +
// b. -
// c. *
// d. ==
#include <iostream>
using namespace std;
class Complex
{
private:
    int a, b;

public:
    void setValue(int x, int y)
    {
        a = x;
        b = y;
    }
    void showValue()
    {
        cout << "a = " << a << ", b = " << b << endl;
    }
    Complex operator+(Complex c)
    {
        Complex temp;
        temp.a = c.a + a;
        temp.b = c.b + b;
        return temp;
    }
    Complex operator-(Complex c)
    {
        Complex temp;
        temp.a = c.a - a;
        temp.b = c.b - b;
        return temp;
    }
    Complex operator*(Complex c)
    {
        Complex temp;
        temp.a = c.a * a;
        temp.b = c.b * b;
        return temp;
    }
    bool operator==(Complex c)
    {
        if (a == c.a && b == c.b)
            return true;
        else
            return false;
    }
};

int main()
{
    Complex c1, c2, c3;
    c1.setValue(2, 3);
    c2.setValue(5, 8);
    c1.showValue();
    c2.showValue();
    c3 = c1 + c2;
    c3.showValue();
    c3 = c1 - c2;
    c3.showValue();
    c3 = c1 * c2;
    c3.showValue();
    if (c1 == c2)
        cout << "Equal\n";
    else
        cout << "Not Equal\n";
    return 0;
}

// 2. Write a C++ program to overload unary operators that is increment and decrement.
#include <iostream>
using namespace std;
class Overload
{
private:
    int a;

public:
    Overload(int x)
    {
        a = x;
    }
    void operator++()
    {
        cout << ++a << endl;
    }
    void operator++(int n)
    {
        cout << ++a << endl;
    }
    void operator--()
    {
        cout << --a << endl;
    }
    void operator--(int n)
    {
        cout << --a << endl;
    }
};

int main()
{
    Overload o1(4), o2(9);
    ++o1;
    o1++;
    --o2;
    o2--;
    return 0;
}

// 3. Write a C++ program to add two complex numbers using operator overloaded by a
// friend function.
#include <iostream>
using namespace std;
class Complexs
{
private:
    int a, b;

public:
    Complexs(int x, int y)
    {
        a = x;
        b = y;
    }
    friend void operator+(Complexs, Complexs);
};

void operator+(Complexs x, Complexs y)
{
    Complexs temp(0, 0);
    temp.a = x.a + y.a;
    temp.b = x.b + y.b;
    cout << temp.a << " + " << temp.b << "i" << endl;
}

int main()
{
    Complexs c1(2, 3), c2(5, 8);
    c1 + c2;
    return 0;
}

// 4. Create a class Time which contains:
// - Hours
// - Minutes
// - Seconds
// Write a C++ program using operator overloading for the following:
// 1. = = : To check whether two Times are the same or not.
// 2. >> : To accept the time.
// 3. << : To display the time.
#include <iostream>
using namespace std;
class Time
{
private:
    int hrs, min, sec;

public:
    Time(int h = 0, int m = 0, int s = 0)
    {
        hrs = h;
        min = m;
        sec = s;
    }
    void operator>>(Time &t)
    {
        cout << "Enter Time as hours, minutes & seconds:" << endl;
        cout << "Enter hours : ";
        cin >> t.hrs;
        cout << "Enter minutes : ";
        cin >> t.min;
        cout << "Enter seconds : ";
        cin >> t.sec;
    }
    void operator<<(Time &t)
    {
        cout << t.hrs << "hrs " << t.min << "min " << t.sec << "sec" << endl;
    }
};

int main()
{
    Time t1, t2;
    t1 >> t1;
    t2 >> t2;
    t1 << t1;
    t2 << t2;
    return 0;
}

// 5. Consider following class Numbers
// class Numbers
// {
// int x,y,z;
// public:
// // methods
// };
// Overload the operator unary minus (-) to negate the numbers.
#include <iostream>
using namespace std;
class Numbers
{
private:
    int x, y, z;

public:
    Numbers(int a, int b, int c)
    {
        x = a;
        y = b;
        z = c;
    }
    void operator-()
    {
        cout << "x = " << x * -1 << ", y = " << y * -1 << ", z = " << z * -1 << endl;
    }
};

int main()
{
    Numbers n1(1, 2, 3), n2(5, 6, 7);
    -n1;
    -n2;
    return 0;
}

// 6. Create a class String to represent a string.
// a) Overload the + operator to concatenate two strings.
// b) == to compare 2 strings.
#include <iostream>
using namespace std;
class String
{
private:
    string s;

public:
    void set(string x)
    {
        s = x;
    }
    void operator+(String x)
    {
        cout << s << " " << x.s << endl;
    }
    void operator==(String x)
    {
        if (s == x.s)
            cout << "Equal\n";
        else
            cout << "Not Equal:\n";
    }
};

int main()
{
    String s1, s2;
    s1.set("Amash");
    s2.set("Ansari");
    s1 + s2;
    s1 == s2;
    return 0;
}

// 7. Define a C++ class fraction
// class fraction
// {
// long numerator;
// long denominator;
// Public:
// fraction (long n=0, long d=0);
// }
// Overload the following operators as member or friend:
// a) Unary ++ (pre and post both)
// b) Overload as friend functions: operators << and >>.
#include <iostream>
using namespace std;
class Fraction
{
private:
    long num, den;

public:
    Fraction(long n = 0, long d = 0)
    {
        num = n;
        den = d;
    }
    void show(string s)
    {
        cout << s << ": " << num << "/" << den << endl;
    }
    void setValue()
    {
        cout << "Numerator: ";
        cin >> num;
        cout << "Denominator: ";
        cin >> den;
    }
    void operator++(int n)
    {
        cout << "f1++ : " << ++num << "/" << ++den << endl;
    }
    void operator++()
    {
        cout << "++f1 : " << ++num << "/" << ++den << endl;
    }
    friend void operator>>(Fraction &f2, Fraction &f3)
    {
        cout << "Enter another fraction values: " << endl;
        cout << "Numerator : ";
        cin >> f2.num;
        cout << "Denominator : ";
        cin >> f2.den;
        cout << "\nNumerator : ";
        cin >> f3.num;
        cout << "Denominator : ";
        cin >> f3.den;
    }
    friend void operator<<(Fraction &f2, Fraction &f3)
    {
        cout << "f2 : " << f2.num << "/" << f2.den << endl;
        cout << "f3 : " << f3.num << "/" << f3.den << endl;
    }
};

int main()
{
    Fraction f1, f2, f3;
    f1.show("f1");
    f2.show("f2");
    cout << "Enter 1st Fraction value:\n";
    f1.setValue();
    f1++;
    ++f1;
    f2 >> f3;
    f2 << f3;
    return 0;
}

// 8. Consider a class Matrix
// Class Matrix
// {
// int a[3][3];
// Public:
// //methods;
// };
// Overload the - (Unary) should negate the numbers stored in the object.
#include <iostream>
using namespace std;
class Matrix
{
private:
    int a[3][3];

public:
    int i, j;
    void setValue()
    {
        cout << "Enter the values for 3 x 3 matrix:" << endl;
        for (i = 0; i < 3; i++)
            for (j = 0; j < 3; j++)
                cin >> a[i][j];
    }
    void getValue()
    {
        cout << "Matrix is: " << endl;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
                cout << a[i][j] * -1 << "\t";
            cout << endl;
        }
    }
};

int main()
{
    Matrix m1;
    m1.setValue();
    m1.getValue();
    return 0;
}

// 9. Consider the following class mystring
// Class mystring
// {
// char str [100];
// Public:
// // methods
// };
// Overload operator “!” to reverse the case of each alphabet in the string
// (Uppercase to Lowercase and vice versa).
#include <iostream>
using namespace std;
class Mystring
{
private:
    char str[100];

public:
    int i;
    void setString()
    {
        cout << "Enter a string: " << endl;
        fgets(str, 100, stdin);
    }
    void operator!()
    {
        for (i = 0; str[i]; i++)
        {
            if (str[i] <= 90 && str[i] >= 65)
                str[i] = str[i] + 32;
            else if (str[i] <= 121 && str[i] >= 97)
                str[i] = str[i] - 32;
        }
        cout << "\nUpdated string is: " << endl;
        for (i = 0; str[i]; i++)
            cout << str[i];
    }
};

int main()
{
    Mystring m1;
    m1.setString();
    !m1;
    return 0;
}

// 10.Class Matrix
// {
// int a[3][3];
// Public:
// //methods;
// };
// Let m1 and m2 are two matrices. Find out m3=m1+m2 (use operator
// overloading).
#include <iostream>
using namespace std;
class Matrixs
{
private:
    int a[3][3];

public:
    int i, j;
    void setValue()
    {
        cout << "Enter the values for 3 x 3 matrix:" << endl;
        for (i = 0; i < 3; i++)
            for (j = 0; j < 3; j++)
                cin >> a[i][j];
    }
    Matrixs operator+(Matrixs m)
    {
        Matrixs temp;
        for (i = 0; i < 3; i++)
            for (j = 0; j < 3; j++)
                temp.a[i][j] = a[i][j] + m.a[i][j];
        return temp;
    }
    void show()
    {
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
                cout << a[i][j] << "\t";
            cout << endl;
        }
    }
};

int main()
{
    Matrixs m1, m2, m3;
    m1.setValue();
    m2.setValue();
    m3 = m1 + m2;
    cout << "New Matrix is: " << endl;
    m3.show();
    return 0;
}