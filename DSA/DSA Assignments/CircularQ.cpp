#include <iostream>
using namespace std;
class Queue
{
    int q[3];
    int front, rear, size;

public:
    Queue()
    {
        front = -1;
        rear = -1;
        size = 3;
    }

    void enqueue(int v)
    {
        if (rear == -1)
        {
            q[++rear] = v;
            front++;
        }
        else if ((rear + 1) % size != front)
        {
            rear = ++rear % size;
            q[rear] = v;
        }
        else
            cout << "Queue Overflow" << endl;
    }

    void dequeue()
    {
        if (front == -1)
            cout << "Queue Underflow" << endl;
        else if (front == rear)
        {
            cout << q[front] << " deleted" << endl;
            front = rear = -1;
        }
        else
        {
            cout << q[front] << " deleted" << endl;
            front = (front + 1) % size;
        }
    }

    void search(int v)
    {
        if (rear == -1)
        {
            cout << "Queue is Empty" << endl;
            return;
        }
        int i = front, count = 0;
        while (1)
        {
            count++;
            if (q[i] == v)
            {
                cout << "Value fount at index " << count << endl;
                return;
            }
            else if (i == rear)
                break;
            i = (i + 1) % size;
        }
        cout << "Value doesn't exist" << endl;
    }

    void print()
    {
        if (rear == -1)
            cout << "Queue is Empty" << endl;
        else
        {
            int i = front;
            while (1)
            {
                cout << q[i] << " ";
                if (i == rear)
                    break;
                i = (i + 1) % size;
            }
        }
    }
};

int main()
{
    Queue q;
    int choice, e, n;

    system("cls");
    while (1)
    {
        cout << "\n\n1. Insert a Value" << endl;
        cout << "2. Delete a Value" << endl;
        cout << "3. Search" << endl;
        cout << "4. Print" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter an Element : ";
            cin >> e;
            q.enqueue(e);
            break;

        case 2:
            q.dequeue();
            break;

        case 3:
            cout << "Enter an Element : ";
            cin >> e;
            q.search(e);
            break;

        case 4:
            q.print();
            break;

        case 5:
            exit(0);

        default:
            break;
        }
    }

    return 0;
}
