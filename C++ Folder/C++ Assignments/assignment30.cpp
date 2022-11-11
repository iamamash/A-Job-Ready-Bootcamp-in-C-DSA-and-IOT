// 1. Write a C++ program to demonstrate the use of try, catch block with the argument as an
// integer and string using multiple catch blocks.
#include <iostream>
using namespace std;
int main()
{
    int x = 101;
    try
    {
        if (x < 100)
            throw "INT";
        else if (x > 100)
            throw exception();
        else
            throw "Error!!";
    }
    catch (int n)
    {
        cout << n << endl;
    }
    catch (const char *msg)
    {
        cout << msg << endl;
    }
    catch (...)
    {
        cout << "exception()" << endl;
    }
    return 0;
}

// 2. Write a C++ program to demonstrate try, throw and catch statements.
#include <iostream>
using namespace std;
int main()
{
    int a, b, c = 0;
    cout << "Enter a & b : " << endl;
    try
    {
        cin >> a >> b;
        if (b == 0)
            throw "b can't be 0";
        else if (b == 1)
            throw b;
        c = a / b;
        cout << c << endl;
    }
    catch (const char *msg)
    {
        cout << msg << endl;
    }
    catch (int n)
    {
        cout << "Jeene nhi dunga" << endl;
    }
    catch (...)
    {
        cout << "Other" << endl;
    }
    return 0;
}

// 3. Write a C++ program to perform arithmetic operations on two numbers and throw an
// exception if the dividend is zero or does not contain an operator.
#include <iostream>
using namespace std;
int main()
{
    int a, b, c = 0;
    cout << "Enter a & b : " << endl;
    try
    {
        cin >> a >> b;
        if (b == 0)
            throw "b can't be 0";
        c = a / b;
        cout << c << endl;
    }
    catch (const char *msg)
    {
        cout << msg << endl;
    }
    catch (...)
    {
        cout << "Other" << endl;
    }
    return 0;
}

// 4. Write a C++ program to accept an email address and throw an exception if it does not
// contain @ symbol.
#include <iostream>
using namespace std;
int main()
{
    char str[20];
    cout << "Enter a valid email : ";
    try
    {
        cin.getline(str, 20);
        for (int i = 0; str[i]; i++)
            if (str[i] == '@')
            {
                cout << "Email is valid" << endl;
                exit(0);
            }
        throw "INVALID EMAIL";
    }
    catch (const char *msg)
    {
        cout << msg << endl;
    }
    return 0;
}

// 5. Write a C++ program to accept a mobile number and throw an exception if it does not
// contain 10 digits.
#include <iostream>
using namespace std;
int main()
{
    long long int num;
    int count = 0;
    cout << "Enter a number: ";
    cin >> num;
    while (num)
    {
        num = num / 10;
        count++;
    }
    try
    {
        if (count != 10)
            throw "INVALID NUMBER";
        else
            cout << "VALID NUMBER";
    }
    catch (const char *msg)
    {
        cout << msg << endl;
    }
    return 0;
}

// 6. Write a C++ program to accept area pin code and throw an exception if it does not
// contain 6 digits.
#include <iostream>
using namespace std;
int main()
{
    int code, count = 0;
    cout << "Enter a pin code: ";
    cin >> code;
    while (code)
    {
        code = code / 10;
        count++;
    }
    try
    {
        if (count != 6)
            throw "INVALID NUMBER";
        else
            cout << "VALID NUMBER";
    }
    catch (const char *msg)
    {
        cout << msg << endl;
    }
    return 0;
}

