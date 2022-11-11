// 1. Write a C++ program to demonstrate the addition of multiple types of data using
// generic functions or templates.
#include <iostream>
using namespace std;
template <class T1, class T2>
void add(T1 x, T2 y)
{
    cout << x + y;
}

int main()
{
    add<int, float>(2, 3.5);
    return 0;
}

// 2. Write a C++ Program to find Largest among two numbers using function template.
#include <iostream>
using namespace std;
template <class T1, class T2, class T3>
T3 largest(T1 x, T2 y)
{
    return (x > y) ? x : y;
}

int main()
{
    cout << largest<int, float, float>(10.90, 100.1);
    return 0;
}

// 3. Write a C++ program to find the largest of three elements using a template.
#include <iostream>
using namespace std;
template <class T1, class T2, class T3>
T3 Largest(T1 x, T2 y, T3 z)
{
    if (x > y && x > z)
        return x;
    else if (y > z && y > x)
        return y;
    else
        return z;
}

int main()
{
    cout << Largest<int, float, float>(1, -1.100, 69);
    return 0;
}

// 4. Write a C++ Program to Swap data using function template.
#include <iostream>
using namespace std;
template <class T1, class T2>
void swap(T1 a, T2 b)
{
    cout << "a = " << b << ", b = " << a << endl;
}

int main()
{
    swap<int, float>(2, 420.10);
    return 0;
}

// 5. Write a C++ Program to Add two numbers using function template.
#include <iostream>
using namespace std;
template <class T1, class T2>
void ADD(T1 a, T2 b)
{
    cout << a + b << endl;
}

int main()
{
    ADD<int, int>(4, 8);
    return 0;
}

// 6. Write a C++ Program to find Sum of Array using function template.
#include <iostream>
using namespace std;
template <class T1, class T2>
void sum(T1 *arr, T2 size)
{
    T1 temp = 0;
    for (int i = 0; i < size; i++)
        temp += arr[i];
    cout << temp << endl;
}

int main()
{
    float arr[] = {1, -2, 3.9, 4, 0};
    sum<float, int>(arr, 5);
    return 0;
}

// 7. Write a C++ Program of Templated class derived from Non-templated class.
#include <iostream>
using namespace std;
class A
{
};

template <class T1>
class B : public A
{
public:
    T1 a;
};

int main()
{
    B<float> b;
    b.a = 10.1;
    cout << b.a << endl;
    return 0;
}

// 8. Write a C++ Program to implement push and pop methods from stack using
// template.
#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack<int> arr;
    arr.push(1);
    arr.push(2);
    arr.push(3);
    arr.push(4);
    arr.push(5);

    while (!arr.empty())
    {
        cout << arr.top() << " ";
        arr.pop();
    }
    return 0;
}

// 9. Write a C++ Program to Perform Simple Addition Function Using Templates.
#include <iostream>
using namespace std;
template <class T1, class T2>
void add(T1 x, T2 y)
{
    cout << x + y;
}

int main()
{
    add<int, float>(2, 3.5);
    return 0;
}

// 10. Write a C++ program to implement Hash Table using Template Class.
#include <iostream>
using namespace std;
template <class T1>
void Hash(T1 a)
{
    cout << a % 20 << endl;
}

int main()
{
    Hash<int>(2);
    return 0;
}
