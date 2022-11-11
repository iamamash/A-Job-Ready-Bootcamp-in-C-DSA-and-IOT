// 1. Write a C++ program to print Hello MySirG on the screen.
#include <iostream>
using namespace std;
int main()
{
    cout << "Hello MySirG";
    return 0;
}

// 2. Write a C++ program to print Hello on the first line and MySirG on the second line
// using endl.
#include <iostream>
using namespace std;
int main()
{
    cout << "Hello" << endl
         << "MySirG";
    return 0;
}

// 3. Write a C++ program to calculate the sum of two numbers.
#include <iostream>
using namespace std;
int main()
{
    int x, y;
    cout << "Enter 2 numbers\n";
    cin >> x >> y;
    cout << "Sum of " << x << " & " << y << " is " << x + y;
    return 0;
}

// 4. Write a C++ program to calculate the area of a circle.
#include <iostream>
using namespace std;
int main()
{
    int area, len, brd;
    cout << "Enter length & breadth:\n";
    cin >> len >> brd;
    area = len * brd;
    cout << "Area of a circle is:\n"
         << area;
    return 0;
}

// 5. Write a C++ program to calculate the volume of a cuboid.
#include <iostream>
using namespace std;
int main()
{

    return 0;
}

// 6. Write a C++ program to calculate an average of 3 numbers.
#include <iostream>
using namespace std;
int main()
{
    int num1, num2, num3, avg;
    cout << "Enter 3 numbers\n";
    cin >> num1 >> num2 >> num3;
    avg = (num1 + num2 + num3) / 3;
    cout << "Average is: " << avg;
    return 0;
}

// 7. Write a C++ program to calculate the square of a number.
#include <iostream>
using namespace std;
int main()
{
    int sq;
    cout << "Enter a number:\n";
    cin >> sq;
    sq = sq * sq;
    cout << "Square is: " << sq;
    return 0;
}

// 8. Write a C++ program to swap values of two int variables without using third variable.
#include <iostream>
using namespace std;
int main()
{
    int a, b, sum;
    cout << "Enter 2 numbers:\n";
    cin >> a >> b;
    sum = a + b;
    a = sum - a;
    b = sum - b;
    cout << "Swapped values are:\n";
    cout << "a = " << a << endl
         << "b = " << b;
    return 0;
}

// 9. Write a C++ program to find the maximum of two numbers.
#include <iostream>
using namespace std;
int main()
{
    int num1, num2;
    cout << "Enter 2 numbers:\n";
    cin >> num1 >> num2;
    if (num1 > num2)
        cout << num1 << " is greater";
    else
        cout << num2 << " is greater";
    return 0;
}

// 10. Write a C++ program to add all the numbers of an array of size 10.
#include <iostream>
using namespace std;
int main()
{
    int i, arr[2], sum = 0;
    cout << "Enter 2 numbers:\n";
    for (i = 0; i < 2; i++)
        cin >> arr[i];
    for (i = 0; i < 2; i++)
        sum += arr[i];
    cout << "Sum is: " << sum;
    return 0;
}