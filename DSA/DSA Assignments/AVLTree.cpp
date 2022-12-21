#include <iostream>
#include <algorithm>
using namespace std;
class AVL
{
private:
    int data, height;
    AVL *left, *right;

public:
    AVL(int v)
    {
        data = v;
        height = 1;
        left = right = NULL;
    }

    int Height()
    {
        if (this == NULL)
            return 0;
        return height;
    }

    AVL *inorderSuccessor()
    {
        if (left == NULL)
            return this;
        else
            left->inorderSuccessor();
    }

    AVL *rightRotation()
    {
        AVL *X = left;
        AVL *T2 = X->right;
        X->right = this;
        left = T2;

        height = max(left->Height(), right->Height()) + 1;
        X->height = max(X->left->Height(), X->right->Height()) + 1;

        return X;
    }

    AVL *leftRotation()
    {
        AVL *X = right;
        AVL *T2 = X->left;
        X->left = this;
        right = T2;

        height = max(left->Height(), right->Height()) + 1;
        X->height = max(X->left->Height(), X->right->Height()) + 1;

        return X;
    }

    int getBalanceFactor()
    {
        if (this == NULL)
            return 0;
        return (left->Height() - right->Height());
    }

    AVL *insertNode(int key)
    {
        if (this == NULL)
            return new AVL(key);
        else if (data < key)
            right = right->insertNode(key);
        else if (data > key)
            left = left->insertNode(key);
        else
            return this;

        height = 1 + max(left->Height(), right->Height());

        int bf = this->getBalanceFactor();

        if (bf > 1)
        {
            if (left->data > key)
                return this->rightRotation();
            else
            {
                left = left->leftRotation();
                return this->rightRotation();
            }
        }

        if (bf < -1)
        {
            if (right->data < key)
                return this->leftRotation();
            else
            {
                right = right->rightRotation();
                return this->leftRotation();
            }
        }

        return this;
    }

    AVL *Delete(int key)
    {
        if (this == NULL)
            return NULL;
        else if (data < key)
            right = right->Delete(key);
        else if (data > key)
            left = left->Delete(key);
        else
        {
            if (left == NULL || right == NULL)
            {
                AVL *temp = left ? left : right;
                if (temp == NULL)
                {
                    delete this;
                    return NULL;
                }
                else
                {
                    *this = *temp;
                    delete temp;
                }
            }
            else
            {
                AVL *temp = right->inorderSuccessor();
                data = temp->data;
                right = right->Delete(temp->data);
            }
        }

        height = 1 + max(left->Height(), right->Height());

        int bf = this->getBalanceFactor();

        if (bf > 1)
        {
            if (left->getBalanceFactor() >= 0)
                return this->rightRotation();
            else
            {
                left = left->leftRotation();
                return this->rightRotation();
            }
        }

        if (bf < -1)
        {
            if (right->getBalanceFactor() <= 0)
                return this->leftRotation();
            else
            {
                right = right->rightRotation();
                return this->leftRotation();
            }
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
    AVL *root = new AVL(33);
    root->insertNode(13);
    root->insertNode(53);
    root->insertNode(9);
    root->insertNode(21);
    root->insertNode(61);
    root->insertNode(8);
    root->insertNode(11);

    root->inorder();

    root->Delete(13);
    root->Delete(8);
    root->Delete(61);
    cout << "\nAfter deleting : ";

    root->inorder();

    return 0;
}
