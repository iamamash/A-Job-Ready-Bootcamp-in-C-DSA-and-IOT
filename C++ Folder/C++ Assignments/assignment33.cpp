// 1. Create a base class called shape. Use this class to store two double type values that
// could be used to compute the area of figures. Derive two specific classes called
// triangle and rectangle from the base shape. Add to the base class, a member
// function get_data() to initialise base class data members and another member
// function display_area() to compute and display the area of figures. Make
// display_area() as a virtual function and redefine this function in the derived classes to
// suit their requirements.
// Using these three classes, design a program that will accept dimensions of a
// triangle or a rectangle interactively, and display the area.
// Remember the two values given as input will be treated as lengths of two sides in
// the case of rectangles, and as base and height in the case of the triangles, and used
// as follows:
// Area of rectangle = x * y Area of triangle = 1/2 * x * y
#include <iostream>
using namespace std;
class Shape
{
public:
    virtual void displayArea() = 0;
};

class Rectangle : public Shape
{
private:
    double len, width;

public:
    Rectangle(double a, double b)
    {
        len = a;
        width = b;
    }
    void displayArea()
    {
        cout << "Area of Rectangle is " << len * width << endl;
    }
};

class Triangle : public Shape
{
private:
    double base, hei;

public:
    Triangle(double a, double b)
    {
        base = a;
        hei = b;
    }
    void displayArea()
    {
        cout << "Area of Triangle is " << (base * hei) / 2 << endl;
    }
};

// 2. Extend the above program to display the area of circles. This requires the addition of
// a new derived class 'circle' that computes the area of a circle. Remember, for a circle
// we need only one value, its radius, but the get_data() function in the base class
// requires two values to be passed. (Hint: Make the second argument of get_data()
// function as a default one with zero value.)
class Circle : public Shape
{
private:
    double radius;

public:
    Circle(double r)
    {
        radius = r;
    }
    void displayArea()
    {
        cout << "Area of Cirlce is " << 3.14 * (radius * radius) << endl;
    }
};

int main()
{
    Shape *s;
    Rectangle r(2, 4);
    Triangle t(4, 6);
    Circle c(2);
    s = &r;
    s->displayArea();

    s = &t;
    s->displayArea();

    s = &c;
    s->displayArea();
    return 0;
}

// 3. Using the concept of pointers, write a function that swaps the private data values of
// two objects of the same class type.
#include <iostream>
using namespace std;
class Demo
{
private:
    int x;

public:
    Demo(int a)
    {
        x = a;
    }
    void setData(int a)
    {
        x = a;
    }
    int getData()
    {
        return x;
    }
};

int main()
{
    Demo d1(10), d2(9);
    cout << "d1 = " << d1.getData() << ", d2 = " << d2.getData() << endl;
    Demo *ptr1, *ptr2;
    ptr1 = &d1;
    int temp1 = ptr1->getData();
    ptr2 = &d2;
    int temp2 = ptr2->getData();
    ptr1->setData(temp2);
    ptr2->setData(temp1);
    cout << "d1 = " << d1.getData() << ", d2 = " << d2.getData() << endl;
    return 0;
}

// 4. Create a base class called shape. Use this class to store 2 double type values that
// could be used to compute the area of figures. Derive 2 specific classes called triangle
// and rectangle from the base shape. Add to the base class a member function
// get_data() to initialise base class data members and another member function
// display_area() to compute and display the area of figures. Make display_area() as a
// virtual function and redefine this function in derived classes to suit their requirements.
// Using these 3 classes, design a program that will accept the dimensions of the
// shapes interactively and display area.
#include <iostream>
using namespace std;
class SHAPE
{
private:
    double x, y;

public:
    void getData(double a, double b)
    {
        x = a;
        y = b;
    }
    virtual void displayArea() = 0;
};

class TRIANGLE : public SHAPE
{
private:
    double base, hei;

public:
    TRIANGLE(double b, double h)
    {
        base = b;
        hei = h;
    }
    void displayArea()
    {
        cout << "Area of Triangle is " << (base * hei) / 2 << endl;
    }
};

class RECTANGLE : public SHAPE
{
private:
    double len, width;

public:
    RECTANGLE(double l, double w)
    {
        len = l;
        width = w;
    }
    void displayArea()
    {
        cout << "Area of Rectangle is " << (len * width) << endl;
    }
};

int main()
{
    SHAPE *s1;
    TRIANGLE t(2, 3);
    RECTANGLE r(4, 8);
    s1 = &t;
    s1->displayArea();

    s1 = &r;
    s1->displayArea();
    return 0;
}

// 5. Create a base class called Photon. Use this class to store double type value of
// wavelength that could be used to calculate photon energy. Create class
// calculate_photonEnergy which will photon energy.
// Using these classes, calculate photon energy.
#include <iostream>
#include <math.h>
using namespace std;
class Photon
{
public:
    void calculate(double d)
    {
        cout << "E = hc / pi" << endl;
        double h = 6.26 * (double)pow(10, -34);
        cout << "h = " << h << endl;
        double c = 3 * (double)pow(10, 8);
        cout << "c = " << c << endl;
        double a = d * (double)pow(10, -10);

        cout << "Answer is : " << (h * c) / a;
    }
};

class Calculate : public Photon
{
public:
    void calculate()
    {
        Photon p;
        cout << "Enter the Wavelength : ";
        double w;
        cin >> w;
        p.calculate(w);
    }
};

int main()
{
    Calculate c;
    c.calculate();
    return 0;
}

