// BINARY TREE IMPLEMENTATON USING ARRAY
#include <iostream>
using namespace std;
class Tree
{
private:
    int arr[15] = {0};
    int size = 15;

public:
    void insert(int v, int i)
    {
        if (i == 1)
            arr[i] = v;
        else if (i / 2 != 0 && i < size)
            arr[i] = v;
        else
            cout << "Parent doesn't exist" << endl;
    }

    void insertLeftChild(int v, int i)
    {
        if (arr[i] != 0 && (i * 2) < size)
            arr[i * 2] = v;
        else
            cout << "Parent doesn't exist" << endl;
    }

    void insertRightChild(int v, int i)
    {
        if (arr[i] != 0 && ((i * 2) + 1) < size)
            arr[(i * 2) + 1] = v;
        else
            cout << "Parent doesn't exist" << endl;
    }

    void Delete(int i)
    {
        if (i < size && arr[i * 2] == 0 && arr[(i * 2) + 1] == 0 && arr[i] != 0)
            arr[i] = 0;
        else
            cout << "Deletion not possible" << endl;
    }

    void print()
    {
        for (int i = 1; i < size; i++)
            if (arr[i] != 0)
                cout << arr[i] << " ";
            else
                cout << " - ";
    }
};

int main()
{
    Tree t;
    t.insert(5, 1);
    t.insert(10, 5);
    t.insertRightChild(20, 1);
    t.insertLeftChild(11, 1);

    t.Delete(3);
    t.Delete(5);

    t.print();
    return 0;
}

// BINARY TREE IMPLEMENTATON USING LINKED LIST WITH ALL TRAVERSALS (preOrder, inOrder, postOrder)
#include <iostream>
#include <queue>
using namespace std;
class tree
{
public:
    int data;
    tree *left, *right;
    tree(int v)
    {
        data = v;
        left = NULL;
        right = NULL;
    }

    void preOrder()
    {
        if (this != NULL)
        {
            cout << data << " ";
            left->preOrder();
            right->preOrder();
        }
    }

    void inOrder()
    {
        if (this != NULL)
        {
            left->inOrder();
            cout << data << " ";
            right->inOrder();
        }
    }

    void postOrder()
    {
        if (this != NULL)
        {
            left->postOrder();
            right->postOrder();
            cout << data << " ";
        }
    }
};

int main()
{
    tree *t = new tree(2);
    t->left = new tree(4);
    t->right = new tree(5);
    t->right->left = new tree(6);
    t->right->right = new tree(7);
    t->right->right->left = new tree(8);
    t->right->right->right = new tree(9);
    t->right->right->left->left = new tree(10);
    t->right->right->left->right = new tree(11);
    t->right->right->left->right->left = new tree(12);

    cout << "PREORDER : ";
    t->preOrder();

    cout << "\nPOSTORDER : ";
    t->postOrder();

    cout << "\nINORDER : ";
    t->inOrder();

    return 0;
}

// LEVELORDER TRAVERSAL IN BINARY TREE USING LINKED LIST(NON - RECURSIVE APPROACH)
#include <iostream>
#include <queue>
using namespace std;
class Node
{
public:
    int data;
    Node *left, *right;

    Node(int v)
    {
        data = v;
        left = NULL;
        right = NULL;
    }

    void levelOrder()
    {
        if (this == NULL)
            return;

        queue<Node *> q;
        q.push(this);
        while (!q.empty())
        {
            Node *temp = q.front();
            cout << temp->data << " ";
            q.pop();

            if (temp->left != NULL)
                q.push(temp->left);

            if (temp->right != NULL)
                q.push(temp->right);
        }
    }
};

int main()
{
    Node *n = new Node(2);
    n->left = new Node(4);
    n->right = new Node(5);
    n->right->left = new Node(6);
    n->right->right = new Node(7);
    n->right->right->left = new Node(8);
    n->right->right->right = new Node(9);
    n->right->right->left->left = new Node(10);
    n->right->right->left->right = new Node(11);
    n->right->right->left->right->left = new Node(12);

    cout << "LEVELORDER : ";
    n->levelOrder();

    return 0;
}

// LEVELORDER TRAVERSAL IN BINARY TREE USING LINKED LIST(RECURSIVE APPROACH)
#include <iostream>
#include <queue>
using namespace std;
class node
{
public:
    int data;
    node *left, *right;

    node(int v)
    {
        data = v;
        left = NULL;
        right = NULL;
    }

    int height()
    {
        if (this == NULL)
            return 0;
        int Left = left->height();
        int Right = right->height();

        if (Left > Right)
            return Left + 1;
        else
            return Right + 1;
    }

    void printCurrentLevel(int l)
    {
        if (this == NULL)
            return;
        else if (l == 0)
            cout << data << " ";
        else
        {
            left->printCurrentLevel(l - 1);
            right->printCurrentLevel(l - 1);
        }
    }

    void levelOrder()
    {
        int h = this->height();

        for (int i = 0; i < h; i++)
            this->printCurrentLevel(i);
    }
};

int main()
{
    node *n = new node(2);
    n->left = new node(4);
    n->right = new node(5);
    n->right->left = new node(6);
    n->right->right = new node(7);
    n->right->right->left = new node(8);
    n->right->right->right = new node(9);
    n->right->right->left->left = new node(10);
    n->right->right->left->right = new node(11);
    n->right->right->left->right->left = new node(12);

    cout << "LEVELORDER : ";
    n->levelOrder();

    return 0;
}
