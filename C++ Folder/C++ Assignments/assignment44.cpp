// 1. Find the total number of elements of the set container.
#include <iostream>
#include <set>
using namespace std;
int main()
{
    set<int> s{1, 2, 3, 4};
    cout << s.size();
    return 0;
}

// 2. Using inbuilt function and insert an element to the set container.
#include <iostream>
#include <set>
using namespace std;
int main()
{
    set<int> s;
    s.insert(10);
    s.insert(1);
    s.insert(2);
    s.insert(3);

    for (auto i = s.begin(); i != s.end(); i++)
        cout << *i << " ";
    return 0;
}

// 3. Erase an element from a set.
#include <iostream>
#include <set>
using namespace std;
int main()
{
    set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);

    s.erase(2);
    for (auto i = s.begin(); i != s.end(); i++)
        cout << *i << " ";
    return 0;
}

// 4. Check whether the set is empty or not.if it is empty insert 5 elements in the set
#include <iostream>
#include <set>
using namespace std;
int main()
{
    set<int> s;
    if (s.empty())
    {
        s.insert(1);
        s.insert(2);
        s.insert(3);
        s.insert(4);
        s.insert(5);
    }
    for (auto i = s.begin(); i != s.end(); i++)
        cout << *i << " ";
    return 0;
}

// 5. Make a c++ program to insert unique element in set.
#include <iostream>
#include <set>
using namespace std;
int main()
{
    set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(2);
    s.insert(3);
    s.insert(3);

    for (auto i = s.begin(); i != s.end(); i++)
        cout << *i << " ";
    return 0;
}

// 6. How to find the lower bound of any desired element from the set.
#include <iostream>
#include <set>
using namespace std;
int main()
{
    set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(2);
    s.insert(3);

    cout << *s.lower_bound(2);
    return 0;
}

// 7. how to find the upper bound of any desired element from the set.
#include <iostream>
#include <set>
using namespace std;
int main()
{
    set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(2);
    s.insert(3);

    cout << *s.upper_bound(3);
    return 0;
}

// 8. Create a function to search the element in the set.
#include <iostream>
#include <set>
using namespace std;
int main()
{
    set<int> s;
    s.insert(3);

    if (s.find(13) != s.end())
        cout << "Element Found" << endl;
    else
        cout << "Element Not Found !!" << endl;
    return 0;
}

// 9. Converting String into Set in C++ STL.
#include <iostream>
#include <set>
using namespace std;
int main()
{
    set<char> s;
    string str = "Amash";

    for (int i = 0; str[i]; i++)
        s.insert(str[i]);
    for (auto i = s.begin(); i != s.end(); i++)
        cout << *i << " ";
    return 0;
}

// 10. You have a set of integer s, which originally contains all the numbers from 1 to n.
// Unfortunately, due to some error, one of the numbers in s got duplicated to another
// number in the set, which results in repetition of one number and loss of another
// number.You are given an integer array nums representing the data status of this set
// after the error.Find the number that occurs twice and the number that is missing and
// return them in the form of an array.
#include <iostream>
#include <set>
using namespace std;
int main()
{
    set<int> s;
    int nums[] = {5, 2, 3, 4, 5};

    for (int i = 0; i < 5; i++)
        for (int j = i + 1; j < 5; j++)
            if (nums[i] == nums[j])
                nums[j]++;

    for (int i = 0; i < 5; i++)
        s.insert(nums[i]);

    for (auto i = s.begin(); i != s.end(); i++)
        cout << *i << " ";

    return 0;
}
