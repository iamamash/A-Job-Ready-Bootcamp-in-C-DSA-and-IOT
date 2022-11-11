// 1. Declare a vector with Initialization and print the elements.
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 4, 5};
    for (int x : v)
        cout << x << " ";
    return 0;
}

// 2. Declare a vector without initialization, insert some elements and print.
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    for (int i = 0; i < 10; i++)
        v.push_back(i * 100);

    for (int x : v)
        cout << x << " ";
    return 0;
}

// 3. Write a function to print the element of a vector and take input from the user.
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    int size, e;
    cout << "How Many Elements You Want to Enter : ";
    cin >> size;
    cout << "Enter the " << size << " Elements : " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> e;
        v.push_back(e);
    }

    for (int x : v)
        cout << x << " ";
    return 0;
}

// 4. Write a program to Copy one vector’s elements to another vector.
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v1 = {1, 2, 3, 4, 5}, v2;
    for (int i = 0; i < v1.size(); i++)
        v2.push_back(v1[i]);

    for (int x : v2)
        cout << x << " ";
    return 0;
}

// 5. Find largest and smallest elements in a vector.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v1 = {0, -2, 3, 40, 25};
    cout << "Maximum Element is : " << *max_element(v1.begin(), v1.end()) << endl;
    cout << "Minimum Element is : " << *min_element(v1.begin(), v1.end());
    return 0;
}

// 6. Write a program to reverse vector elements.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 4, 5};
    reverse(v.begin(), v.end());
    for (int x : v)
        cout << x << " ";
    return 0;
}

// 7. Write a program to find sum of vector elements
#include <iostream>
#include <vector>
#include <numeric>
using namespace std;
int main()
{
    vector<int> v1 = {1, 2, 3, 4, 5};
    int sum = 0;
    sum = accumulate(v1.begin(), v1.end(), sum);
    cout << "Sum of Array is : " << sum;
    return 0;
}

// 8. Write a program to find common elements between two vectors.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v1{1, 2, 3, 4, 5}, v2{5, 6, 7, 1, 2, 0}, v3(v1.size() + v2.size());

    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());

    vector<int>::iterator i, end;

    end = set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());

    for (i = v3.begin(); i != end; i++)
        cout << *i << " ";
    return 0;
}

// 9. Write a program to Push and print elements in a float vector.
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<float> v;
    for (int i = 0; i < 5; i++)
        v.push_back(i * .100);

    for (float x : v)
        cout << x << " ";
    return 0;
}

// 10. Write a program to check whether an element exists in a vector or not.
#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
using namespace std;
int main()
{
    vector<float> v{1, 2, 3, 4, 5};
    int e;
    cout << "Enter the Element you want to look for : ";
    cin >> e;
    vector<float>:: iterator i = find(v.begin(), v.end(), e);
    if (i != v.end())
        cout << "Element Found";
    else
        cout << "Element Not Found !!";
    return 0;
}
