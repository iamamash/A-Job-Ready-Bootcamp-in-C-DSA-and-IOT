#include <iostream>
using namespace std;
class Stack
{
private:
    int s[100];
    int top;

public:
    Stack()
    {
        top = -1;
    }

    ~Stack()
    {
        top = -1;
    }

    void push(int value)
    {
        if (isFullStack())
        {
            cout << "Stack Overflow" << endl;
            return;
        }
        top++;
        s[top] = value;
    }

    void pop()
    {
        if (isEmptyStack())
        {
            cout << "Stack Underflow" << endl;
            return;
        }
        cout << s[top] << " deleted" << endl;
        top--;
    }

    int isEmptyStack()
    {
        if (top == -1)
            return 1;
        else
            return 0;
    }

    int isFullStack()
    {
        if (top == 99)
            return 1;
        else
            return 0;
    }

    int Top()
    {
        if (isEmptyStack())
        {
            cout << "Stack is Empty" << endl;
            return 0;
        }
        return s[top];
    }

    int size()
    {
        return top + 1;
    }
};

int main()
{
    Stack s;
    int choice;

    system("cls");
    while (choice != 5)
    {
        cout << "\n\n1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Top" << endl;
        cout << "4. Size" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice : ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            int element;
            cout << "Enter an Element : ";
            cin >> element;
            s.push(element);
            break;

        case 2:
            s.pop();
            break;

        case 3:
            cout << "Topmost Element is : " << s.Top() << endl;
            break;

        case 4:
            cout << "Size of Stack is : " << s.size() << endl;
            break;

        case 5:
            exit(0);

        default:
            break;
        }
    }

    return 0;
}

// Problem => Design a stack such that GetMinimum( ) should be O(1)?
#include <iostream>
using namespace std;
class STACK
{
private:
    int s[100], min[100];
    int top;

public:
    STACK()
    {
        top = -1;
    }

    ~STACK()
    {
        top = -1;
    }

    void push(int value)
    {
        if (isFullStack())
        {
            cout << "Stack Overflow" << endl;
            return;
        }

        top++;
        s[top] = value;

        if (top == 0)
            min[top] = value;
        else if (min[top - 1] > value)
            min[top] = value;
        else
            min[top] = min[top - 1];
    }

    void pop()
    {
        if (isEmptyStack())
        {
            cout << "Stack Underflow" << endl;
            return;
        }
        cout << s[top] << " deleted" << endl;
        top--;
    }

    int isEmptyStack()
    {
        if (top == -1)
            return 1;
        else
            return 0;
    }

    int isFullStack()
    {
        if (top == 99)
            return 1;
        else
            return 0;
    }

    int Top()
    {
        if (isEmptyStack())
        {
            cout << "Stack is Empty" << endl;
            return 0;
        }
        return s[top];
    }

    int size()
    {
        return top + 1;
    }

    void minimum()
    {
        if (top == -1)
            cout << "Stack is Empty" << endl;
        else
            cout << "Minimum Element is : " << min[top] << endl;
    }
};

int main()
{
    STACK s;
    int choice;

    system("cls");
    while (choice != 4)
    {
        cout << "\n\n1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Minimum Value" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice : ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            int element;
            cout << "Enter an Element : ";
            cin >> element;
            s.push(element);
            break;

        case 2:
            s.pop();
            break;

        case 3:
            s.minimum();
            break;

        case 4:
            exit(0);

        default:
            break;
        }
    }

    return 0;
}
