#include <iostream>
using namespace std;
class Node
{
public:
    Node *prev;
    int value;
    Node *next;

    Node()
    {
        prev = NULL;
        next = NULL;
    }
};

class DLL
{
private:
    Node *head;
    int size = 0;

public:
    DLL()
    {
        head = NULL;
    }

    void insertAtEnd(int v)
    {
        size++;
        Node *temp = new Node();
        temp->value = v;
        if (head == NULL)
            head = temp;
        else
        {
            Node *t = head;
            while (t->next != NULL)
                t = t->next;

            t->next = temp;
            temp->prev = t;
        }
    }

    void insertAtBegin(int v)
    {
        size++;
        Node *temp = new Node();
        temp->value = v;
        if (head == NULL)
            head = temp;
        else
        {
            Node *t = head;
            t->prev = temp;
            temp->next = t;
            head = temp;
        }
    }

    void insertAtMiddle(int n, int v)
    {
        Node *temp = new Node();
        temp->value = v;
        if (size == 0 && head == NULL && n > 0)
        {
            size++;
            head = temp;
            return;
        }
        else if (n > size || n < 1)
        {
            cout << "Position doesn't Exist" << endl;
            return;
        }

        size++;
        Node *t = head;
        if (n == 1)
        {
            temp->next = t;
            t->prev = temp;
            head = temp;
            return;
        }
        n--;
        while (n > 1)
        {
            n--;
            t = t->next;
        }
        temp->next = t->next;
        t->next->prev = temp;
        t->next = temp;
        temp->prev = t;
    }

    void Delete(int n)
    {
        Node *temp = head;
        if (n > size || n < 1)
        {
            cout << "Position doesn't exist" << endl;
            return;
        }

        if (n == 1)
        {
            size--;
            head = temp->next;
            if (temp->next != NULL)
                temp->next->prev = NULL;
            delete temp;
            return;
        }

        if (n == size)
        {
            size--;
            n--;
            while (n)
            {
                n--;
                temp = temp->next;
            }
            temp->prev->next = NULL;
            delete temp;
            return;
        }

        size--;
        n--;
        while (n)
        {
            n--;
            temp = temp->next;
        }
        temp->prev->next = temp->next;
        temp->next->prev = temp->prev;
        delete temp;
    }

    void search(int v)
    {
        Node *temp = head;
        int count = 0;
        while (temp != NULL)
        {
            count++;
            if (temp->value == v)
            {
                cout << v << " found at index " << count << endl;
                return;
            }
            temp = temp->next;
        }
        cout << v << " doesn't Exist" << endl;
    }

    void print()
    {
        if (head == NULL)
            cout << "List is Empty" << endl;
        else
        {
            Node *temp = head;
            while (temp != NULL)
            {
                cout << temp->value;
                if (temp->next != NULL)
                    cout << " <=> ";
                temp = temp->next;
            }
            cout << "\nSize = " << size << endl;
        }
    }
};

int main()
{
    DLL dl;
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
            dl.insertAtBegin(e);
            break;

        case 2:
            cout << "Enter the Position at Which you Want to Insert a Node : ";
            cin >> n;
            cout << "Enter an Element : ";
            cin >> e;
            dl.insertAtMiddle(n, e);
            break;

        case 3:
            cout << "Enter an Element : ";
            cin >> e;
            dl.insertAtEnd(e);
            break;

        case 4:
            cout << "Enter the Position of Node you want to Delete : ";
            cin >> n;
            dl.Delete(n);
            break;

        case 5:
            cout << "Enter the Element : ";
            cin >> e;
            dl.search(e);
            break;

        case 6:
            dl.print();
            break;

        case 7:
            exit(0);

        default:
            break;
        }
    }

    return 0;
}
