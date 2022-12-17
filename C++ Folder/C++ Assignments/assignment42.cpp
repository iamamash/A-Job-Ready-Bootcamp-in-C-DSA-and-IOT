// 1. Print all elements of a queue in C++ STL
#include <iostream>
#include <queue>
using namespace std;
int main()
{
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    return 0;
}

// 2. Create a railways ticket counter and allot ticket to first come first take using c++ STL
#include <iostream>
#include <queue>
using namespace std;
class Ticket
{
public:
    string passenger;
    int tnumber;
};

int main()
{
    queue<Ticket> q;
    Ticket t;
    int size;
    cout << "How Many Tickets You Want to Allot : ";
    cin >> size;

    while (size--)
    {
        cout << "Enter Passenger Name : ";
        cin >> t.passenger;
        cout << "Enter Ticket Number : ";
        cin >> t.tnumber;

        q.push(t);
    }

    while (!q.empty())
    {
        cout << "________________________________________________" << endl;
        cout << "Passenger Name     :       " << q.front().passenger << endl;

        cout << "Ticket Number      :       " << q.front().tnumber << endl;
        cout << "________________________________________________" << endl;

        q.pop();
    }

    return 0;
}

// 3. Check if a queue is empty or not using queue::size() function
#include <iostream>
#include <queue>
using namespace std;
int main()
{
    queue<int> q;
    if (q.size())
        cout << "Queue is not Empty";
    else
        cout << "Queue is Empty";
    return 0;
}

// 4. Manage a queue for multiple input and store in ascending order of his first character.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    queue<string> q;
    string s;
    int choice = 1;

    while (choice)
    {
        cout << "Enter a Word : ";
        cin >> s;

        q.push(s);
        cout << "Press 1 if you want to enter more words & 0 if not : ";
        cin >> choice;
    }

    int size = q.size();
    string arr[size];
    for (int i = 0; i < size; i++)
    {
        arr[i] = q.front();
        q.pop();
    }

    sort(arr, arr + size);

    for (int i = 0; i < size; i++)
        q.push(arr[i]);

    while (!q.empty())
    {
        cout << q.front() << endl;
        q.pop();
    }

    return 0;
}

// 5. Schedule an interview by using applicant's reaching time using c++ STL.
#include <iostream>
#include <queue>
using namespace std;
int main()
{
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    int i = 1;
    while (!q.empty())
    {
        cout << "Applicant " << i << " comes at " << q.front() << " pm" << endl;
        q.pop();
        ++i;
    }
    return 0;
}

// 6. In C++ STL, Queue is a type of container that follows FIFO (First-in-First-Out)
// elements arrangement i.e. the elements which insert first will be removed first. In the
// queue, elements are inserted at one end known as "back" and are deleted from
// another end known as "front".empty() and size() function of the queue with the
// Example.
#include <iostream>
#include <queue>
using namespace std;
int main()
{
    queue<int> q;
    cout << "Queue size is : " << q.size() << endl;
    if (q.size())
        cout << "Queue is not Empty" << endl;
    else
        cout << "Queue is Empty" << endl;
    return 0;
}

// 7. Exchange the contents of two queues but the queues must be of the same data type,
// although sizes may differ.
#include <iostream>
#include <queue>
using namespace std;
int main()
{
    queue<int> q1, q2;
    q1.push(1);
    q1.push(2);
    q1.push(3);

    q2.push(4);
    q2.push(5);
    q2.push(6);
    q2.push(7);

    q1.swap(q2);

    cout << "q1 = ";
    while (!q1.empty())
    {
        cout << q1.front() << " ";
        q1.pop();
    }

    cout << "\nq2 = ";
    while (!q2.empty())
    {
        cout << q2.front() << " ";
        q2.pop();
    }
    return 0;
}

// 8. Insert a new element into the queue container, the new element is added to the end
// of the queue
#include <iostream>
#include <queue>
using namespace std;
int main()
{
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.emplace(4);

    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    return 0;
}

// 9. Add the element ‘g’ at the end of the queue.
#include <iostream>
#include <queue>
using namespace std;
int main()
{
    queue<char> q;
    q.push('d');
    q.push('e');
    q.push('f');
    q.emplace('g');

    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    return 0;
}

// 10. Delete the first element of the queue.
#include <iostream>
#include <queue>
using namespace std;
int main()
{
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.pop();

    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    return 0;
}
