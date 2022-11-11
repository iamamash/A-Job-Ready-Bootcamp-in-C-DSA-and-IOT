// 1.Write a C++ program to convert Primitive type to Complex type.
// Example -
// int main()
// {
// Complex c1;
// Int x=5;
// c1=x;
// return 0;
// }
#include <iostream>
using namespace std;
class Complex
{
private:
    int x;

public:
    Complex(int a)
    {
        x = a;
    }
    void display()
    {
        cout << x << endl;
    }
};

int main()
{
    int x = 10;
    Complex c1(5);
    c1 = x;
    c1.display();
    return 0;
}

// 2. Write a C++ program to convert Complex type to Primitive type.
// Example -
// int main()
// {
// Complex c1;
// c1.setData(3,4);
// int x;
// x=c1;
// return 0;
// }
#include <iostream>
using namespace std;
class Complexes
{
private:
    int x, y;

public:
    void setData(int a, int b)
    {
        x = a;
        y = b;
    }
    operator int()
    {
        return x + y;
    }
};

int main()
{
    Complexes c1;
    c1.setData(3, 4);
    int x;
    x = (int)c1;
    cout << x << endl;
    return 0;
}

// 3. Create a Product class and convert Product type to Item type using constructor
// int main()
// {
// Item i1;
// Product p1;
// p1.setData(3,4);
// i1=p1;
// return 0;
// }
#include <iostream>
using namespace std;
class Product
{
private:
    int a, b;

public:
    void setData(int x, int y)
    {
        a = x;
        b = y;
    }
    int getA()
    {
        return a;
    }
    int getB()
    {
        return b;
    }
};

class Item
{
private:
    int a, b;

public:
    Item(int x, int y)
    {
        a = x;
        b = y;
    }
    Item(Product &p)
    {
        a = p.getA();
        b = p.getB();
    }
    void show()
    {
        cout << "a = " << a << ", b = " << b << endl;
    }
};

int main()
{
    Item i1(3, 5);
    Product p1;
    p1.setData(4, 10);
    i1 = p1;
    i1.show();
    return 0;
}

// 4. Create Product class and convert Product type to Item type using casting operator
// int main()
// {
// Item i1;
// Product p1;
// p1.setData(3,4);
// i1=p1;
// return 0;
// }
#include <iostream>
using namespace std;
class Items
{
private:
    int a;

public:
    Items() {}
    Items(int x)
    {
        a = x;
    }
    void show()
    {
        cout << "a = " << a << endl;
    }
};

class Products
{
private:
    int a;

public:
    void setData(int x)
    {
        a = x;
    }
    operator Items()
    {
        return a;
    }
};

int main()
{
    Items i1(3);
    Products p1;
    p1.setData(4);
    i1 = (Items)p1;
    i1.show();
    return 0;
}

// 5. Create two classes Invent1 and Invent2 and also add necessary constructors in it. Now add
// functions to support Invent1 to float and Invent1 to Invent2 type.
// Example -
// int main()
// {
// Invent1 s1(4,5);
// Invent2 d1;
// float tv;
// tv=s1;
// d1=s1;
// return 0;
// }
#include <iostream>
using namespace std;
class Invent1
{
private:
    int a, b;

public:
    Invent1(int x, int y)
    {
        a = x;
        b = y;
    }
    operator float()
    {
        return a + b;
    }
    int getA()
    {
        return a;
    }
    int getB()
    {
        return b;
    }
};

class Invent2
{
private:
    int a, b;

public:
    Invent2() {}
    Invent2(Invent1 &i)
    {
        a = i.getA();
        b = i.getB();
    }
    void display()
    {
        cout << "a = " << a << ", b = " << b << endl;
    }
};

int main()
{
    Invent1 s1(4, 5);
    Invent2 d1;
    float tv;
    tv = (float)s1;
    d1 = s1;
    cout << tv << endl;
    d1.display();
    return 0;
}

