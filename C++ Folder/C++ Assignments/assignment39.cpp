// 1. Write a c++ code, to demonstrate the forward list.
#include <iostream>
#include <forward_list>
using namespace std;
int main()
{
    forward_list<int> fl{1, 2, 3, 4, 5};
    if (!fl.empty())
        cout << "List is Not Empty";
    else
        cout << "List is Empty";
    return 0;
}

// 2. Write a c++ code, in which create a forward list and assign values to it at the time of
// initialization and print it on the console screen.
#include <iostream>
#include <forward_list>
using namespace std;
int main()
{
    forward_list<int> fl{1, 2, 3, 4, 5};
    for (int i : fl)
        cout << i << " ";
    return 0;
}

// 3. Create a forward list insert elements from 1 to 10 and find the sum of elements.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    forward_list<int> fl{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << "Sum of Elements is : " << accumulate(fl.begin(), fl.end(), 0);
    return 0;
}

// 4. Write a program to reverse forward list elements.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    forward_list<int> fl{1, 2, 3, 4, 5};
    fl.reverse();
    for (int i : fl)
        cout << i << " ";
    return 0;
}

// 5. Write a program remove all consecutive duplicate elements from the forward list.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    forward_list<int> fl{1, 1, 3, 4, 5, 6, 5, 3, 3};
    fl.unique();
    for (int i : fl)
        cout << i << " ";
    return 0;
}

// 6. Create two forward lists of int type, and merge them.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    forward_list<int> fl1{1, 2, 3, 4, 5}, fl2{6, 7, 8, 9};
    fl1.merge(fl2);
    for (int i : fl1)
        cout << i << " ";
    return 0;
}

// 7. Below are two forward lists, first sort them and then merge them.
// forwardlist1={3,2,9}
// forwardlist2={8,1,2}
#include <bits/stdc++.h>
using namespace std;
int main()
{
    forward_list<int> fl{3, 2, 9}, f2{8, 1, 2};
    fl.sort();
    f2.sort();
    f2.merge(fl);
    for (int i : f2)
        cout << i << " ";
    return 0;
}

// 8. Create two forward lists of int type, and swap the elements of both forward lists with
// each other.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    forward_list<int> fl{3, 2, 9}, f2{8, 1, 2};
    fl.swap(f2);
    cout << "fl : ";
    for (int i : fl)
        cout << i << " ";

    cout << endl
         << "f2 : ";
    for (int i : f2)
        cout << i << " ";
    return 0;
}

// 9. Write a C++ code to demonstrate working of splice_after() in forward list.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    forward_list<int> fl{1, 2, 3, 4, 5}, fl2{7, 22, 23, 24, 8};
    fl2.splice_after(fl2.begin(), fl, fl.begin(), fl.end());

    for (int i : fl2)
        cout << i << " ";
    return 0;
}

// 10. Write a program to assign values in forward_list using the values of another list.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    forward_list<int> fl{1, 2, 3, 4, 5};
    forward_list<int> fl2(fl.begin(), fl.end());

    for (int i : fl2)
        cout << i << " ";
    return 0;
}
