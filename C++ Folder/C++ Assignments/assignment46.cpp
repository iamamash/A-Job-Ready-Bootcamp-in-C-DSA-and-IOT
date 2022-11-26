// 1. Create a map, insert at least 5 pairs of keys and values and print it.
#include <iostream>
#include <map>
using namespace std;
int main()
{
    map<int, string> m;
    m[1] = "Amash";
    m[2] = "Diggi";
    m[3] = "Pankaj";
    m[4] = "Rohan";
    m[5] = "Shubhnesh";
    m[6] = "Aryam";

    for (auto i : m)
        cout << "Key = " << i.first << ", Value = " << i.second << endl;

    return 0;
}

// 2. Create a map, where insert keys and values as string type and integer type
// respectively and print it on the screen.
#include <iostream>
#include <map>
using namespace std;
int main()
{
    map<string, int> m;
    m["Amash"] = 100;
    m["Diggi"] = 99;
    m["Pankaj"] = 89;
    m["Rohan"] = 1;
    m["Shubhnesh"] = -200;
    m["Aryam"] = 50;

    for (auto it : m)
        cout << "Key = " << it.first << ",  Value = " << it.second << endl;
    return 0;
}

// 3. Create a map, insert some pairs and print all elements in reverse order using rbegin
// and rend function.
#include <iostream>
#include <map>
using namespace std;
int main()
{
    map<string, int> m;
    m["Amash"] = 100;
    m["Diggi"] = 99;
    m["Pankaj"] = 89;
    m["Rohan"] = 1;
    m["Shubhnesh"] = -200;
    m["Aryam"] = 50;

    for (auto it = m.rbegin(); it != m.rend(); it++)
        cout << "Key = " << (*it).first << ",  Value = " << (*it).second << endl;
    return 0;
}

// 4. Create a map, and insert some pairs and find one pair out of the inserted pair and
// replace it with another pair and print map.
#include <iostream>
#include <map>
using namespace std;
int main()
{
    map<int, string> m;
    m[1] = "Amash";
    m[2] = "Diggi";
    m[3] = "Pankaj";
    m[4] = "Rohaaaaan";
    m[5] = "Shubhnesh";
    m[6] = "Aryam";

    cout << "Before :" << endl;
    for (auto it : m)
        cout << "Key = " << it.first << ",  Value = " << it.second << endl;

    for (auto it : m)
        if (it.first == 4)
            m[it.first] = "Rohan";

    cout << "\nAfter :" << endl;
    for (auto it : m)
        cout << "Key = " << it.first << ",  Value = " << it.second << endl;

    return 0;
}

// 5. Create a map, insert some pairs and Find the occurrence of each pair and print it on
// the screen.
#include <iostream>
#include <map>
using namespace std;
int main()
{
    map<int, string> m;
    m[1] = "Amash";
    m[2] = "Diggi";
    m[3] = "Pankaj";
    m[4] = "Rohaaaaan";
    m[5] = "Shubhnesh";
    m[6] = "Aryam";

    for (auto it : m)
        cout << it.first << " occurs only 1 time" << endl;

    return 0;
}

// 6. Create a map, use a member function to tell whether a map is empty or not and then
// insert some pairs into the map and find the size of map.
#include <iostream>
#include <map>
using namespace std;
class Map
{
public:
    int check(map<int, int> &m)
    {
        if (m.empty())
            return 1;
        else
            return 0;
    }
};

int main()
{
    map<int, int> m1;
    Map m;
    if (m.check(m1))
        cout << "Map is Empty" << endl;
    else
        cout << "Map is not Empty" << endl;

    m1[1] = 6;
    m1[2] = 8;
    m1[6] = 3;
    m1[8] = 2;

    cout << "Map Size is : " << m1.size();
    return 0;
}

// 7. Sort a given map in descending order based on values instead of keys in C++ STL.
// Key value
// 1 6
// 2 8
// 6 3
// 8 2
#include <iostream>
#include <map>
using namespace std;
int main()
{
    map<int, int> m1;
    m1[1] = 6;
    m1[2] = 8;
    m1[6] = 3;
    m1[8] = 2;

    map<int, int, greater<int>> m2;
    for (auto it : m1)
        m2[it.second] = it.first;

    for (auto it : m2)
        cout << it.first << " ";

    return 0;
}

