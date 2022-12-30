// 6. Longest Substring Without Repeating Characters
// Given a string s, find the length of the longest substring without repeating characters.
// Example 1:
// Input: s = "abcabcbb"
// Output: 3
// Explanation: The answer is "abc", with the length of 3.
// Example 2:
// Input: s = "bbbbb"
// Output: 1
// Explanation: The answer is "b", with the length of 1.
// Example 3:
// Input: s = "pwwkew"
// Output: 3
// Explanation: The answer is "wke", with the length of 3.
// Notice that the answer must be a substring, "pwke" is a subsequence and not a
// substring.
// Constraints:
// ● 0 <= s.length <= 5 * 104
// ● s consists of English letters, digits, symbols and spaces.
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        int max = 0;
        string st = "";
        vector<string> v;
        for (int i = 0; s[i]; i++)
        {
            st = s[i];
            for (int j = i + 1; s[j]; j++)
                if (st.find(s[j]) == string::npos)
                    st += s[j];
                else
                    break;

            v.push_back(st);
        }

        for (int i = 0; i < v.size(); i++)
        {
            st = v[i];
            if (st.size() > max)
                max = st.size();
        }
        return max;
    }
};

int main()
{
    Solution s;
    cout << s.lengthOfLongestSubstring("dvdf");
    return 0;
}
