#include <iostream>
#include <fstream>
#include <string.h>
#include <typeinfo>
using namespace std;
class Code
{
private:
    string code;

public:
    void add()
    {
        cout << "Enter a Statement: ";
        cin.sync();
        getline(cin, code); // Taking the input from the user in the variable code

        ofstream fout;
        fout.open("G:/Amash's folder/C++ DSA Bootcamp/Projects/File Handling/Record's Token.txt", ios::trunc); // Memory location of file can be different in your System
        char *temp = strtok(&code[0], " ");                                                                    // Generating tokens from variable(code), using space(" ") as delimitor & then storing it in a temporary variable
        while (temp != NULL)
        {
            fout << temp << endl;     // Writing a token in our main file named "Record's Token.txt"
            temp = strtok(NULL, " "); // Continuing the process of tokenization until temp becomes NULL
        }
        fout.close();
    }

    void update()
    {
        add(); // Calling the add() to update a record
    }

    void Delete()
    {
        remove("G:/Amash's folder/C++ DSA Bootcamp/Projects/File Handling/Record's Token.txt");
        cout << "Record Deleted SuccessFully" << endl; // Removing our main file from the given memory location
    }

    void read()
    {
        ifstream fin;
        fin.open("G:/Amash's folder/C++ DSA Bootcamp/Projects/File Handling/Record's Token.txt"); // Memory location of file can be different in your System
        cout << "_______________________________\n"
             << endl;
        while (!fin.eof())
        {
            fin.sync();
            getline(fin, code); // Taking a line as input in code
            if (code == "\0")   // Checking Whether code owns '\0' or not bcoz '\0' is taking space in file(Record's Token.txt) as whitespace(" ")
                break;
            if (keyword()) // Checking whether the code is Kewword or not
                cout << code << " IS A KEYWORD" << endl;
            else if (punctuator()) // Checking whether the code is Punctuator or not
                cout << code << " IS A PUNCTUATOR" << endl;
            else if (operators()) // Checking whether the code is Operator or not
                cout << code << " IS AN OPERATOR" << endl;
            else if (identifier(code[0])) // Checking whether the code is Identifier or not
                cout << code << " IS A VALID IDENTIFIER" << endl;
            else if (literal(code)) // Checking whether the code is Literal or not
                cout << code << " IS A LITERAL" << endl;
            else // Checking whether the code is INVALID IDENTIFIER or not
                cout << code << " IS AN INVALID IDENTIFIER" << endl;
        }
        fin.close();
        cout << "_______________________________" << endl;
    }

    // I've created a file named Keyword.txt where all the keywords i've written & here in keyword() i'm just comparing the token(code) with the content of Keyword.txt. If keywords matched then returning true otherwise false
    int keyword()
    {
        ifstream fin;
        fin.open("G:/Amash's folder/C++ DSA Bootcamp/Projects/File Handling/Keyword.txt");
        while (!fin.eof()) // Memory location of file can be different in your System
        {
            string keyword; // Fetching the each line of Keyword.txt & storing it in variable say keyword
            fin.sync();
            getline(fin, keyword);
            if (code == keyword) // Comparing the code(token from Record's Token.txt) with keyword
                return 1;
        }
        fin.close();
        return 0;
    }

    // I've created a file named Punctuator.txt where all the punctuator i've written & here in punctuator() i'm just comparing the token(code) with the content of Punctuator.txt. If punctuators matched then returning true otherwise false
    int punctuator()
    {
        ifstream fin;
        fin.open("G:/Amash's folder/C++ DSA Bootcamp/Projects/File Handling/Punctuator.txt");
        while (!fin.eof()) // Memory location of file can be different in your System
        {
            string punctuator; // Fetching the each line of Punctuator.txt & storing it in variable say punctuator
            fin.sync();
            getline(fin, punctuator);
            if (code == punctuator) // Comparing the code(token from Record's Token.txt) with punctuator
                return 1;
        }
        fin.close();
        return 0;
    }

    // I've created a file named Operator.txt where all the punctuator i've written & here in operators() i'm just comparing the token(code) with the content of Operator.txt. If operators matched then returning true otherwise false
    int operators()
    {
        ifstream fin;
        fin.open("G:/Amash's folder/C++ DSA Bootcamp/Projects/File Handling/Operator.txt");
        while (!fin.eof()) // Memory location of file can be different in your System
        {
            string operators; // Fetching the each line of Operator.txt & storing it in variable say operators
            fin.sync();
            getline(fin, operators);
            if (code == operators) // Comparing the code(token from Record's Token.txt) with operators
                return 1;
        }
        fin.close();
        return 0;
    }

    // I've created a file named Identifier.txt where all the punctuator i've written & here in identifier() i'm just comparing the token(code) with the content of Identifier.txt. If identifier matched then returning true otherwise false
    int identifier(char code)
    {
        ifstream fin;
        fin.open("G:/Amash's folder/C++ DSA Bootcamp/Projects/File Handling/Identifier.txt");
        while (!fin.eof()) // Memory location of file can be different in your System
        {
            char identifier; // Fetching the each line of Identifier.txt & storing it in variable say identifier
            fin.sync();
            fin.get(identifier);
            if (code == identifier) // Comparing the code(token from Record's Token.txt) with identifier
                return 1;
        }
        fin.close();
        return 0;
    }

    // Here in literal() i'm just comparing the token(code) with the content of Literal.txt. If literal matched then returning true otherwise false
    int literal(string code)
    {
        char *c = &code[0];
        int i = 0, len = strlen(&code[0]);
        ifstream fin;
        fin.open("G:/Amash's folder/C++ DSA Bootcamp/Projects/File Handling/Literal.txt");
        while (!fin.eof()) // Memory location of file can be different in your System
        {
            char literal; // Fetching the each line of Literal.txt & storing it in variable say literal
            fin.sync();
            fin.get(literal);
            if (c[i] == literal) // Comparing the code(token from Record's Token.txt) with literal
            {
                if (i == len - 1)
                    return 1;
                i++;
                fin.seekg(0, ios::beg);
                continue;
            }
        }
        fin.close();
        return 0;
    }
};

int main()
{
    Code c;
    system("cls");
    while (1)
    {
        cout << "\n1. Add Record" << endl;
        cout << "2. Update Record" << endl;
        cout << "3. Delete Record" << endl;
        cout << "4. Read Record" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter Your Choice : ";
        int choice;
        cin >> choice;
        cout << endl;
        switch (choice)
        {
        case 1:
            c.add(); // add() will add a record to the Record's Token.txt
            cout << "Record Added Successfully" << endl;
            break;

        case 2:
            c.update(); // update() will update a record in the Record's Token.txt
            cout << "Record Updated Successfully" << endl;
            break;

        case 3:
            c.Delete(); // Delete() will delete a record from the Record's Token.txt
            break;

        case 4:
            c.read(); // read() will read a record from the Record's Token.txt
        default:
            break;
        }
    }
    return 0;
}
