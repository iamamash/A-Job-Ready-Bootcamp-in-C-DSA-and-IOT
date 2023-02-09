// 1. Count of distinct pair sums in a given Array arr[] of size N, the task is to find the total number of unique pair sums possible from the array elements.
#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;
class DistinctPair
{
private:
    unordered_set<int> us;

public:
    int distinctPair(vector<int> &v, int k)
    {
        int count = 0;
        for (auto i : v)
            if (us.find(i) == us.end())
            {
                int res = k - i;
                if (us.find(res) != us.end())
                    count++;
                us.insert(i);
            }

        return count;
    }
};

int main()
{
    vector<int> v{1, 5, 2, 3, 4};
    int k = 6;
    DistinctPair d;
    cout << d.distinctPair(v, k);
    return 0;
}

// 2. C++ Program to Print all triplets in sorted array that form AP(or Arithmetic
// Progression) Example..Input : arr[] = { 2, 6, 9, 12, 17, 22, 31, 32, 35, 42 };
// Output :
// 6 9 12
// 2 12 22
// 12 17 22
// 2 17 32
// 12 22 32
// 9 22 35
// 2 22 42
// 22 32 42
#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;
class Triplets
{
private:
    unordered_set<int> us;

public:
    void triplets(vector<int> &v)
    {
        for (int i = 0; i < v.size(); i++)
        {
            for (int j = i + 1; j < v.size(); j++)
            {
                int diff = v[j] - v[i];
                if (us.find(v[i] - diff) != us.end())
                    cout << v[i] - diff << ", " << v[i] << ", " << v[j] << endl;
            }
            us.insert(v[i]);
        }
    }
};

int main()
{
    vector<int> v{2, 6, 9, 12, 17, 22, 31, 32, 35, 42};
    Triplets t;
    t.triplets(v);
    return 0;
}

// 3. C++ Program for Number of unique triplets whose XOR is zero.
// Input : a[] = {1, 3, 5, 10, 14, 15};
// Output : 2
// Explanation : {1, 14, 15} and {5, 10, 15} are the
// unique triplets whose XOR is 0.
// {1, 14, 15} and all other combinations of
// 1, 14, 15 are considered as 1 only.
// Input : a[] = {4, 7, 5, 8, 3, 9};
// Output : 1
// Explanation : {4, 7, 3} is the only triplet whose XOR is 0
#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;
class XOR
{
private:
    unordered_set<int> us;

public:
    int Xor(vector<int> &v)
    {
        int count = 0;
        for (int i = 0; i < v.size(); i++)
        {
            for (int j = i + 1; j < v.size(); j++)
            {
                int res = v[i] ^ v[j];
                if (us.find(res) != us.end())
                    count++;
            }
            us.insert(v[i]);
        }

        return count;
    }
};

int main()
{
    vector<int> v{4, 7, 5, 8, 3, 9};
    XOR x;
    cout << x.Xor(v);
    return 0;
}

// 4. C++ Program to give two arrays with size n, maximise the first array by using the
// elements from the second array such that the new array formed contains n greatest
// but unique elements of both the arrays giving the second array priority (All elements
// of second array appear before first array). The order of appearance of elements is
// kept the same in output as in input.
// Examples:
// Input : arr1[] = {2, 4, 3}
// arr2[] = {5, 6, 1}
// Output : 5 6 4
// As 5, 6 and 4 are maximum elements from two arrays giving the second array
// higher priority. Order of elements is the same in output as in input.
// Input : arr1[] = {7, 4, 8, 0, 1}
// arr2[] = {9, 7, 2, 3, 6}
// Output : 9 7 6 4 8
#include <bits/stdc++.h>
using namespace std;
class Max
{
private:
    unordered_set<int> us;

public:
    vector<int> maximum(vector<int> &v, vector<int> &u)
    {
        vector<int> w(v.begin(), v.end());

        for (auto i : u)
            w.push_back(i);

        sort(w.begin(), w.end(), greater<>());

        int i = 0;
        while (us.size() < u.size())
        {
            us.insert(w[i]);
            ++i;
        }

        w.clear();
        for (int i = 0; i < u.size(); i++)
            if (!us.empty() && us.find(u[i]) != us.end())
            {
                w.push_back(u[i]);
                us.erase(u[i]);
            }

        for (int i = 0; i < v.size(); i++)
            if (!us.empty() && us.find(v[i]) != us.end())
                w.push_back(v[i]);

        return w;
    }
};

int main()
{
    vector<int> v{7, 4, 8, 0, 1}, u{9, 7, 2, 3, 6};
    Max m;
    u = m.maximum(v, u);
    for (auto i : u)
        cout << i << " ";

    return 0;
}

// 5. C++ Program to given an array of positive and negative numbers, find if there is a
// subarray (of size at-least one) with 0 sum.
// Examples :
// Input: {4, 2, -3, 1, 6}
// Output: true
// Explanation:
// There is a subarray with zero sum from index 1 to 3.
// Input: {4, 2, 0, 1, 6}
// Output: true
// Explanation:
// There is a subarray with zero sum from index 2 to 2.
#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;
class SUM
{
private:
    unordered_set<int> us;

public:
    bool sumofSubArray(vector<int> &v)
    {
        int sum = v[0];
        us.insert(v[0]);
        for (int i = 1; i < v.size(); i++)
        {
            sum += v[i];
            if (sum == 0 || us.find(sum) != us.end())
                return true;

            us.insert(sum);
        }

        return false;
    }
};

