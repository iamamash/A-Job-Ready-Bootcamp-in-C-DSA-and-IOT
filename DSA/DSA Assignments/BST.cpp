// SEARCHING IN BINARY SEARCH TREE
#include <iostream>
using namespace std;
class BST
{
public:
    int data;
    BST *left, *right;

    BST(int v)
    {
        data = v;
        left = right = NULL;
    }

    BST *search(int v)
    {
        if (this == NULL)
            return NULL;
        else if (data == v)
            return this;
        else if (v < data)
            left->search(v);
        else
            right->search(v);
    }
};

int main()
{
    BST *b = new BST(25);
    b->left = new BST(15);
    b->left->left = new BST(10);
    b->left->right = new BST(18);
    b->left->right->left = new BST(16);
    b->right = new BST(40);
    b->right->left = new BST(30);
    b->right->right = new BST(60);
    b->right->right->left = new BST(50);
    b->right->right->right = new BST(70);
    b->right->right->right->left = new BST(65);

    BST *temp;
    temp = b->search(50);
    temp != NULL ? cout << temp->data << " found" << endl : cout << "Value not found" << endl;

    return 0;
}

// MINIMUM & MAXIMUM ELEMENT IN BINARY SEARCH TREE (ALSO INCLUDES INORDER SUCCESSOR & INORDER PREDECESSOR)
#include <iostream>
using namespace std;
class bst
{
public:
    int data;
    bst *left, *right;

    bst(int v)
    {
        data = v;
        left = right = NULL;
    }

    bst *minElement()
    {
        if (left == NULL)
            return this;
        else
            left->minElement();
    }

    bst *maxElement()
    {
        if (right == NULL)
            return this;
        else
            right->maxElement();
    }

    bst *inorderSuccessor()
    {
        return right->minElement();
    }

    bst *inorderPredecessor()
    {
        return left->maxElement();
    }
};

int main()
{
    bst *b = new bst(25);
    b->left = new bst(15);
    b->left->left = new bst(10);
    b->left->right = new bst(18);
    b->left->right->left = new bst(16);
    b->right = new bst(40);
    b->right->left = new bst(30);
    b->right->right = new bst(60);
    b->right->right->left = new bst(50);
    b->right->right->right = new bst(70);
    b->right->right->right->left = new bst(65);

    bst *temp;

    temp = b->minElement();
    cout << "Minimum Element is : " << temp->data << endl;

    temp = b->maxElement();
    cout << "Maximum Element is : " << temp->data << endl;

    temp = b->inorderSuccessor();
    cout << "\nINORDER SUCCESSOR : " << temp->data << endl;

    temp = b->inorderPredecessor();
    cout << "INORDER PREDECESSOR : " << temp->data << endl;

    return 0;
}

// CREATION/INSERTION & DELETION IN BINARY SEARCH TREE
#include <iostream>
using namespace std;
class Node
{
private:
    int data;
    Node *left, *right;

public:
    Node(int v)
    {
        data = v;
        left = right = NULL;
    }

    Node *minElement()
    {
        if (left == NULL)
            return this;
        else
            left->minElement();
    }

    Node *insertNode(int v)
    {
        if (this == NULL)
            return new Node(v);
        else if (v < data)
            left = left->insertNode(v);
        else
            right = right->insertNode(v);
    }

    Node *Delete(int v)
    {
        if (this == NULL)
            return this;
        else if (data < v)
            right = right->Delete(v);
        else if (data > v)
            left = left->Delete(v);
        else
        {
            if (left == NULL && right == NULL)
            {
                delete this;
                return NULL;
            }
            else if (left == NULL)
            {
                Node *temp = right;
                *this = *temp;
                delete temp;
                return this;
            }
            else if (right == NULL)
            {
                Node *temp = left;
                *this = *temp;
                delete temp;
                return this;
            }

            Node *temp = right->minElement();
            data = temp->data;
            right = right->Delete(temp->data);
        }

        return this;
    }

    void inorder()
    {
        if (this != NULL)
        {
            left->inorder();
            cout << data << " ";
            right->inorder();
        }
    }
};

int main()
{
    Node *root = new Node(10);
    root->insertNode(5);
    root->insertNode(20);
    root->insertNode(2);
    root->insertNode(6);
    root->insertNode(25);
    root->insertNode(21);
    root->insertNode(26);

    root->Delete(10);
    root->Delete(20);
    root->Delete(26);

    root->inorder();

    return 0;
}