// 6. Create a Time class and take Duration in seconds. Now you need to convert seconds(i.e in
// int ) to Time class.
// Example-
// int main()
// {
// int duration;
// cout<<”Enter time duration in minutes”;
// cin>>duration;
// Time t1 = duration;
// t1.display();
// return 0;
// }
#include <iostream>
using namespace std;
class Time
{
private:
    int sec;

public:
    Time(int s)
    {
        sec = s * 60;
    }
    void display()
    {
        cout << sec << "sec" << endl;
    }
};

int main()
{
    int duration;
    cout << "Enter time duration in minutes: ";
    cin >> duration;
    Time t1 = duration;
    t1.display();
    return 0;
}

// 7. Create two class Time and Minute and add required getter and setter including constructors.
// Now you need to type cast Time object into Minute to fetch the minute from Time and display it.
// Example -
// int main()
// {
// Time t1(2,30);
// t1.display();
// Minute m1;
// m1.display();
// m1=t1 // Fetch minute from time
// t1.display();
// m1.display();
// return 0;
// }
#include <iostream>
using namespace std;
class Minute
{
private:
    int min;

public:
    Minute() {}
    Minute(int t)
    {
        min = t;
    }
    void display()
    {
        cout << "min = " << min << endl;
    }
};

class Times
{
private:
    int min, sec;

public:
    Times(int m, int s)
    {
        min = m;
        sec = s;
    }
    void display()
    {
        cout << "min1 = " << min << ", min2 = " << sec << endl;
    }
    operator Minute()
    {
        return min;
    }
};

int main()
{
    Times t1(2, 30);
    t1.display();
    Minute m1;
    m1.display();
    m1 = t1;
    t1.display();
    m1.display();
    return 0;
}

// 8. Create a Rupee class and convert it into int. And Display it.
// Example-
// int main()
// {
// Rupee r = 10;
// int x = r;
// cout<<x;
// return 0;
// }
#include <iostream>
using namespace std;
class Rupee
{
private:
    int r;

public:
    Rupee(int x)
    {
        r = x;
    }
    operator int()
    {
        return r;
    }
};

int main()
{
    Rupee r = 10;
    int x = r;
    cout << x;
    return 0;
}

// 9. Create a Dollar class and add necessary functions to support int to Dollar type conversion.
// Example-
// int main()
// {
// int x = 50;
// Dollar d;
// d = x;
// d.display();
// return 0;
// }
#include <iostream>
using namespace std;
class Dollar
{
private:
    int d;

public:
    Dollar() {}
    Dollar(int n)
    {
        d = n;
    }
    void display()
    {
        cout << "$" << d << endl;
    }
};

int main()
{
    int x = 50;
    Dollar d;
    d = x;
    d.display();
    return 0;
}

// 10. Create two classes Rupee and Dollar and add necessary functions to support Rupee to
// Dollar and Dollar to Rupee conversion.
// Example-
// int main()
// {
// Rupee r = 23;
// Dollar d = r; // Rupee to Dollar conversion
// d.display();
// r.display();
// r = d; // Dollar to Rupee Conversion
// d.display();
// r.display();
// return 0;
// }
#include <iostream>
using namespace std;
class Dollars
{
private:
    int d;

public:
    Dollars() {}
    Dollars(int a)
    {
        d = a;
    }
    void display()
    {
        cout << "Dollar is: " << d << endl;
    }
    int get()
    {
        return d;
    }
};

class Rupees
{
private:
    int r;

public:
    Rupees(int x)
    {
        r = x;
    }
    Rupees(Dollars &d)
    {
        r = d.get();
    }
    operator Dollars()
    {
        return r;
    }
    void display()
    {
        cout << "Rupee is: " << r << endl;
    }
};

int main()
{
    Rupees r = 23;
    Dollars d = (Dollars)r;
    d.display();
    r.display();
    r = d;
    d.display();
    r.display();
    return 0;
}