// 8. Given a string s of length N, containing digits written in words but in jumbled form, the
// task is to find out the digits present in the string in word form and arrange them in
// sorted order using map
// Example:
// Input: s = “ozerotwneozero”
// Output: 0012
// Explanation: The string can be arranged as “zerozeroonetwo”.
// Therefore the digits are 0, 0, 1 and 2.
#include <iostream>
#include <map>
using namespace std;
int main()
{
    string s = "ozerotwneozero", ans = " ";
    map<char, int> m;
    for (int i = 0; i <= s.size(); i++)
        m[s[i]]++;

    while (m['z'] && m['e'] && m['r'] && m['o'])
    {
        m['z']--;
        m['e']--;
        m['r']--;
        m['o']--;
        ans += "0";
    }

    while (m['o'] && m['n'] && m['e'])
    {
        m['o']--;
        m['n']--;
        m['e']--;
        ans += "1";
    }

    while (m['t'] && m['w'] && m['o'])
    {
        m['t']--;
        m['w']--;
        m['o']--;
        ans += "2";
    }

    while (m['t'] && m['h'] && m['r'] && m['e'] && m['e'])
    {
        m['t']--;
        m['h']--;
        m['r']--;
        m['e']--;
        m['e']--;
        ans += "3";
    }

    while (m['f'] && m['o'] && m['u'] && m['r'])
    {
        m['f']--;
        m['o']--;
        m['u']--;
        m['r']--;
        ans += "4";
    }

    while (m['f'] && m['i'] && m['v'] && m['e'])
    {
        m['f']--;
        m['i']--;
        m['v']--;
        m['e']--;
        ans += "5";
    }

    while (m['s'] && m['i'] && m['x'])
    {
        m['s']--;
        m['i']--;
        m['x']--;
        ans += "6";
    }

    while (m['s'] && m['e'] && m['v'] && m['e'] && m['n'])
    {
        m['s']--;
        m['e']--;
        m['v']--;
        m['e']--;
        m['n']--;
        ans += "7";
    }

    while (m['e'] && m['i'] && m['g'] && m['h'] && m['t'])
    {
        m['e']--;
        m['i']--;
        m['g']--;
        m['h']--;
        m['t']--;
        ans += "8";
    }

    while (m['n'] && m['i'] && m['n'] && m['e'])
    {
        m['n']--;
        m['i']--;
        m['n']--;
        m['e']--;
        ans += "9";
    }
    cout << "Value is : " << ans;
    return 0;
}

// 9. Given two maps map1 and map2 having a string as the key and arrays of integers as
// values, the task is to merge them in one map such that if a key is common in both the
// maps, the respective arrays should be merged.
// Example:
// Input: map1 = { (“key1”, {0, 1}), (“key2”, {0, 1}) }, map2 = { (“key2”, {1, 2}) };
// Output: { (key1, {0, 1}), (key2, {0, 1, 2}) }
// Explanation: After merging key1 array will become {0, 1} and for key2 after merging
// array will become {0, 1, 2}
#include <iostream>
#include <map>
#include <set>
using namespace std;
int main()
{
    map<string, int> m1, m2, m3;
    m1["key1"] = 0, 1;
    m1["key2"] = 1, 2;

    for (auto i : m1)
        m3.insert({i.first, i.second});

    for (auto i : m2)
    {

        if (m3.find(i.first) != m3.end())
        {
            m3[i.first] += i.second;
            set<int> s;
            s.insert(m3[i.first]);
            for (auto it : s)
                m3[i.first] = it;
        }
        else
            m3.insert({i.first, i.second});
    }

    for (auto i : m3)
        cout << i.first << " =  " << i.second << endl;
    return 0;
}

// 10. Given a positive integer N, the task is to check whether N can be represented as the
// difference between two positive perfect cubes or not. If found to be true, then print
// “Yes”. Otherwise, print “No” using a map.
// Example:
// Input: N = 124
// Output: Yes
// Explanation: Since 124 can be represented as (125 – 1) = (5^3 – 1^3). Therefore, print
// Yes.
#include <iostream>
#include <map>
using namespace std;
int main()
{
    int n = 28;
    map<int, int> m;
    for (int i = 1; i <= n; i++)
        m[i * i * i] = i;

    for (auto i : m)
    {
        int num = n - i.first;
        if (m.find(num) != m.end())
        {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}
