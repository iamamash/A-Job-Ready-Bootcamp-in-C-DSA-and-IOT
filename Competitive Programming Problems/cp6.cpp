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
        int maxlen = -1, c = 0;
        unordered_map<char, int> m;

        for(int i = 0; s[i]; i++)
        {
            if(m.find(s[i]) == m.end() || i - m[s[i]] > c)
                c++;
            else
            {
                maxlen = max(maxlen, c);
                c = i - m[s[i]];
            }

            m[s[i]] = i;
        }

        return max(maxlen, c);
    }
};

int main()
{
    Solution s;
    cout << s.lengthOfLongestSubstring("dvdf");
    return 0;
}
