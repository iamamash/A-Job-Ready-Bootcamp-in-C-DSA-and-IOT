// 1. Define a class Person with instance members name and age. Also define member
// functions setName(), setAge(), getName(), getAge(). Now define class Employee by
// inheriting Person class. In the Employee class define empid and salary as instance
// members. Also define setEmpid, setSalary, getEmpid, getSalary.
#include <iostream>
using namespace std;
class Person
{
private:
    string name;
    int age;

public:
    void setName(string s)
    {
        name = s;
    }
    void setAge(int a)
    {
        age = a;
    }
    void getName()
    {
        cout << "Name is : " << name << endl;
    }
    void getAge()
    {
        cout << "Age is : " << age << endl;
    }
};

class Employee : public Person
{
private:
    int empid;
    float salary;

public:
    void setEmpid(int id)
    {
        empid = id;
    }
    void setSalary(float s)
    {
        salary = s;
    }
    void getEmpid()
    {
        cout << "Id is : " << empid << endl;
    }
    void getSalary()
    {
        cout << "Salary is : " << salary << endl;
    }
};

int main()
{
    Person p;
    Employee e;
    p.setAge(20);
    p.setName("Amash");
    e.setAge(22);
    e.setName("Chota Bheem");
    p.getAge();
    p.getName();
    e.getAge();
    e.getName();
    return 0;
}

// 2. Write a C++ program to add two numbers using single inheritance. Accept these two
// numbers from the user in base class and display the sum of these two numbers in
// derived class.
#include <iostream>
using namespace std;
class A
{
private:
    int a, b;

public:
    void setData()
    {
        cin >> a >> b;
    }
    int getA()
    {
        return a;
    }
    int getB()
    {
        return b;
    }
};

class B : public A
{
public:
    void display(A a)
    {
        cout << "Sum is : " << a.getA() + a.getB() << endl;
    }
};

int main()
{
    A a;
    cout << "Enter values for a & b:" << endl;
    a.setData();
    B b;
    b.display(a);
    return 0;
}

// 3. Write a C++ program to calculate the percentage of a student using multi-level
// inheritance. Accept the marks of three subjects in base class. A class will be derived
// from the above mentioned class which includes a function to find the total marks
// obtained and another class derived from this class which calculates and displays the
// percentage of students.
#include <iostream>
using namespace std;
class Marks
{
private:
    int py, ch, math;

public:
    void setMarks()
    {
        cin >> py >> ch >> math;
    }
    int getMarks()
    {
        return (py + ch + math);
    }
};

class TotalMarks : public Marks
{
public:
    int total(Marks m)
    {
        int total = m.getMarks();
        return total;
    }
};

class Percentage : public TotalMarks
{
public:
    void percentage(int t)
    {
        cout << "Percentage is : " << t / 3 << "%" << endl;
    }
};

int main()
{
    Marks m;
    cout << "Enter the marks for physics, chemistry & mathematics:" << endl;
    m.setMarks();
    TotalMarks t;
    int total = t.total(m);
    Percentage p;
    p.percentage(total);
    return 0;
}

// 4. Write a C++ program to design a base class Person (name, address,
// phone_no). Derive a class Employee (eno, ename) from Person. Derive a
// class Manager (designation, department name, basic-salary) from
// Employee. Write a menu driven program to:
// a. Accept all details of 'n' managers.
// b. Display manager having highest salary
// Output -
#include <iostream>
using namespace std;
class Persons
{
private:
    string name, add;
    long long num;

public:
    string getName()
    {
        return name;
    }
    string getAdd()
    {
        return add;
    }
    int getNo()
    {
        return num;
    }

    void setName(string n)
    {
        name = n;
    }
    void setAdd(string a)
    {
        add = a;
    }
    void setNo(long long int n)
    {
        num = n;
    }
};

class Employees : public Persons
{
private:
    string ename;
    int eno;

public:
    int getEmpNo()
    {
        return eno;
    }
    void setEmpNo(int e)
    {
        eno = e;
    }
};

class Manager : public Employees
{
private:
    string designation, departmentName;
    long long salary;

public:
    void setDesignation(string d)
    {
        designation = d;
    }
    void setSalary(long long s)
    {
        salary = s;
    }
    void setDepartment(string d)
    {
        departmentName = d;
    }

    string getDesignation()
    {
        return designation;
    }
    long long getSalary()
    {
        return salary;
    }
    string getDepartment()
    {
        return departmentName;
    }
};

