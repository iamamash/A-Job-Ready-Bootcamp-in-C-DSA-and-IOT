#include <iostream>
using namespace std;
class Node
{
public:
    int value;
    Node *next;

    Node()
    {
        next = NULL;
    }
};

class CSLL
{
private:
    Node *head;
    int size;

public:
    CSLL()
    {
        head = NULL;
        size = 0;
    }

    void insertAtEnd(int v)
    {
        size++;
        Node *temp = new Node();
        temp->value = v;

        if (head == NULL)
        {
            head = temp;
            temp->next = head;
        }
        else
        {
            Node *t = head;
            while (t->next != head)
                t = t->next;
            temp->next = head;
            t->next = temp;
        }
    }

    void insertAtBegin(int v)
    {
        size++;
        Node *temp = new Node();
        temp->value = v;
        if (head == NULL)
        {
            head = temp;
            temp->next = head;
        }
        else
        {
            Node *t = head;
            temp->next = head;
            while (t->next != head)
                t = t->next;
            t->next = temp;
            head = temp;
        }
    }

    void insertAtMiddle(int n, int v)
    {
        Node *temp = new Node();
        temp->value = v;
        if (head == NULL)
        {
            size++;
            head = temp;
            temp->next = head;
            return;
        }
        else if (n > size || n < 1)
        {
            cout << "Position dosn't exist" << endl;
            return;
        }

        size++;
        Node *t = head;
        if (n == 1)
        {
            temp->next = head;
            while (t->next != head)
                t = t->next;
            t->next = temp;
            head = temp;
        }
        else
        {
            n--;
            while (n > 1)
            {
                --n;
                t = t->next;
            }
            temp->next = t->next;
            t->next = temp;
        }
    }

    void Delete(int n)
    {
        if (n < 1 || n > size)
        {
            cout << "Position doesn't exist" << endl;
            return;
        }

        Node *temp = head;
        if (n == 1)
        {
            size--;
            Node *t = head;
            if (temp->next == head)
                head = NULL;
            else
            {
                while (t->next != head)
                    t = t->next;
                head = temp->next;
                t->next = head;
            }
            delete temp;
            return;
        }
        else if (n == size)
        {
            --size;
            n--;
            while (n > 1)
            {
                n--;
                temp = temp->next;
            }
            delete temp->next;
            temp->next = head;
            return;
        }

        size--;
        n--;
        while (n > 1)
        {
            n--;
            temp = temp->next;
        }
        Node *t = temp->next;
        temp->next = temp->next->next;
        delete t;
    }

    void search(int v)
    {
        Node *temp = head;
        int count = 0;
        while (temp->next != head)
        {
            count++;
            if (temp->value == v)
            {
                cout << "Element found at index " << count << endl;
                return;
            }
            temp = temp->next;
        }
        if (temp->value == v)
        {
            cout << "Element found at index " << ++count << endl;
            return;
        }
        cout << "Element Not Found" << endl;
    }

    void print()
    {
        if (head == NULL)
        {
            cout << "List is Empty" << endl;
            return;
        }
        Node *temp = head;
        while (temp->next != head)
        {
            cout << temp->value;
            if (temp->next != head)
                cout << " -> ";
            temp = temp->next;
        }
        cout << temp->value;
        cout << "\nSize = " << size << endl;
    }
};

int main()
{
    CSLL l;

    int choice, e, n;
    system("cls");

    while (choice != 7)
    {
        cout << "\n\n1. Insert At Begin" << endl;
        cout << "2. Insert At Middle" << endl;
        cout << "3. Insert At End" << endl;
        cout << "4. Delete" << endl;
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
            l.insertAtBegin(e);
            break;

        case 2:
            cout << "Enter the Position at Which you Want to Insert a Node : ";
            cin >> n;
            cout << "Enter an Element : ";
            cin >> e;
            l.insertAtMiddle(n, e);
            break;

        case 3:
            cout << "Enter an Element : ";
            cin >> e;
            l.insertAtEnd(e);
            break;

        case 4:
            cout << "Enter the Position of Node you want to Delete : ";
            cin >> n;
            l.Delete(n);
            break;

        case 5:
            cout << "Enter the Element : ";
            cin >> e;
            l.search(e);
            break;

        case 6:
            l.print();
            break;

        case 7:
            exit(0);

        default:
            break;
        }
    }

    return 0;
}
