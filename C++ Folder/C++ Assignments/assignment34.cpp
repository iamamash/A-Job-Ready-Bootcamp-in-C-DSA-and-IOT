// 1. Write a C++ program to create a file and print “File created successfully” and throw
// an error if file is not created.
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream fout;
    fout.open("G:/Amash's folder/C++ DSA Bootcamp/File handling texts/xyz.txt");
    if (fout)
        cout << "File created successfully" << endl;
    else
        cout << "File not created" << endl;
    fout.close();
    return 0;
}

// 2. Write a C++ program to read a text file and count the number of characters in it.
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int count = 0, space = 0;
    char ch;
    ifstream fin;
    fin.open("G:/Amash's folder/C++ DSA Bootcamp/File handling texts/xyz.txt");
    while (!fin.eof())
    {
        fin.get(ch);
        if (ch == ' ')
            space++;
        else if ((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122))
            count++;
    }
    cout << "No of characters are: " << count << endl;
    cout << "No of spaces are: " << space << endl;
    fin.close();
    return 0;
}

// 3. Write a C++ program to open an output file 'a.txt' and append data to it.
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    string str;
    ofstream fout;
    fout.open("G:/Amash's folder/C++ DSA Bootcamp/File handling texts/a.txt", ios::app);
    cout << "Enter text" << endl;
    while (fout)
    {
        getline(cin, str);
        if (str == "-1")
            break;
        fout << str;
    }
    fout.close();
    return 0;
}

// 4. Write a program to copy the contents of one text file to another while changing the
// case of every alphabet.
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    string str;
    ifstream fin;
    fin.open("G:/Amash's folder/C++ DSA Bootcamp/File handling texts/xyz.txt");
    ofstream fout;
    fout.open("G:/Amash's folder/C++ DSA Bootcamp/File handling texts/a.txt", ios::trunc);
    while (!fin.eof())
    {
        getline(fin, str);
        fout << str;
    }
    fin.close();
    fout.close();
    return 0;
}

// 5. Write a C++ program to merge the two files.
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    string str;
    ifstream fin;
    fin.open("G:/Amash's folder/C++ DSA Bootcamp/File handling texts/a.txt");
    ofstream fout;
    fout.open("G:/Amash's folder/C++ DSA Bootcamp/File handling texts/xyz.txt", ios::app);
    while (!fin.eof())
    {
        fout << " ";
        getline(fin, str);
        fout << str;
    }
    fin.close();
    fout.close();
    remove("G:/Amash's folder/C++ DSA Bootcamp/File handling texts/a.txt");
    return 0;
}

// 6. Write a C++ program that counts the total number of characters, words and lines in
// the file.
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int character = 0, word = 1, line = 0;
    char ch;
    ifstream fin;
    fin.open("G:/Amash's folder/C++ DSA Bootcamp/File handling texts/xyz.txt");
    while (!fin.eof())
    {
        fin.get(ch);
        if (ch == ' ')
            word++;
        else if ((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122))
            character++;
        else if (ch == '\n')
            line++;
    }
    cout << "No of characters are: " << character << endl;
    cout << "No of words are: " << word << endl;
    cout << "No of lines are: " << line << endl;
    fin.close();
    return 0;
}