// 6. Extend above to display the area of circles. For a circle,only one value is needed i.e.
// radius but in get_data() function 2 values are passed.
#include <iostream>
using namespace std;
class SHAPE
{
private:
    double x, y;

public:
    void getData(double a, double b)
    {
        x = a;
        y = b;
    }
    virtual void displayArea() = 0;
};

class TRIANGLE : public SHAPE
{
private:
    double base, hei;

public:
    TRIANGLE(double b, double h)
    {
        base = b;
        hei = h;
    }
    void displayArea()
    {
        cout << "Area of Triangle is " << (base * hei) / 2 << endl;
    }
};

class RECTANGLE : public SHAPE
{
private:
    double len, width;

public:
    RECTANGLE(double l, double w)
    {
        len = l;
        width = w;
    }
    void displayArea()
    {
        cout << "Area of Rectangle is " << (len * width) << endl;
    }
};

class CIRCLE : public SHAPE
{
private:
    double radius;

public:
    CIRCLE(double r)
    {
        radius = r;
    }
    void displayArea()
    {
        cout << "Area of Circle is " << 3.14 * (radius * radius) << endl;
    }
};

int main()
{
    SHAPE *s1;
    TRIANGLE t(2, 3);
    RECTANGLE r(4, 8);
    CIRCLE c(4);
    s1 = &t;
    s1->displayArea();

    s1 = &r;
    s1->displayArea();

    s1 = &c;
    s1->displayArea();
    return 0;
}

// 7. Create a base class called Matrix. Use this class to store 4 int type values that could
// be used to calculate determinants and create matrices. Create class
// calculate_determinant which will calculate the determinant of a matrix.
// Using these classes, calculate the determinant of the matrix.
#include <iostream>
using namespace std;
class Matrix
{
public:
    void calculate(int w, int x, int y, int z)
    {
        cout << "Answer is : " << (w * z) - (x * y) << endl;
    }
};

class CalculateDeterminant : public Matrix
{
public:
    void cal()
    {

        cout << "Enter 4 values : " << endl;
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        calculate(a, b, c, d);
    }
};

int main()
{
    CalculateDeterminant c;
    c.cal();
    return 0;
}

// 8. Create a base class called proof. Use this class to store two int type values that could
// be used to prove that triangle is a right angled triangle. Create a class compute
// which will determine whether a triangle is a right angled triangle.Using these classes, design a program that will accept dimensions of a triangle, and display the result.
// (Summary: Prove that triangle is a right angled triangle using pythagoras theorem).
#include <iostream>
using namespace std;
class Proof
{
public:
    void calculate(int h, int a, int b)
    {
        (h * h) == (a * a) + (b * b) ? cout << "Yes" << endl : cout << "No" << endl;
    }
};

class Compute : public Proof
{
public:
    void calculate()
    {
        cout << "Enter the Hypotenuse : ";
        int h;
        cin >> h;
        cout << "Enter the other 2 sides : ";
        int a, b;
        cin >> a >> b;
        Proof::calculate(h, a, b);
    }
};

int main()
{
    Compute c;
    c.calculate();
    return 0;
}

// 9. Create a base class called volume. Use this class to store two double type values
// that could be used to compute the volume of figures. Derive two specific classes
// called cube and sphere from the base shape. Add to the base class, a member
// function get_data() to initialise base class data members and another member
// function display_volume() to compute and display the volume of figures. Make
// display_volume() as a virtual function and redefine this function in the derived
// classes to suit their requirements.
// Using these three classes, design a program that will accept dimensions of a cube
// or a sphere interactively, and display the volume.
#include <iostream>
using namespace std;
class Volume
{
public:
    virtual void displayArea() = 0;
};

class Cube : public Volume
{
private:
    int len;

public:
    Cube(int l) { len = l; }
    void displayArea()
    {
        cout << "Volume of Cube is : " << len * len * len << endl;
    }
};

class Sphere : public Volume
{
private:
    int radius;

public:
    Sphere(int r) { radius = r; }
    void displayArea()
    {
        cout << "Volume of Sphere is : " << (4 * 3.14 * radius * radius * radius) / 3 << endl;
    }
};

int main()
{
    Volume *v1;
    Cube c(2);
    Sphere s(3);

    v1 = &c;
    v1->displayArea();

    v1 = &s;
    v1->displayArea();
    return 0;
}

// 10. Create a base class called shape. Use this class to store two double type values that
// could be used to compute the area of figures. Derive two specific classes called
// square and parallelogram from the base shape. Add to the base class, a member
// function get_data() to initialise base class data members and another member
// function display_area() to compute and display the area of figures. Make
// display_area() as a virtual function and redefine this function in the derived classes to
// suit their requirements.
// Using these three classes, design a program that will accept dimensions of a
// square or a parallelogram interactively, and display the area.
#include <iostream>
using namespace std;
class SHAPES
{
public:
    virtual void displayArea() = 0;
};

class SQUARE : public SHAPES
{
private:
    int a;

public:
    SQUARE(int l) { a = l; }
    void displayArea()
    {
        cout << "Area of Square is : " << a * a << endl;
    }
};

class Parallelogram : public SHAPES
{
private:
    int base, height;

public:
    Parallelogram(int b, int h)
    {
        base = b;
        height = h;
    }
    void displayArea()
    {
        cout << "Area of Parallelogram is : " << base * height << endl;
    }
};

int main()
{
    SHAPES *s;
    SQUARE sq(2);
    Parallelogram p(3, 5);

    s = &sq;
    s->displayArea();

    s = &p;
    s->displayArea();
    return 0;
}
