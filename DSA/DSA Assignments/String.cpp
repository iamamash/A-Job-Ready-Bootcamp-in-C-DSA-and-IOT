#include <iostream>
#include <vector>
using namespace std;
#define d 26
class String
{
private:
public:
    void bruteForceApproach(string s, string p)
    {
        for (int i = 0; i <= (s.size() - p.size()); i++)
        {
            int j = 0;
            while (j < p.size() && p[j] == s[i + j])
                ++j;
            if (j == p.size())
            {
                cout << "Pattern Matched !!" << endl;
                return;
            }
        }

        cout << "Pattern Not Found !!" << endl;
    }

    void rabinKarp(string s, string p, int q)
    {
        int patt = 0, txt = 0, h = 1;
        for (int i = 0; i < p.size() - 1; i++)
            h = (h * d) % q;

        for (int i = 0; i < p.size(); i++)
        {
            patt = (d * patt + p[i]) % q;
            txt = (d * txt + s[i]) % q;
        }

        for (int i = 0; i <= (s.size() - p.size()); i++)
        {
            if (patt == txt)
            {
                int j = 0;
                while (j < p.size() && p[j] == s[i + j])
                    ++j;

                if (j == p.size())
                {
                    cout << "Pattern Matched !!" << endl;
                    return;
                }
            }

            if (i < s.size() - p.size())
                txt = (d * (txt - s[i] * h) + s[i + p.size()]) % q;

            if (txt < 0)
                txt += q;
        }

        cout << "Pattern Not Found !!" << endl;
    }

    void prefixTable(string p, vector<int> &v)
    {
        v[0] = 0;
        int i = 1, j = 0;
        while (i < p.size())
        {
            if (p[j] == p[i])
            {
                ++j;
                v[i] = j;
                ++i;
            }
            else if (j > 0)
                j = v[j - 1];
            else
            {
                v[i] = 0;
                ++i;
            }
        }
    }

    void KMP(string s, string p)
    {
        vector<int> v(p.size(), 0);
        prefixTable(p, v);
        int i = 0, j = 0;
        while (i < s.size() && j < p.size())
        {
            if (j < p.size() && p[j] == s[i])
            {
                ++j;
                ++i;
                if (j == p.size())
                {
                    cout << "Pattern Matched !!" << endl;
                    return;
                }
            }
            else if (j > 0)
                j = v[j - 1];
            else
                ++i;
        }

        cout << "Pattern Not Found !!" << endl;
    }
};

int main()
{
    string s = "bacbabababacaca";
    string pattern = "ababaca";
    String S;
    cout << "1. Brute Force Approach" << endl;
    cout << "2. Rabin Karp" << endl;
    cout << "3. KMP Algorithm" << endl;
    cout << "Enter your choice : ";
    int choice;
    cin >> choice;
    switch (choice)
    {
    case 1:
        S.bruteForceApproach(s, pattern);
        break;

    case 2:
        S.rabinKarp(s, pattern, 11);
        break;

    case 3:
        S.KMP(s, pattern);
        break;

    default:
        cout << "Invalid Choice !!" << endl;
        break;
    }

    return 0;
}