// 7. Write a C++ program to accept a username if the username has less than 6 characters
// or does contain any digit or special symbol.
#include <iostream>
using namespace std;
int main()
{
    char str[20];
    int count = 0;
    cout << "Enter a username: ";
    cin.getline(str, 20);
    try
    {
        for (int i = 0; str[i]; i++)
        {
            count++;
            if (str[i] >= 48 && str[i] <= 57)
                throw count;
            else if ((str[i] >= 33 && str[i] <= 47) || (str[i] >= 58 && str[i] <= 64) || (str[i] >= 91 && str[i] <= 96) || (str[i] >= 123 && str[i] <= 126))
                throw "Username contains a special character !!";
        }
    }
    catch (int n)
    {
        cout << "Username contains a number !!" << endl;
        exit(0);
    }
    catch (const char *msg)
    {
        cout << msg << endl;
        exit(0);
    }
    try
    {
        if (count < 6)
            throw count;
        else
            cout << "Username is valid" << endl;
    }
    catch (int n)
    {
        cout << "There should be atleast 6 characters" << endl;
    }
    return 0;
}

// 8. Write a C++ program to accept a password and throw an exception if the password has
// less than 6 characters or does not contain a digit or does not contain any special
// character or does not contain any capital letter.
#include <iostream>
using namespace std;
int main()
{
    char str[20];
    int count = 0, sc = 0, num = 0;
    cout << "Enter a password: ";
    cin.getline(str, 20);
    for (int i = 0; str[i]; i++)
    {
        count++;
        if (str[i] >= 48 && str[i] <= 57)
            num = 1;
        else if ((str[i] >= 33 && str[i] <= 47) || (str[i] >= 58 && str[i] <= 64) || (str[i] >= 91 && str[i] <= 96) || (str[i] >= 123 && str[i] <= 126))
            sc = 1;
    }
    try
    {
        if (count < 6)
            throw count;
        else if (num == 0)
            throw 4.0;
        else if (sc == 0)
            throw "404!";
        else
            cout << "Password is valid" << endl;
    }
    catch (int c)
    {
        cout << "Password should contain atleast 6 characters" << endl;
    }
    catch (double d)
    {
        cout << "Password should contain atleast 1 number" << endl;
    }
    catch (const char *msg)
    {
        cout << "Password should contain special character" << endl;
    }
    return 0;
}

// 9. Write a C++ program to accept Gmail id only and throw an exception if the id does not
// contain @ and gmail.com.
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char id[30], id2[30], ex[] = "@gmail.com";
    int count = 0, k = 0;
    cout << "Enter your email: ";
    cin.getline(id, 30);
    for (int i = 0; id[i]; i++)
        if (id[i] == '@' || count == 1)
        {
            count = 1;
            id2[k] = id[i];
            k++;
        }
    id2[k] = '\0';
    try
    {
        if (strcmp(id2, ex))
            throw "Email is Invalid";
        else
            cout << "Email is Valid" << endl;
    }
    catch (const char *msg)
    {
        cout << msg << endl;
    }
    return 0;
}

// 10. Write a C++ program to accept Nickname and throw an exception if it has greater than 8
// characters or does contain a digit or special symbol or space.
#include <iostream>
using namespace std;
int main()
{
    char nick[20];
    int count = 0, num = 0, sp = 0;
    cout << "Enter your nickname: ";
    cin.getline(nick, 20);
    for (int i = 0; nick[i]; i++)
    {
        count++;
        if (nick[i] >= 48 && nick[i] <= 57)
            num = 1;
        else if ((nick[i] >= 33 && nick[i] <= 47) || (nick[i] >= 58 && nick[i] <= 64) || (nick[i] >= 91 && nick[i] <= 96) || (nick[i] >= 123 && nick[i] <= 126))
            sp = 1;
        ;
    }
    try
    {
        if (count < 8)
            throw count;
        else if (num == 1)
            throw 4.0;
        else if (sp == 1)
            throw "Nickname should not contain any special character";
        else
            cout << "Nickname is valid" << endl;
    }
    catch (int c)
    {
        cout << "Nickname should contain atleast 8 characters" << endl;
    }
    catch (double d)
    {
        cout << "Nickname should not contain any number" << endl;
    }
    catch (const char *msg)
    {
        cout << msg << endl;
    }
    return 0;
}
