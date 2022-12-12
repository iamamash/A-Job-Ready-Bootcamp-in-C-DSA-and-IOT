// 1. Create a stack of int type, push 5 elements in it and print it on the console screen.
#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    return 0;
}

// 2. Create a stack of int type, and find the top most element in a stack.
#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    cout << s.top() << " ";
    return 0;
}

// 3. Create a stack, and implement main operations like push(), pop(), peek(), empty()
// and size().
#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    istringstream name("AMASH");
    cout << "Stack Size is : " << s.size() << endl;
    cout << "Peek Value is : " << name.peek() << endl;
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    return 0;
}

// 4. Reverse the Words of a String using Stack.
// Example:
// Input: str = “I Love To Code”
// Output: Code To Love I
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str = "AMASH";
    stack<char> s;
    for (int i = 0; str[i]; i++)
        s.push(str[i]);
    while (!s.empty())
    {
        cout << s.top();
        s.pop();
    }
    return 0;
}

// 5. Create stack1 of int type, and create another stack of the same type with name
// stack2 and copy all the elements of stack1 into stack2 in the same order.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> s1, s2;
    s1.push(1);
    s1.push(2);
    s1.push(3);
    s1.push(4);
    s1.push(5);
    s2 = s1;

    cout << "S1 = ";
    while (!s1.empty())
    {
        cout << s1.top() << " ";
        s1.pop();
    }

    cout << "\nS2 = ";
    while (!s2.empty())
    {
        cout << s2.top() << " ";
        s2.pop();
    }
    return 0;
}

// 6. Reverse a string using a stack.
// Example:
// Input: str = "Reverse me"
// Output: em esreveR
#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack<char> s;
    string str = "Reverse me";
    for (int i = 0; str[i]; i++)
        s.push(str[i]);

    while (!s.empty())
    {
        cout << s.top();
        s.pop();
    }
    return 0;
}

// 7. Create a stack of int type and sort it.
#include <iostream>
#include <stack>
#include <vector>
using namespace std;
int main()
{
    vector<int> v{99, 2, -1, 0};
    stack<int> s;
    int value;

    while (!v.empty())
    {
        value = v.back();
        v.pop_back();
        if (!s.empty() && s.top() < value)
        {
            while (!s.empty() && s.top() < value)
            {
                v.push_back(s.top());
                s.pop();
            }
            s.push(value);
        }
        else
            s.push(value);
    }

    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    return 0;
}

// 8. Create a stack of int type and sort it in descending order.
#include <iostream>
#include <stack>
#include <vector>
using namespace std;
int main()
{
    vector<int> v{-99, 0, 99, 2};
    stack<int> s;
    int value;

    while (!v.empty())
    {
        value = v.back();
        v.pop_back();
        if (!s.empty() && s.top() > value)
        {
            while (!s.empty() && s.top() > value)
            {
                v.push_back(s.top());
                s.pop();
            }
            s.push(value);
        }
        else
            s.push(value);
    }

    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    return 0;
}

// 9. Create back button functionality using stack.
#include <iostream>
#include <stack>
using namespace std;
string currentUrl = " ";
stack<string> backwardStack, forwardStack;

void visitUrl(string url)
{
    if (currentUrl != " ")
        backwardStack.push(currentUrl);
    currentUrl = url;
}

void forward()
{
    if (forwardStack.empty() || currentUrl == forwardStack.top())
        cout << "Not Available" << endl;
    else
    {
        backwardStack.push(currentUrl);
        currentUrl = forwardStack.top();
        forwardStack.pop();
    }
}

void backward()
{
    if (backwardStack.empty() || currentUrl == backwardStack.top())
        cout << "Not Available" << endl;
    else
    {
        forwardStack.push(currentUrl);
        currentUrl = backwardStack.top();
        backwardStack.pop();
    }
}

void show()
{
    cout << "Current -> " << currentUrl << endl;
    cout << "Backward -> " << backwardStack.top() << endl;
}

int main()
{
    visitUrl("google.com");
    visitUrl("fb.com");
    visitUrl("youtube.com");
    visitUrl("ineuron.ai");
    show();

    return 0;
}

// 10. Given an array, print the Next Greater Element (NGE) for every element using stack.
// Example:
// Input: arr[] = [ 4 , 5 , 2 , 25 ]
// Output: 4 –> 5
// 5 –> 25
// 2 –> 25
// 25 –> -1
#include <iostream>
#include <stack>
using namespace std;
int main()
{
    int arr[] = {11, 13, 21, 3};
    stack<int> s;

    for (int i = 0; i < 4; i++)
    {
        if (s.empty())
        {
            s.push(arr[i]);
            continue;
        }

        while (!s.empty() && s.top() < arr[i])
        {
            cout << s.top() << " -> " << arr[i] << endl;
            s.pop();
        }

        s.push(arr[i]);
    }

    if (!s.empty())
        while (!s.empty())
        {
            cout << s.top() << " -> " << -1 << endl;
            s.pop();
        }

    return 0;
}