int main()
{
    int size, i = 0;
    cout << "How Many Managers You Want to Enter: ";
    cin >> size;
    Manager records[size];
    system("cls");
    while (size--)
    {
        cout << "\nEnter details of manager " << i + 1 << endl;
        cout << "_________________________" << endl;
        cout << "\nEnter Employee no : ";
        int empno;
        cin >> empno;
        records[i].setEmpNo(empno);

        cout << "Enter Name : ";
        string name;
        cin.sync();
        getline(cin, name);
        cin.sync();
        records[i].setName(name);

        cout << "Enter Address : ";
        string add;
        cin.sync();
        getline(cin, add);
        cin.sync();
        records[i].setAdd(add);

        cout << "Enter Phone No. : ";
        long long num;
        cin.sync();
        cin >> num;
        records[i].setNo(num);

        cout << "Enter Designation : ";
        string desig;
        cin.sync();
        getline(cin, desig);
        cin.sync();
        records[i].setDesignation(desig);

        cout << "Enter Department Name : ";
        string dep;
        cin.sync();
        getline(cin, dep);
        cin.sync();
        records[i].setDepartment(dep);

        cout << "Enter Basic Salary : ";
        long long s;
        cin >> s;
        records[i].setSalary(s);
        ++i;
    }
    long long max = records[0].getSalary();
    string name = records[0].getName();
    for (int i = 0; i < size; i++)
    {
        if (records[i].getSalary() > max)
        {
            max = records[i].getSalary();
            name = records[i].getName();
        }
    }
    cout << "\nManager with Highest Salary is : " << max << endl;
    cout << "And, Manager name is : " << name << endl;
    return 0;
}

// 5. Write a C++ program to define a base class Item (item-no, name, price).
// Derive a class Discounted-Item (discount-percent). A customer purchases
// 'n' items. Display the item-wise bill and total amount using appropriate
// format.
// Output -
#include <iostream>
using namespace std;
class Item
{
private:
    string itemName;
    int itemNo;
    float price;

public:
    void setName(string n)
    {
        itemName = n;
    }
    void setNo(int n)
    {
        itemNo = n;
    }
    void setPrice(float p)
    {
        price = p;
    }
    string getName()
    {
        return itemName;
    }
    int getNo()
    {
        return itemNo;
    }
    float getPrice()
    {
        return price;
    }
};

class Discount : public Item
{
private:
    int discountedPrice;

public:
    void setDiscount(int d)
    {
        discountedPrice = d;
    }
    int getDiscount()
    {
        return discountedPrice;
    }
};

int main()
{
    int size, i = 0, temp;
    cout << "How many items you want to enter: ";
    cin >> size;
    temp = size;
    Discount items[size];
    system("cls");
    while (size--)
    {
        cout << "\nEnter Item Name : ";
        string name;
        cin.sync();
        getline(cin, name);
        items[i].setName(name);

        cout << "Enter Item No : ";
        int no;
        cin >> no;
        items[i].setNo(no);

        cout << "Enter Item Price : ";
        float p;
        cin >> p;
        items[i].setPrice(p);

        cout << "Enter Discount Percent : ";
        int d;
        cin >> d;
        cout << "_____________________" << endl;
        d = (items[i].getPrice() * d) / 100;
        d = items[i].getPrice() - d;
        items[i].setDiscount(d);
        ++i;
    }
    int totalPrice = 0, totalDiscount = 0;
    for (int i = 0; i < temp; i++)
    {
        cout << "\nItem-Name : " << items[i].getName() << endl;
        cout << "Item-No : " << items[i].getNo() << endl;
        totalPrice += items[i].getPrice();
        cout << "Item-Price : " << items[i].getPrice() << endl;
        totalDiscount += items[i].getPrice() - items[i].getDiscount();
        cout << "Discounted-Price : " << items[i].getDiscount() << endl;
        cout << "____________________" << endl;
    }
    cout << "\nTotal-Price : " << totalPrice << endl;
    cout << "Total-Discount : " << totalDiscount << endl;
    return 0;
}

// 6. Write a C++ program to demonstrate how a common friend function can
// be used to exchange the private values of two classes. (Use call by
// reference method).
#include <iostream>
using namespace std;
class Demo2;
class Demo1
{
private:
    int a = 10;

public:
    friend void swap(Demo1, Demo2);
};

class Demo2
{
private:
    int b = 20;

public:
    friend void swap(Demo1, Demo2);
};

