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

class LL
{
private:
    Node *head;
    int size;

public:
    LL()
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
            head = temp;
        else
        {
            Node *temp2 = head;
            while (temp2->next != NULL)
                temp2 = temp2->next;
            temp2->next = temp;
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
            temp->next = head;
            head = temp;
        }
    }

    void insertAtMiddle(int n, int v)
    {
        if (n > size)
        {
            cout << "Position dosn't exist" << endl;
            return;
        }
        size++;
        Node *temp = new Node();
        temp->value = v;
        if (head == NULL)
            head = temp;
        else
        {
            Node *t = head;
            if (n == 1)
            {
                temp->next = t;
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
    }

    void Delete(int n)
    {
        if (n < 1 || n > size)
        {
            cout << "Position doesn't exist" << endl;
            return;
        }

        --size;
        Node *temp = head;

        if (n == 1)
        {
            head = temp->next;
            delete temp;
            return;
        }
        else if (n == size)
        {
            n--;
            while (n > 1)
            {
                n--;
                temp = temp->next;
            }
            Node *t = temp->next;
            temp->next = NULL;
            delete t;
            return;
        }

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
        while (temp != NULL)
        {
            count++;
            if (temp->value == v)
            {
                cout << "Element found at index " << count << endl;
                return;
            }
            temp = temp->next;
        }
        cout << "Element not found" << endl;
    }

    void print()
    {
        if (size == 0)
        {
            cout << "List is Empty" << endl;
            return;
        }
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->value << " -> ";
            temp = temp->next;
        }
        cout << "\nSize = " << size << endl;
    }
};

int main()
{
    LL l;
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
