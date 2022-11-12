// 1. Create a c++ program using multiset and returns an iterator to the first element in
// the multiset –> O(1)
#include <iostream>
#include <set>
using namespace std;
int main()
{
    multiset<int> m{1, 2};
    auto i = m.begin();
    cout << *i;
    return 0;
}

// 2. Create a c++ program using multiset and returns an iterator to the theoretical
// element that follows the last element in the multiset –> O(1)
#include <iostream>
#include <set>
using namespace std;
int main()
{
    multiset<int> m{1, 2};
    auto i = m.end();
    cout << *i;
    return 0;
}

// 3. Create a c++ program using multiset and returns the number of elements in the
// multiset –> O(1)
#include <iostream>
#include <set>
using namespace std;
int main()
{
    multiset<int> m{1, 2};
    cout << "The Number of Elements in the Multiset are : " << m.size();
    return 0;
}

// 4. Create a c++ program using multiset and returns the maximum number of elements
// that the multiset can hold –> O(1)
#include <iostream>
#include <set>
using namespace std;
int main()
{
    multiset<int> m{1, 2};
    cout << "The Maximum Number of Elements that Multiset can Hold : " << m.max_size();
    return 0;
}

// 5. Create a c++ program using multiset and returns whether the multiset is empty –>
// O(1)
#include <iostream>
#include <set>
using namespace std;
int main()
{
    multiset<int> m;
    if (m.empty())
        cout << "Multiset is Empty";
    else
        cout << "Multiset is not Empty";
    return 0;
}

// 6. Create a c++ program using multiset and inserts the element x in the multiset –>
// O(log n)
#include <iostream>
#include <set>
using namespace std;
int main()
{
    multiset<int> m;
    m.insert(10);
    m.insert(1);
    m.insert(2);
    m.insert(3);

    for (auto i = m.begin(); i != m.end(); i++)
        cout << *i << " ";

    return 0;
}

// 7. Create a c++ program using multiset and removes all the elements from the multiset
// –> O(n)
#include <iostream>
#include <set>
using namespace std;
int main()
{
    multiset<int> m{1, 2};
    m.clear();
    auto i = m.begin();
    cout << *i;
    return 0;
}

// 8. Create a c++ program using multiset and removes all the occurrences of x –> O(log
// n)
#include <iostream>
#include <set>
using namespace std;
int main()
{
    multiset<int> m{1, 2, 1};
    m.erase(1);

    for (auto i = m.begin(); i != m.end(); i++)
        cout << *i << " ";

    return 0;
}

// 9. Create a c++ program using multiset and remove only one instance of element from
// multiset having same value
#include <bits/stdc++.h>
#include <set>
using namespace std;
int main()
{
    int arr[] = {1, 2, 1, 1}, count = 0;
    multiset<int> m;
    for (int i = 0; i < 4; i++)
    {
        for (int j = i + 1; j < 4; j++)
            if (arr[i] == arr[j])
            {
                arr[j] = INT_MAX;
                count = 1;
                break;
            }
        if (count == 1)
            break;
    }

    for (int i = 0; i < 4; i++)
        if (arr[i] != INT_MAX)
            m.insert(arr[i]);

    for (auto i = m.begin(); i != m.end(); i++)
        cout << *i << " ";

    return 0;
}

// 10. Unlike a set, a multiset may contain multiple occurrences of same number. The
// multiset equivalence problem states to check if two given multisets are equal or not.
// For example let A = {1, 2, 3} and B = {1, 1, 2, 3}. Here A is set but B is not (1 occurs
// twice in B), whereas A and B are both multisets. More formally, “Are the sets of pairs
// defined as \(A' = \{ (a, frequency(a)) | a \in \mathbf{A} \}\) equal for the two given
// multisets?” Given two multisets A and B, write a program to check if the two multisets
// are equal.
#include <iostream>
#include <set>
using namespace std;
int main()
{
    multiset<int> m1{1, 2, 3, 4}, m2{1, 2, 2, 4};
    if (m1 == m2)
        cout << "Multisets are Equal";
    else
        cout << "Multisets are not Equal";
    return 0;
}