void swap(Demo1 d1, Demo2 d2)
{
    cout << "Before : "
         << "a = " << d1.a << " , b = " << d2.b << endl;
    int temp = d1.a;
    d1.a = d2.b;
    d2.b = temp;
    cout << "After : "
         << "a = " << d1.a << " , b = " << d2.b << endl;
}

int main()
{
    Demo1 obj1;
    Demo2 obj2;
    swap(obj1, obj2);
    return 0;
}

// 7. Write class declarations and member function definitions for a C++ base
// class to represent an Employee (emp-code, name).
// Derive two classes as Fulltime (daily rate, number of days, salary) and
// Parttime (number of working hours, hourly rate, salary).
// Write a menu driven program to:
// 1. Accept the details of ‘n’ employees.
// 2. Display the details of ‘n’ employees.
// 3. Search a given Employee by emp-code.
// Output -
#include <iostream>
using namespace std;
class EMPLOYEE
{
private:
    int empNo;
    float salary;
    string empName, status;

public:
    int getNo()
    {
        return empNo;
    }
    float getSalary()
    {
        return salary;
    }
    string getName()
    {
        return empName;
    }
    string getStatus()
    {
        return status;
    }
    void setNo(int n)
    {
        empNo = n;
    }
    void setSalary(float n)
    {
        salary = n;
    }
    void setName(string n)
    {
        empName = n;
    }
    void setStatus(string n)
    {
        status = n;
    }
};

int main()
{
    system("cls");
    while (1)
    {
        cout << "\n1. Enter Record" << endl;
        cout << "2. Display Record" << endl;
        cout << "3. Search Record" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice : ";
        int choice, i = 0, temp, count = 0;
        cin >> choice;
        EMPLOYEE emp[5];
        switch (choice)
        {
        case 1:
            cout << "How Many Records You Want to Enter : ";
            int size, temp;
            cin >> size;
            temp = size;
            while (size--)
            {
                cout << "\nEnter Employee Number : ";
                int no;
                cin >> no;
                emp[i].setNo(no);

                cout << "Enter Employee Name : ";
                string name;
                cin.get();
                getline(cin, name);
                emp[i].setName(name);

                cout << "Enter Employee Salary : ";
                float s;
                cin >> s;
                emp[i].setSalary(s);

                cout << "Enter Employee Status : ";
                string st;
                cin.sync();
                getline(cin, st);
                emp[i].setStatus(st);
                cout << "____________________" << endl;
                ++i;
            }
            break;

        case 2:
            for (int i = 0; i < temp; i++)
            {
                cout << "\n_____________________________________" << endl;
                cout << "Employee Number    : " << emp[i].getNo() << endl;
                cout << "Employee Name      : " << emp[i].getName() << endl;
                cout << "Salary             : " << emp[i].getSalary() << endl;
                cout << "Status             : " << emp[i].getStatus() << endl;
                cout << "_____________________________________" << endl;
            }
            break;

        case 3:
            cout << "Enter Employee Code : ";
            int code;
            cin >> code;
            for (int i = 0; i < temp; i++)
            {
                if (emp[i].getNo() == code)
                {
                    count = 1;
                    cout << "\n_____________________________________" << endl;
                    cout << "Employee Number    : " << emp[i].getNo() << endl;
                    cout << "Employee Name      : " << emp[i].getName() << endl;
                    cout << "Salary             : " << emp[i].getSalary() << endl;
                    cout << "Status             : " << emp[i].getStatus() << endl;
                    cout << "_____________________________________" << endl;
                    break;
                }
            }
            if (count == 0)
                cout << "\nEmployee Not Found !!" << endl;
            break;

        case 4:
            exit(0);
        default:
            cout << "INVALID CHOICE !!" << endl;
            break;
        }
    }
    return 0;
}

// 8 - In a bank, different customers have savings account. Some customers may
// have taken a loan from the bank. So bank always maintain information about
// bank depositors and borrowers.
// Design a Base class Customer (name, phone-number). Derive a class
// Depositor(accno, balance) from Customer.
// Again, derive a class Borrower (loan-no, loan-amt) from Depositor.
// Write necessary member functions to read and display the details of ‘n’
// customers.
// Output -
#include <iostream>
using namespace std;
class Customer
{
private:
    string name;
    long long no;

public:
    void setName(string n)
    {
        name = n;
    }
    void setNo(long long n)
    {
        no = n;
    }
    string getName()
    {
        return name;
    }
    long long getNo()
    {
        return no;
    }
};

