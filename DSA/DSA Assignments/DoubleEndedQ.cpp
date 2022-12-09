#include <iostream>
using namespace std;
class Queue
{
    int q[100];
    int front, rear, size;

public:
    Queue()
    {
        front = -1;
        rear = -1;
        size = 100;
    }

    void insertAtBegin(int v)
    {
        if (rear == size - 1)
            cout << "Queue Overflow" << endl;
        else if (rear == -1)
        {
            q[++rear] = v;
            front++;
        }
        else
        {
            for (int i = rear; i >= front; i--)
                q[i + 1] = q[i];
            q[front] = v;
            rear++;
        }
    }

    void insertAtEnd(int v)
    {
        if (rear == size - 1)
            cout << "Queue Overflow" << endl;
        else if (rear == -1)
        {
            q[++rear] = v;
            front++;
        }
        else
            q[++rear] = v;
    }

    void deletionAtFront()
    {
        if (rear == -1)
            cout << "Queue Underflow" << endl;
        else if (front == rear)
        {
            cout << q[front] << " deleted" << endl;
            front = rear = -1;
        }
        else
            cout << q[front++] << " deleted" << endl;
    }

    void deletionAtEnd()
    {
        if (rear == -1)
            cout << "Queue Underflow" << endl;
        else if (front == rear)
        {
            cout << q[front] << " deleted" << endl;
            front = rear = -1;
        }
        else
            cout << q[rear--] << " deleted" << endl;
    }

    void search(int v)
    {
        if (rear == -1)
        {
            cout << "Queue is Empty" << endl;
            return;
        }
        int count = 0;
        for (int i = front; i <= rear; i++)
        {
            if (q[i] == v)
            {
                cout << "Value fount at index " << count << endl;
                return;
            }
            count++;
        }
        cout << "Value doesn't exist" << endl;
    }

    void print()
    {
        if (rear == -1)
            cout << "Queue is Empty" << endl;
        else
            for (int i = front; i <= rear; i++)
                cout << q[i] << " ";
    }
};

int main()
{
    Queue q;
    int choice, e, n;

    system("cls");
    while (choice != 7)
    {
        cout << "\n\n1. Insert At Begin" << endl;
        cout << "2. Insert At End" << endl;
        cout << "3. Delete From Begin" << endl;
        cout << "4. Delete From End" << endl;
        cout << "5. Search" << endl;
        cout << "6. Print" << endl;
        cout << "7. Exit" << endl;
        cout << "Enter your choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter an Element : ";
            cin >> e;
            q.insertAtBegin(e);
            break;

        case 2:
            cout << "Enter an Element : ";
            cin >> e;
            q.insertAtEnd(e);
            break;

        case 3:
            q.deletionAtFront();
            break;

        case 4:
            q.deletionAtEnd();
            break;

        case 5:
            cout << "Enter the Element : ";
            cin >> e;
            q.search(e);
            break;

        case 6:
            q.print();
            break;

        case 7:
            exit(0);

        default:
            break;
        }
    }

    return 0;
}