// 7. There are 50 records in a file. Each record contains 6-character item-code, 20
// characters for item-name and an integer price. Write a program to read these
// records, arrange them in the descending order of price and write them in the same
// file, overwriting the earlier records.
#include <iostream>
#include <fstream>
using namespace std;
class Records
{
private:
    int price;
    string name, code;

public:
    void sort()
    {
        int i = 0;
        Records arr[5];
        ifstream fin;
        fin.open("G:/Amash's folder/C++ DSA Bootcamp/File handling texts/Items.txt");
        while (!fin.eof())
        {
            fin.get();
            getline(fin, code);
            arr[i].code = code;

            fin.sync();
            getline(fin, name);
            arr[i].name = name;

            fin >> price;
            arr[i].price = price;
            i++;
        }
        for (int i = 0; i < 5; i++)
            for (int j = i + 1; j < 5; j++)
                if (arr[i].price < arr[j].price)
                {
                    int tempPrice;
                    string tempName, tempCode;

                    tempPrice = arr[i].price;
                    arr[i].price = arr[j].price;
                    arr[j].price = tempPrice;

                    tempName = arr[i].name;
                    arr[i].name = arr[j].name;
                    arr[j].name = tempName;

                    tempCode = arr[i].code;
                    arr[i].code = arr[j].code;
                    arr[j].code = tempCode;
                }
        int k = 0;
        ofstream fout;
        fout.open("G:/Amash's folder/C++ DSA Bootcamp/File handling texts/Records.txt");
        while (k != 5)
        {
            fout << arr[k].code << endl;
            fout << arr[k].name << endl;
            fout << arr[k].price << endl;
            ++k;
        }
        fout.close();
        fin.close();

        remove("G:/Amash's folder/C++ DSA Bootcamp/File handling texts/Items.txt");
        rename("G:/Amash's folder/C++ DSA Bootcamp/File handling texts/Records.txt", "G:/Amash's folder/C++ DSA Bootcamp/File handling texts/Items.txt");
    }
};

int main()
{
    Records R;
    R.sort();
    cout << "Records Sorted successfully" << endl;
    return 0;
}

// 8. A file 'Employee.txt' contains empno and empname. Write a C++ program to add and
// read contents of this file and search for an employee whose name is 'XYZ'.
#include <iostream>
#include <fstream>
using namespace std;
class Employee
{
private:
    int empNo;
    string name;

public:
    void add()
    {
        cout << "How Many Records You Want to Enter : ";
        int ch;
        cin >> ch;
        ofstream fout;
        fout.open("G:/Amash's folder/C++ DSA Bootcamp/File handling texts/Employee.txt", ios::app);
        while (ch--)
        {
            cout << "\nEnter Employee No: ";
            cin >> empNo;
            fout << empNo << endl;

            cout << "Enter Employee Name: ";
            cin.sync();
            getline(cin, name);
            cout << "______________________________" << endl;
            fout << name << endl;
        }
        fout.close();
        cout << "Records Added Successfully" << endl;
    }
    void search(int id)
    {
        ifstream fin;
        fin.open("G:/Amash's folder/C++ DSA Bootcamp/File handling texts/Employee.txt");
        while (!fin.eof())
        {
            fin >> empNo;
            fin.get();
            getline(fin, name);
            if (empNo == id)
            {
                cout << "______________________________" << endl;
                cout << "Employee No     : " << empNo << endl;
                cout << "Employee Name   : " << name << endl;
                cout << "______________________________" << endl;
                break;
            }
        }
        if (fin.eof())
            cout << "Record Not Found !!" << endl;
        fin.close();
    }
};

int main()
{
    Employee e;
    system("cls");
    cout << "1. Add Employee" << endl;
    cout << "2. Search Employee" << endl;
    cout << "3. Exit" << endl;
    cout << "Enter your choice : ";
    int ch;
    cin >> ch;
    switch (ch)
    {
    case 1:
        e.add();
        break;

    case 2:
        cout << "Enter Employee Id : ";
        int id;
        cin >> id;
        e.search(id);
        break;

    case 3:
        exit(0);

    default:
        break;
    }
    return 0;
}