class Depositor : public Customer
{
private:
    int accNo;
    float bal;

public:
    void setAcc(int n)
    {
        accNo = n;
    }
    void setBal(float b)
    {
        bal = b;
    }
    int getAcc()
    {
        return accNo;
    }
    float getBal()
    {
        return bal;
    }
};

class Borrower : public Depositor
{
private:
    int loanNo;
    float amt;

public:
    void setLoan(int l)
    {
        loanNo = l;
    }
    void setAmt(float a)
    {
        amt = a;
    }
    int getLoan()
    {
        return loanNo;
    }
    float getAmt()
    {
        return amt;
    }
};

int main()
{
    cout << "Enter the No of Customer Details You Want : ";
    int size, i = 0;
    cin >> size;
    int temp = size;
    Borrower b[size];
    while (size--)
    {
        cout << "\nEnter Customer Name : ";
        string name;
        cin.sync();
        getline(cin, name);
        b[i].setName(name);

        cout << "Enter Customer Phone No : ";
        long long no;
        cin >> no;
        b[i].setNo(no);

        cout << "Enter Customer A/C Numeber : ";
        int acc;
        cin >> acc;
        b[i].setAcc(acc);

        cout << "Enter Balance : ";
        int bal;
        cin >> bal;
        b[i].setBal(bal);

        cout << "Enter Loan No : ";
        int loanNo;
        cin >> loanNo;
        b[i].setLoan(loanNo);

        cout << "Enter Loan Amount : ";
        int loanAmt;
        cin >> loanAmt;
        b[i].setAmt(loanAmt);
        cout << "___________________________________" << endl;
        i++;
    }
    system("cls");
    for (int i = 0; i < temp; i++)
    {
        cout << "Details of Customer " << i + 1 << endl;
        cout << "___________________________________" << endl;
        cout << "Customer Name      :" << b[i].getName() << endl;
        cout << "Customer Phone No  :" << b[i].getNo() << endl;
        cout << "Customer A/C No    :" << b[i].getAcc() << endl;
        cout << "Balance            :" << b[i].getBal() << endl;
        cout << "___________________________________" << endl;
        cout << "Loan No            : " << b[i].getLoan() << endl;
        cout << "Amount             : " << b[i].getAmt() << endl;
        cout << "___________________________________" << endl;
    }
    return 0;
}

// 9. Write a C++ program to implement the following class hierarchy:
// Student: id, name
// StudentExam (derived from Student): Marks of 6 subjects
// StudentResult (derived from StudentExam) : percentage
// Define appropriate functions to accept and display details.
// Create 'n' objects of the StudentResult class and display the marklist.
// Output -
#include <iostream>
using namespace std;
class Student
{
private:
    string name;
    int id;

public:
    void setName(string n)
    {
        name = n;
    }
    void setId(int i)
    {
        id = i;
    }
    string getName()
    {
        return name;
    }
    int getId()
    {
        return id;
    }
};

class StudentExam : public Student
{
private:
    int s1, s2, s3, s4, s5, s6;

public:
    void setS1(int s)
    {
        s1 = s;
    }
    void setS2(int s)
    {
        s2 = s;
    }
    void setS3(int s)
    {
        s3 = s;
    }
    void setS4(int s)
    {
        s4 = s;
    }
    void setS5(int s)
    {
        s5 = s;
    }
    void setS6(int s)
    {
        s6 = s;
    }
    int getS1()
    {
        return s1;
    }
    int getS2()
    {
        return s2;
    }
    int getS3()
    {
        return s3;
    }
    int getS4()
    {
        return s4;
    }
    int getS5()
    {
        return s5;
    }
    int getS6()
    {
        return s6;
    }
};

class StudentResult : public StudentExam
{
private:
    float per;

public:
    void setPer(float p)
    {
        per = p;
    }
    float getPer()
    {
        return per;
    }
};

