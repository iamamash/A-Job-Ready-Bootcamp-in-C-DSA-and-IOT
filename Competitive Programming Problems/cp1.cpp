// Given an integer x , return true if x is palindrome integer.
// An integer is a palindrome when it reads the same backward as forward.
// For example, 121 is a palindrome while 123 is not.
// Constraints:
// -231 <= x <= 231 - 1
#include <iostream>
using namespace std;
class Solution
{
public:
    bool palindrome(int x)
    {
        if (x < 0)
            return false;
        int revNum = 0, temp = x;
        while (temp != 0)
        {
            revNum = (revNum * 10) + (temp % 10);
            temp = temp / 10;
        }
        return x == revNum;
    }
};

int main()
{
    Solution s;
    if (s.palindrome(121))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
