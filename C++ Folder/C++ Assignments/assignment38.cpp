// 1. List functions in C++ STL (Standard Template Library).
#include <iostream>
#include <list>
using namespace std;
int main()
{
    list<int> l;
    l.push_front(1);
    l.push_front(2);
    l.push_front(3);
    for (int i : l)
        cout << i << " ";
    return 0;
}

// 2. Assign the elements to the list (different methods) - Example of list::assign() | C++
// STL.
#include <iostream>
#include <list>
using namespace std;
int main()
{
    list<int> l;
    l.assign(5, 10);
    for (int i : l)
        cout << i << " ";
    return 0;
}

// 3. Iterate a list C++ STL.
#include <iostream>
#include <list>
#include <iterator>
using namespace std;
int main()
{
    list<int> l;
    l.push_front(1);
    l.push_front(2);
    l.push_front(3);

    // APPROACH 1:
    for (int i : l)
        cout << i << " ";

    // APPROACH 2:
    list<int>::iterator i;
    cout << endl;
    for (i = l.begin(); i != l.end(); i++)
        cout << *i << " ";
    return 0;
}

// 4. Iterate a list in reverse order C++ STL.
#include <iostream>
#include <list>
#include <iterator>
using namespace std;
int main()
{
    list<int> l;
    l.push_front(1);
    l.push_front(2);
    l.push_front(3);

    list<int>::iterator i;
    for (i = l.end(); i != l.begin(); i--)
        cout << *i << " ";
    return 0;
}

// 5. Input and add elements to a list C++ STL.
#include <iostream>
#include <list>
#include <iterator>
using namespace std;
int main()
{
    list<int> l;
    int e;
    cout << "Enter 5 Elements : " << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> e;
        l.push_back(e);
    }

    list<int>::iterator i;
    for (i = l.begin(); i != l.end(); i++)
        cout << *i << " ";
    return 0;
}

// 6. Get the first and last element of the list C++ STL.
#include <iostream>
#include <list>
using namespace std;
int main()
{
    list<int> l;
    l.push_front(1);
    l.push_back(10);
    cout << "First Element is : " << l.front() << endl;
    cout << "Last Element is : " << l.back();
    return 0;
}

// 7. Insert the element at beginning and end of the list | C++ STL.
#include <iostream>
#include <list>
using namespace std;
int main()
{
    list<int> l;
    l.push_front(1);
    l.push_back(10);
    cout << "Begining Element is : " << l.front() << endl;
    cout << "Ending Element is : " << l.back();
    return 0;
}

// 8. Remove all occurrences of an element and remove set of some specific from the list
// C++ STL.
#include <iostream>
#include <list>
#include <algorithm>
using namespace std;
int main()
{
    list<int> l{11, 22, 33, 44, 55, 66, 11, 11, 22, 99};
    l.remove(11);
    for (int i : l)
        cout << i << " ";

    cout << endl;
    l.remove_if([](int n)
                { return (n % 2 == 0); });
    for (int i : l)
        cout << i << " ";
}

// 9. Remove all consecutive duplicate elements from the list | C++ STL
#include <iostream>
#include <list>
using namespace std;
int main()
{
    list<int> l{9, 9, 8, 7, 6, 6, 5, 4, 3, 3, 2, 1, 1, 0};
    cout << "List Before :  ";
    for (int i : l)
        cout << i << " ";
    cout << endl
         << "List After : ";
    l.unique();
    for (int i : l)
        cout << i << " ";
}

// 10. Merge two lists C++ STL.
#include <iostream>
#include <list>
using namespace std;
int main()
{
    list<int> l1{1, 2, 3, 4}, l2{5, 6, 7, 8};
    l1.merge(l2);
    for (int i : l1)
        cout << i << " ";
}

// 11. Creating a list by assigning the all elements of another list C++ STL.
#include <iostream>
#include <list>
using namespace std;
int main()
{
    list<int> l1{1, 2, 3, 4}, l2;
    l2.assign(l1.begin(), l1.end());
    for (int i : l2)
        cout << i << " ";
}

// 12. Assign a list with array elements C++ STL.
#include <iostream>
#include <list>
using namespace std;
int main()
{
    list<int> l;
    int arr[] = {1, 2, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    l.assign(arr, arr + n);
    for (int i : l)
        cout << i << " ";
}

// 13. Push characters in a list and print them separated by space in C++ STL.
#include <iostream>
#include <list>
using namespace std;
int main()
{
    list<char> l1{'A', 'M', 'A', 'S', 'H'};
    for (char i : l1)
        cout << i << " ";
}

// 14. Access elements of a characters list using const_iterator in C++ STL
#include <iostream>
#include <list>
using namespace std;
int main()
{
    list<char> l1{'A', 'M', 'A', 'S', 'H'};
    list<char>:: const_iterator ci;
    for (ci = l1.begin(); ci != l1.end(); ci++)
        cout << *ci << " ";
    return 0;
}