int main()
{
    cout << "Enter the Number of Students You Want : ";
    int size, i = 0;
    float total = 0;
    cin >> size;
    int temp = size;
    StudentResult s[size];
    while (size--)
    {
        cout << "Enter Rollno: ";
        int roll;
        cin >> roll;
        s[i].setId(roll);

        cout << "Enter Name: ";
        string name;
        cin.sync();
        getline(cin, name);
        s[i].setName(name);

        cout << "Enter Marks for Subject 1: ";
        int s1;
        cin >> s1;
        total += s1;
        s[i].setS1(s1);

        cout << "Enter Marks for Subject 2: ";
        int s2;
        cin >> s2;
        total += s2;
        s[i].setS2(s2);

        cout << "Enter Marks for Subject 3: ";
        int s3;
        cin >> s3;
        total += s3;
        s[i].setS3(s3);

        cout << "Enter Marks for Subject 4: ";
        int s4;
        cin >> s4;
        total += s4;
        s[i].setS4(s4);

        cout << "Enter Marks for Subject 5: ";
        int s5;
        cin >> s5;
        total += s5;
        s[i].setS5(s5);

        cout << "Enter Marks for Subject 6: ";
        int s6;
        cin >> s6;
        total += s6;
        s[i].setS6(s6);

        total = total / 6;
        s[i].setPer(total);
        ++i;
    }
    system("cls");
    cout << "___________________________________________" << endl;
    cout << "\n************ Student Marklist ************" << endl;
    cout << "___________________________________________" << endl;
    for (int i = 0; i < temp; i++)
    {
        cout << "Roll No                :" << s[i].getId() << endl;
        cout << "Name                   :" << s[i].getName() << endl
             << endl;
        cout << "Marks of Subject 1     :" << s[i].getS1() << endl;
        cout << "Marks of Subject 2     :" << s[i].getS2() << endl;
        cout << "Marks of Subject 3     :" << s[i].getS3() << endl;
        cout << "Marks of Subject 4     :" << s[i].getS4() << endl;
        cout << "Marks of Subject 5     :" << s[i].getS5() << endl;
        cout << "Marks of Subject 6     :" << s[i].getS6() << endl
             << endl;
        cout << "Total Percentage       :" << s[i].getPer() << endl;
        cout << "___________________________________________" << endl
             << endl;
    }
    return 0;
}

// 10. Consider two base classes
// worker(int code, char name, float salary),
// officer(float DA, HRA)
// class manger(float TA(is 10% of salary), gross salary) is derived from both base
// classes.
// Write necessary member functions.
// Output -
#include <iostream>
using namespace std;
class Worker
{
private:
    int code;
    string name;
    float salary;

public:
    void setCode(int c)
    {
        code = c;
    }
    void setName(string n)
    {
        name = n;
    }
    void setSalary(float f)
    {
        salary = f;
    }
    int getCode()
    {
        return code;
    }
    string getName()
    {
        return name;
    }
    float getSalary()
    {
        return salary;
    }
};

class Officer
{
private:
    float DA, HRA;

public:
    void setDA(float d)
    {
        DA = d;
    }
    void setHRA(float h)
    {
        HRA = h;
    }
    float getDA()
    {
        return DA;
    }
    float getHRA()
    {
        return HRA;
    }
};

class Managers : public Worker, public Officer
{
private:
    float TA;

public:
    void setTA(float t)
    {
        TA = t;
    }
    float getTA()
    {
        return TA;
    }
};

int main()
{
    cout << "Enter Manager Count: ";
    int size, i = 0;
    cin >> size;
    int temp = size;
    Managers m[size];
    cout << "Enter Worker Information for " << size << endl;
    while (size--)
    {
        cout << "Enter Code : ";
        int code;
        cin >> code;
        m[i].setCode(code);

        cout << "Enter Name : ";
        string name;
        cin.sync();
        getline(cin, name);
        m[i].setName(name);

        cout << "Enter Salary : ";
        float salary;
        cin >> salary;
        m[i].setSalary(salary);

        cout << "Enter DA : ";
        float da, ta;
        cin >> da;
        m[i].setDA(da);

        cout << "Enetr HRA : ";
        float hra;
        cin >> hra;
        m[i].setHRA(hra);

        ta = salary / 10;
        m[i].setTA(ta);
        i++;
    }
    cout << "_______________________________________" << endl;
    cout << "\nManager Information" << endl;
    cout << "_______________________________________" << endl;
    for (int i = 0; i < temp; i++)
    {
        cout << "Code           :" << m[i].getCode() << endl;
        cout << "Name           :" << m[i].getName() << endl;
        cout << "Salary         :" << m[i].getSalary() << endl;
        cout << "DA             :" << m[i].getDA() << endl;
        cout << "HRA            :" << m[i].getHRA() << endl;
        cout << "TA             :" << m[i].getTA() << endl;
        cout << "Gross Salary   :" << m[i].getSalary() + m[i].getTA() + m[i].getDA() + m[i].getHRA() << endl;
    }
    return 0;
}
