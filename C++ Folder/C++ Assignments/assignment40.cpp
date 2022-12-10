// 1. Inserts an element. And returns an iterator that points to the first of the newly inserted
// elements.
#include <iostream>
#include <deque>
#include <iterator>
using namespace std;
int main()
{
    deque<int> d;
    d.push_back(1);
    d.push_back(2);
    d.push_back(3);
    d.push_back(4);

    deque<int>::iterator i;
    for (i = d.begin(); i != d.end(); i++)
        cout << *i << " ";
    return 0;
}

// 2. Returns a reverse iterator which points to the last element of the deque (i.e., its
// reverse beginning).
#include <iostream>
#include <deque>
#include <iterator>
using namespace std;
int main()
{
    deque<int> d;
    d.push_back(1);
    d.push_back(2);
    d.push_back(3);
    d.push_back(4);

    for (auto i = d.rbegin(); i != d.rend(); i++)
        cout << *i << " ";
    return 0;
}

// 3. Returns a reverse iterator which points to the position before the beginning of the
// deque (which is considered its reverse end).
#include <iostream>
#include <deque>
#include <iterator>
using namespace std;
int main()
{
    deque<int> d;
    d.push_back(1);
    d.push_back(2);
    d.push_back(3);
    d.push_back(4);

    for (auto i = d.rbegin(); i != d.rend(); i++)
        cout << *i << " ";
    return 0;
}

// 4. Returns a constant iterator pointing to the first element of the container, that is, the
// iterator cannot be used to modify, only traverse the deque.
#include <iostream>
#include <deque>
#include <iterator>
using namespace std;
int main()
{
    deque<int> d;
    d.push_back(1);
    d.push_back(2);
    d.push_back(3);
    d.push_back(4);

    for (auto i = d.begin(); i != d.end(); i++)
        cout << *i << " ";
    return 0;
}

// 5. Returns the maximum number of elements that a deque container can hold.
#include <iostream>
#include <deque>
using namespace std;
int main()
{
    deque<int> d;

    cout << "Deque can hold a maximum of " << d.max_size() << " elements.";
    return 0;
}

// 6. Assign values to the same or different deque container.
#include <iostream>
#include <deque>
#include <iterator>
using namespace std;
int main()
{
    deque<int> d{1, 2, 3, 4};
    d.push_front(8);
    d.push_front(9);
    d.push_front(10);

    deque<int>::iterator i;
    for (i = d.begin(); i != d.end(); i++)
        cout << *i << " ";
    return 0;
}

// 7. Return a first element and last element of the deque container.
#include <iostream>
#include <deque>
using namespace std;
int main()
{
    deque<int> d{1, 2, 3, 4};
    cout << "First Element of the container is : " << d.front() << endl;
    cout << "Last Element of the container is : " << d.back();
    return 0;
}

// 8. Remove elements from a container from the specified position or range in deque.
#include <iostream>
#include <deque>
using namespace std;
int main()
{
    deque<int> d{1, 2, 3, 4};
    d.erase(d.begin() + 1, d.end() - 1);

    for (int i : d)
        cout << i << " ";
    return 0;
}

// 9. Generate a permutation of first N natural numbers having count of unique adjacent
// differences equal to K | Set 2 using queue.
#include <iostream>
#include <deque>
#include <cmath>
using namespace std;
int main()
{
    int n, k, value;
    deque<int> d;

    cout << "Enter the Total Number of Values : ";
    cin >> n;
    cout << "Enter the Number of Unique Adjacent Differences you Want : ";
    cin >> k;

    cout << "Enter " << n << " Values : ";
    while (n--)
    {
        cin >> value;
        d.push_front(value);
    }

    while (k)
    {
        cout << abs(d.back() - d.front()) << " ";
        k--;
        if (k % 2 == 0)
            d.pop_back();
        else
            d.pop_front();
    }
    return 0;
}

// 10. Check if given Strings can be made equal by inserting another String using deque.
#include <iostream>
#include <deque>
using namespace std;
int main()
{
    deque<char> s1{'m', 'y', ' ', 'n', 'a', 'm', 'e', ' ', 'i', 's', ' ', 'A', 'm', 'a', 's', 'h'};
    deque<char> s2{'m', 'y', ' ', 'A', 'm', 'a', 's', 'h'};
    int rear = s2.size(), front = 0, size = s2.size();

    while (rear > front && size != 0)
    {
        size--;
        if (s1.front() == s2.front())
        {
            s2.pop_front();
            s1.pop_front();
            front++;
        }
        if (s1.back() == s2.back())
        {
            s2.pop_back();
            s1.pop_back();
            rear--;
        }
    }

    if (s2.empty())
        while (!s1.empty())
        {
            cout << s1.front();
            s1.pop_front();
        }

    else
        cout << "Strings Can't Be Made Equal By Inserting Another String" << endl;

    return 0;
}

// 11. How to get the first and last elements of Deque in c++ ?
#include <iostream>
#include <deque>
using namespace std;
int main()
{
    deque<int> d{1, 2, 3, 4};
    cout << "Front Element is : " << d.front() << endl;
    cout << "Last Element is : " << d.back();
    return 0;
}

// 12. Given a string S containing letters and ‘#‘. The ‘#” represents a backspace. The task
// is to print the new string without ‘#‘.
#include <iostream>
#include <stack>
using namespace std;
int main()
{
    string s1 = "abc#de#f#ghi#jklmn#op#", s2;
    stack<char> st;

    for (int i = 0; s1[i]; i++)
        if (s1[i] == '#')
        {
            if (!st.empty())
                st.pop();
        }
        else
            st.push(s1[i]);

    while (!st.empty())
    {
        s2 += st.top();
        st.pop();
    }

    for (int i = s2.size(); i >= 0; i--)
        cout << s2[i];

    return 0;
}

// 13. String after processing backspace characters using deque
// Examples:
// Input : S = "abc#de#f#ghi#jklmn#op#"
// Output : abdghjklmo
// Input : S = "##MySirG##Education##hub#"
// Output : MysiEducatihu
#include <iostream>
#include <deque>
using namespace std;
int main()
{
    string s = "##MySirG##Education##hub#";
    deque<char> d;

    for (int i = 0; s[i]; i++)
        if (s[i] == '#')
        {
            if (!d.empty())
                d.pop_back();
        }
        else
            d.push_back(s[i]);

    while (!d.empty())
    {
        cout << d.front();
        d.pop_front();
    }
    return 0;
}

// 14. Segregate even and odd nodes in a Linked List using Deque.
#include <iostream>
#include <deque>
using namespace std;
int main()
{
    deque<int> d{1, 2, 3, 4}, even, odd;
    for (int i = 0; i < 4; i++)
    {
        if (i % 2 == 0)
            even.push_back(d[i]);
        else
            odd.push_back(d[i]);
    }
    cout << "Even Nodes are : ";
    for (int i : even)
        cout << i << " ";
    cout << "\nOdd Nodes are : ";
    for (int i : odd)
        cout << i << " ";
    return 0;
}