// 9. A company has following details of their employees in the file 'emp.dat'
// a. Emp Id
// b. Emp Name
// c. Emp Address
// d. Emp Dept (Admin/Sales/Production/IT)
// e. Emp Phone
// f. Emp Age
// Write a C++ program to read the above file. Create a new file such as Adm.dat,
// Sal.dat, Pro.dat, IT.dat respectively to store the employee details according to their
// department.
#include <iostream>
#include <fstream>
using namespace std;
class EMPLOYEE
{
private:
    int empid, num, age;
    string name, add, dept;

public:
    void emp()
    {
        ifstream fin;
        fin.open("G:/Amash's folder/C++ DSA Bootcamp/File handling texts/emp.txt");
        while (!fin.eof())
        {
            fin >> empid;

            fin.get();
            getline(fin, name);

            fin.sync();
            getline(fin, add);

            fin.sync();
            getline(fin, dept);

            fin >> num;
            fin >> age;

            if (dept == "Admin")
            {
                ofstream fout;
                fout.open("G:/Amash's folder/C++ DSA Bootcamp/File handling texts/Adm.dat", ios::app);

                fout << empid << endl;
                fout << name << endl;
                fout << add << endl;
                fout << dept << endl;
                fout << num << endl;
                fout << age << endl;

                fout.close();
            }
            else if (dept == "Sales")
            {
                ofstream fout;
                fout.open("G:/Amash's folder/C++ DSA Bootcamp/File handling texts/Sal.dat", ios::app);

                fout << empid << endl;
                fout << name << endl;
                fout << add << endl;
                fout << dept << endl;
                fout << num << endl;
                fout << age << endl;

                fout.close();
            }
            else if (dept == "Production")
            {
                ofstream fout;
                fout.open("G:/Amash's folder/C++ DSA Bootcamp/File handling texts/Pro.dat", ios::app);

                fout << empid << endl;
                fout << name << endl;
                fout << add << endl;
                fout << dept << endl;
                fout << num << endl;
                fout << age << endl;

                fout.close();
            }
            else if (dept == "IT")
            {
                ofstream fout;
                fout.open("G:/Amash's folder/C++ DSA Bootcamp/File handling texts/IT.dat", ios::app);

                fout << empid << endl;
                fout << name << endl;
                fout << add << endl;
                fout << dept << endl;
                fout << num << endl;
                fout << age << endl;

                fout.close();
            }
        }
        fin.close();
    }
};

int main()
{
    EMPLOYEE E;
    E.emp();
    cout << "Records Managed Successfully !!" << endl;
    return 0;
}

// 10. Write a C++ program to create a file which has information Name, Account number,
// Balance and perform following operations:
// a. Add record
// b. Display content of file
// c. Display name of person having balance > 10,000
#include <iostream>
#include <fstream>
using namespace std;
class Bank
{
private:
    int accno;
    double balance;
    string name;

public:
    void add()
    {
        cout << "How Many Records You Want to Enter : ";
        int ch;
        cin >> ch;
        ofstream fout;
        fout.open("G:/Amash's folder/C++ DSA Bootcamp/File handling texts/Bank.txt", ios::app);
        while (ch--)
        {
            cout << "\nEnter Account No : ";
            cin >> accno;
            fout << accno << endl;

            cout << "Enter Account Holder Name : ";
            cin.sync();
            getline(cin, name);
            fout << name << endl;

            cout << "Enter Account Balance : ";
            cin >> balance;
            fout << balance << endl;
            cout << "______________________________" << endl;
        }
        fout.close();
        cout << "Records Added Successfully" << endl;
    }
    void display()
    {
        ifstream fin;
        fin.open("G:/Amash's folder/C++ DSA Bootcamp/File handling texts/Bank.txt");
        while (!fin.eof())
        {
            fin >> accno;
            cout << "_____________________________________" << endl;
            cout << "Account Number         : " << accno << endl;

            fin.get();
            getline(fin, name);
            cout << "Account Holder Name    : " << name << endl;

            fin >> balance;
            cout << "Account Balance        : " << balance << endl;
            ;
            cout << "_____________________________________" << endl;
        }
        fin.close();
    }
};

int main()
{
    Bank b;
    system("cls");
    cout << "1. Add Record" << endl;
    cout << "2. Display Record" << endl;
    cout << "3. Exit" << endl;
    cout << "Enter your choice : ";
    int ch;
    cin >> ch;
    switch (ch)
    {
    case 1:
        b.add();
        break;

    case 2:
        b.display();
        break;

    case 3:
        exit(0);

    default:
        break;
    }
    return 0;
}
