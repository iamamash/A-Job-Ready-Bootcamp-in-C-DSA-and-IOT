// 1. Write a c++ program to demonstrate the implementation of multimap
#include <iostream>
#include <map>
using namespace std;
int main()
{
    multimap<int, string> m;
    m.insert(pair<int, string>(1, "AMASH"));
    m.insert(pair<int, string>(1, "ANSARI"));

    for (auto i : m)
        cout << "Key : " << i.first << ", Value : " << i.second << endl;
    return 0;
}

// 2. Declare a multimap m1 of key-value pairs of integer type and then insert some pair
// type data. Now print the multimap values of m1, and also create another multimap
// m2 of the same type as m1 using m1.begin() and m1.end() as parameters.
#include <iostream>
#include <map>
using namespace std;
int main()
{
    multimap<int, int> m1;
    m1.insert(pair<int, int>(0, 100));
    m1.insert(pair<int, int>(1, 200));
    m1.insert(pair<int, int>(2, 300));

    multimap<int, int> m2(m1.begin(), m1.end());

    for (auto i : m2)
        cout << "Key : " << i.first << ", Value : " << i.second << endl;
    return 0;
}

// 3. Write a c++ code for illustration of multimap::swap() function.
#include <iostream>
#include <map>
using namespace std;
int main()
{
    multimap<int, int> m1;
    m1.insert(pair<int, int>(0, 100));
    m1.insert(pair<int, int>(1, 200));
    m1.insert(pair<int, int>(2, 300));

    multimap<int, int> m2;
    m2.insert(pair<int, int>(0, 1000));
    m2.insert(pair<int, int>(1, 2000));
    m2.insert(pair<int, int>(2, 3000));

    m1.swap(m2);

    cout << "M1 ->" << endl;
    for (auto i : m1)
        cout << "Key : " << i.first << ", Value : " << i.second << endl;

    cout << "\n\nM2 -> " << endl;
    for (auto i : m2)
        cout << "Key : " << i.first << ", Value : " << i.second << endl;
    return 0;
}

// 4. Write a program to erase all the entries of the key.
#include <iostream>
#include <map>
using namespace std;
int main()
{
    multimap<int, int> m1;
    m1.insert(pair<int, int>(0, 100));
    m1.insert(pair<int, int>(1, 200));
    m1.insert(pair<int, int>(2, 300));

    m1.clear();

    if (m1.empty())
        cout << "Multimap is Empty" << endl;
    else
        cout << "Multimap is not Empty" << endl;
    return 0;
}

// 5. Write a program to erase only a single value based on position.
#include <iostream>
#include <map>
using namespace std;
int main()
{
    multimap<int, int> m1;
    m1.insert(pair<int, int>(0, 100));
    m1.insert(pair<int, int>(1, 200));
    m1.insert(pair<int, int>(2, 300));

    m1.erase(1);

    for (auto i : m1)
        cout << "Key = " << i.first << ", Value = " << i.second << endl;
    return 0;
}

// 6. Write a program to find some key value pairs and print on the console.
#include <iostream>
#include <map>
using namespace std;
int main()
{
    multimap<int, int> m;
    m.insert({0, 100});
    m.insert({1, 200});
    m.insert({2, 300});

    if (m.find(100) != m.end())
        cout << "Element Found";
    else
        cout << "404 not Found";
    return 0;
}

// 7. Write a program to find a lower bound.
#include <iostream>
#include <map>
using namespace std;
int main()
{
    multimap<int, int> m;
    m.insert({0, 100});
    m.insert({1, 200});
    m.insert({0, 200});
    m.insert({2, 300});
    m.insert({0, 150});
    m.insert({5, 150});

    auto it1 = m.lower_bound(0);
    cout << "Key = " << (*it1).first << ", Value = " << (*it1).second << endl;

    auto it2 = m.lower_bound(3);
    cout << "Key = " << (*it2).first << ", Value = " << (*it2).second << endl;

    auto it3 = m.lower_bound(13);
    cout << "Key = " << (*it3).first << ", Value = " << (*it3).second;
    return 0;
}

// 8. Write a program to find the upper bound.
#include <iostream>
#include <map>
using namespace std;
int main()
{
    multimap<int, int> m;
    m.insert({0, 100});
    m.insert({1, 200});
    m.insert({0, 200});
    m.insert({2, 300});
    m.insert({0, 150});
    m.insert({5, 150});

    auto it1 = m.upper_bound(0);
    cout << "Key = " << (*it1).first << ", Value = " << (*it1).second << endl;

    auto it2 = m.upper_bound(3);
    cout << "Key = " << (*it2).first << ", Value = " << (*it2).second << endl;

    auto it3 = m.upper_bound(13);
    cout << "Key = " << (*it3).first << ", Value = " << (*it3).second;
    return 0;
}

// 9. You are given an array A of size N. You need to insert the elements of A into a
// multimap(element as key and index as value) and display the results. Also, you need
// to erase a given element x from the multimap and print "erased x" if successfully
// erased, else print "not found".
#include <iostream>
#include <map>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    multimap<int, int> m;
    for (int i = 0; i < 5; i++)
        m.insert({arr[i], i});

    for (auto i : m)
        cout << "Key = " << i.first << ", Value = " << i.second << endl;

    m.erase(4);

    if (m.find(4) != m.end())
        cout << "\nElement Not Erased";
    else
        cout << "\nElement Erased";

    return 0;
}

// 10. Write a program that checks whether a given multimap is empty or not.
#include <iostream>
#include <map>
using namespace std;
int main()
{
    multimap<int, int> m;
    if (m.empty())
        cout << "Multimap is Empty";
    else
        cout << "Multimap is not Empty";

    return 0;
}