int main()
{
    vector<int> v{4, 2, -3, 1, 6};
    SUM s;
    if (s.sumofSubArray(v))
        cout << "True";
    else
        cout << "False";
    return 0;
}

// 6. Given an array arr[] consisting of N positive integers, the task is to find the
// number of pairs such that the Greatest Common Divisor(GCD) of the pairs is not a prime
// number. The pair (i, j) and (j, i) are considered the same.
// Examples:
// Input: arr[] = { 2, 3, 9 }
// Output: 2
// Explanation:
// Following are the possible pairs whose GCD is not prime:
// (0, 1): The GCD of arr[0](= 2) and arr[1](= 3) is 1.
// (0, 2): The GCD of arr[0](= 2) and arr[2](= 9) is 1.
// Therefore, the total count of pairs is 2.
// Input: arr[] = {3, 5, 2, 10}
// Output: 4
#include <iostream>
#include <vector>
using namespace std;
class GCD
{
private:
    vector<int> us;

public:
    bool isPrime(int v)
    {
        if (v == 1)
            return false;

        for (int i = 2; i < v; i++)
            if (v % i == 0)
                return false;

        return true;
    }

    int hcf(int u, int v)
    {
        int min = u < v ? u : v, hcf = 1;
        for (int i = 1; i <= min; i++)
            if (u % i == 0 && v % i == 0)
                hcf = i;

        return hcf;
    }

    int gcd(vector<int> &v)
    {
        for (int i = 0; i < v.size(); i++)
            for (int j = i + 1; j < v.size(); j++)
                us.push_back(hcf(v[i], v[j]));

        int count = 0;
        for (auto i : us)
            if (!isPrime(i))
                count++;

        return count;
    }
};

int main()
{
    vector<int> v{3, 5, 2, 10};
    GCD g;
    cout << g.gcd(v);
    return 0;
}

// 7. Given an array of strings arr[] of size N, the task is to print all the distinct strings
// present in the given array.
// Examples:
// Input: arr[] = { “Good”, “God”, “Good”, “God”, “god” }
// Output: god Good God
#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;
int main()
{
    vector<string> v{"Good", "God", "Good", "God", "god"};
    unordered_set<string> us;

    for (auto i : v)
        us.insert(i);

    for (auto i : us)
        cout << i << " ";
    return 0;
}

// 8. Find all matrix elements which are minimum in their row and maximum in their
// column
#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;
class MATRIX
{
private:
    unordered_set<int> us;
    vector<int> vc;

public:
    void matrix(vector<vector<int>> &v)
    {
        for (int i = 0; i < v.size(); i++)
        {
            int rowMin = INT16_MAX;
            for (int j = 0; j < v[i].size(); j++)
                rowMin = v[i][j] < rowMin ? v[i][j] : rowMin;

            us.insert(rowMin);
        }

        for (int i = 0; i < v.size(); i++)
        {
            int colMax = INT16_MIN;
            for (int j = 0; j < v.size(); j++)
                colMax = v[j][i] > colMax ? v[j][i] : colMax;

            if (us.find(colMax) != us.end())
                vc.push_back(colMax);
        }

        for (auto i : vc)
            cout << i << " ";
    }
};

int main()
{
    vector<vector<int>> v{{1, 10, 4},
                          {9, 3, 8},
                          {15, 16, 17}};
    MATRIX m;
    m.matrix(v);
    return 0;
}

// 9. Given N strings of equal lengths. The strings contain only digits (1 to 9). The task is
// to count the number of strings that have an index position such that the digit at this
// index position is greater than the digits at the same index position of all the other
// strings.
// Examples:
// Input: arr[] = {“223”, “232”, “112”}
// Output: 2
// First digit of the 1st and 2nd strings are the largest.
// Second digit of the string 2nd is the largest.
// Third digit of the 1st string is the largest.
// Input: arr[] = {“999”, “122”, “111”}
// Output: 1
#include <bits/stdc++.h>
using namespace std;
class INDEX
{
private:
    unordered_set<int> us;

public:
    int index(vector<string> &v)
    {
        for (int i = 0; i < v.size(); i++)
        {
            int mx = 0;

            for (int j = 0; j < v.size(); j++)
                mx = max(mx, (int)v[j][i] - '0');

            for (int j = 0; j < v.size(); j++)
                if (v[j][i] - '0' == mx)
                {
                    us.insert(j);
                    break;
                }
        }

        return us.size();
    }
};

int main()
{
    vector<string> v{"999", "232", "112"};
    INDEX i;
    cout << i.index(v);
    return 0;
}

// 10. Unordered_set operators in C++ STL(== and !=)
#include <iostream>
#include <unordered_set>
using namespace std;
int main()
{
    unordered_set<int> set1{1, 2, 3, 4, 5};
    unordered_set<int> set2{1, 2, 4, 5, 3};
    unordered_set<int> set3{1, 2, 7, 4, 6};

    if (set1 == set2)
        cout << "Set1 = Set2" << endl;
    else
        cout << "Set1 != Set2" << endl;

    if (set2 == set3)
        cout << "Set2 = Set3" << endl;
    else
        cout << "Set2 != Set3" << endl;

    return 0;
}
