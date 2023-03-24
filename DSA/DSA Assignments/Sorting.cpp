#include <bits/stdc++.h>
using namespace std;
class Sorting
{
public:
    void bubbleSort(vector<int> &vec)
    {
        for (int i = vec.size() - 1; i >= 0; i--)
        {
            int flag = 0;
            for (int j = 0; j < i; j++)
                if (vec[j] > vec[j + 1])
                {
                    flag = 1;
                    swap(vec[j], vec[j + 1]);
                }

            if (!flag)
                break;
        }

        for (auto i : vec)
            cout << i << " ";
    }

    void selectionSort(vector<int> &vec)
    {
        for (int i = 0; i < vec.size(); i++)
        {
            int minValue = vec[i], minIndex = i;
            for (int j = i + 1; j < vec.size(); j++)
                if (vec[j] < minValue)
                {
                    minValue = min(minValue, vec[j]);
                    minIndex = j;
                }

            swap(vec[i], vec[minIndex]);
        }

        for (auto i : vec)
            cout << i << " ";
    }

    void insertionSort(vector<int> &vec)
    {
        for (int i = 1; i < vec.size(); i++)
        {
            int pivot = vec[i], j = i - 1;
            while (j >= 0 && pivot < vec[j])
            {
                swap(vec[j], vec[j + 1]);
                pivot = vec[j];
                --j;
            }
        }

        for (auto i : vec)
            cout << i << " ";
    }

    void merge(vector<int> &vec, int s1, int e1, int s2, int e2)
    {
        vector<int> temp;
        int i = s1, j = s2;
        while (i <= e1 && j <= e2)
        {
            if (vec[i] < vec[j])
                temp.push_back(vec[i++]);
            else
                temp.push_back(vec[j++]);
        }

        while (i <= e1)
            temp.push_back(vec[i++]);

        while (j <= e2)
            temp.push_back(vec[j++]);

        for (int k = 0, l = s1; l <= e2; k++, l++)
            vec[l] = temp[k];
    }

    void mergeSort(vector<int> &vec, int start, int end)
    {
        int mid = (start + end) / 2;
        if (start < end)
        {
            mergeSort(vec, start, mid);
            mergeSort(vec, mid + 1, end);
            merge(vec, start, mid, mid + 1, end);
        }
    }

    int pivot(vector<int> &vec, int start, int end)
    {
        int pivotElement = vec[start], left = start, right = end;
        while (left < right)
        {
            while (vec[left] <= pivotElement)
                left++;

            while (vec[right] > pivotElement)
                right--;

            if (left < right)
                swap(vec[left++], vec[right--]);
        }

        if (vec[left] < vec[start])
        {
            swap(vec[left], vec[start]);
            return left;
        }
        else
        {
            swap(vec[right], vec[start]);
            return right;
        }
    }

    void quickSort(vector<int> &vec, int start, int end)
    {
        if (start >= end)
            return;

        int pivotIndex = pivot(vec, start, end);
        quickSort(vec, start, pivotIndex - 1);
        quickSort(vec, pivotIndex + 1, end);
    }

    void heapify(vector<int> &vec, int size, int root)
    {
        int maximum = root, left = (2 * root) + 1, right = (2 * root) + 2;

        if (left < size && vec[left] > vec[maximum])
            maximum = left;

        if (right < size && vec[right] > vec[maximum])
            maximum = right;

        if (maximum != root)
        {
            swap(vec[root], vec[maximum]);
            heapify(vec, size, maximum);
        }
    }

    void heapSort(vector<int> &vec)
    {
        for (int i = vec.size() / 2 - 1; i >= 0; i--)
            heapify(vec, vec.size(), i);

        for (int i = vec.size() - 1; i >= 0; i--)
        {
            swap(vec[0], vec[i]);
            heapify(vec, i, 0);
        }
    }
};

int main()
{
    Sorting s;
    vector<int> vec{-1, 2, 3, 0, -1};
    cout << "1. Bubble Sort" << endl;
    cout << "2. Selection Sort" << endl;
    cout << "3. Insertion Sort" << endl;
    cout << "4. Merge Sort" << endl;
    cout << "5. Quick Sort" << endl;
    cout << "6. Heap Sort" << endl;
    cout << "Select any one of the following : ";
    int choice;
    cin >> choice;
    switch (choice)
    {
    case 1:
        s.bubbleSort(vec);
        break;

    case 2:
        s.selectionSort(vec);
        break;

    case 3:
        s.insertionSort(vec);
        break;

    case 4:
        s.mergeSort(vec, 0, vec.size() - 1);
        for (auto i : vec)
            cout << i << " ";
        break;

    case 5:
        s.quickSort(vec, 0, vec.size() - 1);
        for (auto i : vec)
            cout << i << " ";

    case 6:
        s.heapSort(vec);
        for (auto i : vec)
            cout << i << " ";
        break;

    default:
        cout << "Invalid Choice !!" << endl;
        break;
    }
    return 0;
}
