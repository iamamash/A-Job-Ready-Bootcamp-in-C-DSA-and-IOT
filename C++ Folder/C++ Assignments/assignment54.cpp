// 1. Create an ADT array without using STL.
#include <iostream>
using namespace std;
int main()
{
    int arr[5];
    cout << "Enter 5 Elements : " << endl;
    for (int i = 0; i < 5; i++)
        cin >> arr[i];

    cout << "Elements are : ";
    for (int i = 0; i < 5; i++)
        cout << arr[i] << " ";

    return 0;
}

// 2. Create an array and implement a search function in the array.
#include <iostream>
using namespace std;
class Array
{
private:
    int arr[5];

public:
    void insert()
    {
        cout << "Enter 5 Elements : " << endl;
        for (int i = 0; i < 5; i++)
            cin >> arr[i];
    }

    void search(int value)
    {
        for (int i = 0; i < 5; i++)
            if (arr[i] == value)
            {
                cout << "Value Found at Index " << i << endl;
                return;
            }
        cout << "Value Not Found" << endl;
    }

    void print()
    {
        for (int i = 0; i < 5; i++)
            cout << arr[i] << " ";
    }

    void reverse()
    {
        int temp[5], j = 0;
        for (int i = 5; i >= 0; i--, j++)
            temp[j] = arr[i];
        for (int i = 0; i < 5; i++)
            arr[i] = temp[i];
    }

    void sort()
    {
        for (int i = 0; i < 5; i++)
            for (int j = i + 1; j < 5; j++)
                if (arr[i] > arr[j])
                {
                    int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
    }

    int getSize()
    {
        return sizeof(arr) / sizeof(arr[0]);
    }
};

int main()
{
    Array a;
    a.insert();
    a.search(2);
    return 0;
}

// 3. Create a function in Array to reverse an array.
int main()
{
    Array a;
    a.reverse();
    return 0;
}

// 4. Create a function in Array to sort the given array
int main()
{
    Array a;
    a.sort();
    return 0;
}

// 5. Create a function in Array to check the size of an array.
int main()
{
    Array a;
    cout << "Size of Array is : " << a.getSize();
    return 0;
}

// 6. Create a Dynamic array without using STL.
#include <iostream>
using namespace std;
class DynamicArray
{
private:
    int *arr;
    int size, capacity;

public:
    DynamicArray()
    {
        arr = new int[1];
        size = 0;
        capacity = 1;
    }

    ~DynamicArray()
    {
        delete[] arr;
        size = 0;
        capacity = 0;
    }

    int getSize()
    {
        return size;
    }

    int getCapacity()
    {
        return capacity;
    }

    void resize()
    {
        int *temp = new int[2 * capacity];

        for (int i = 0; i < size; i++)
            temp[i] = arr[i];

        delete[] arr;
        arr = temp;
        capacity *= 2;
    }

    void insertAtIndex(int index, int value)
    {
        if (size == capacity)
            resize();
        else if (index >= capacity || index < 0)
            cout << "Illegal Access of Memory" << endl;

        arr[index] = value;
        size++;
    }

    void insertByShift(int index, int value)
    {
        if (size == capacity)
            resize();
        else if (index >= capacity || index < 0)
            cout << "Illegal Access of Memory" << endl;

        for (int j = size; j >= index; j--)
            arr[j] = arr[j - 1];

        arr[index] = value;
        size++;
    }

    void Delete(int index)
    {
        if (index < size)
            cout << "Illegal Access of Memory" << endl;

        for (int i = index; i < size - 1; i++)
            arr[i] = arr[i + 1];
        size--;
    }

    void search(int value)
    {
        for (int i = 0; i < size; i++)
            if (arr[i] == value)
            {
                cout << "Value Found at Index " << i << endl;
                return;
            }
        cout << "Value Not Found" << endl;
    }

    void shrinkToFit()
    {
        int *temp = new int[size];
        for (int i = 0; i < size; i++)
            temp[i] = arr[i];
        delete[] arr;
        arr = temp;
        capacity = size;
    }

    void reverse()
    {
        int *temp = new int[capacity];
        int j = 0;
        for (int i = size - 1; i >= 0; i--, j++)
            temp[j] = arr[i];
        delete[] arr;
        arr = temp;
    }

    void sort()
    {
        for (int i = 0; i < size; i++)
            for (int j = i + 1; j < size; j++)
                if (arr[i] > arr[j])
                {
                    int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
    }

    void print()
    {
        for (int i = 0; i < size; i++)
            cout << arr[i] << " ";
        cout << "\nSize = " << size << ", Capacity = " << capacity << endl;
    }
};

int main()
{
    DynamicArray a;
    a.insertAtIndex(0, 10);
    a.print();

    a.insertAtIndex(1, 20);
    a.print();

    a.insertAtIndex(2, 30);
    a.print();

    a.insertAtIndex(3, 40);
    a.print();

    a.insertAtIndex(4, 50);
    a.print();

    a.insertByShift(2, 100);
    a.print();

    a.insertByShift(0, 0);
    a.print();

    a.Delete(3);
    a.print();

    a.shrinkToFit();
    a.print();

    a.search(30);
    a.search(100);

    return 0;
}

// 7. Create a function in a dynamic array to return the size of the array.
int main()
{
    DynamicArray a;
    cout << "Size of array is : " << a.getSize();
    return 0;
}

// 8. Create a function in a dynamic array to return the capacity of the array.
int main()
{
    DynamicArray a;
    cout << "Size of array is : " << a.getCapacity();
    return 0;
}

// 9. Create an array and implement a search function in the array.
int main()
{
    DynamicArray a;
    a.insertAtIndex(0, 0);
    a.insertAtIndex(1, 5);
    a.insertAtIndex(2, 10);

    a.search(100);
    return 0;
}

// 10. Create a function in Array to reverse an array.
int main()
{
    DynamicArray a;
    a.insertAtIndex(0, 0);
    a.insertAtIndex(1, 1);
    a.insertAtIndex(2, 2);
    a.insertAtIndex(3, 3);

    a.reverse();
    a.print();
    return 0;
}

// 11. Create a function in Array to sort the given array
int main()
{
    DynamicArray a;
    a.insertAtIndex(0, 100);
    a.insertAtIndex(1, 1);
    a.insertAtIndex(2, 0);
    a.insertAtIndex(3, -100);

    a.sort();
    a.print();
    return 0;
}
