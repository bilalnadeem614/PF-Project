#include <iostream>
#include <conio.h>//Console input/output function Library.
#include <fstream>//To open or close a file.
#include <string>//To work with strings.
#include <cstdlib>//To exit the Program
#include "functions.h" //User Defined Header File

using namespace std;

void stulogin(){
    string stu_username,stu_password;
    string stu_name,stu_pass;

    system("cls");

    bool SuccessfullLogin = false;

    do 
    {
    
        fstream file("student.txt", ios::in);
        cout << "\n\n\n\t To Login Enter given details:" << endl;
        cout << "\n\n\n\t Enter User Name to login:--> ";
        cin >> stu_name;
        cout << "\n\n\n\t Enter Password:--> ";
        char c;

        // This code is for password to be in steric(*) form.

        while ((c = _getch()) != '\r') // \r is use to move the cursor to the beginning of line
        {

            stu_pass += c;
            cout << "*";
        }
        
        while (file) 
        {
            cout << "\t";
            file >> stu_username;
            cout << "\t";
            file >> stu_password;
            if (stu_name.compare(stu_username) == 0) //Comparing Name in text file
            {
                if (stu_pass.compare(stu_password) == 0) //Comparing Password in text file
                {
                    SuccessfullLogin = true;
                }
            }

            if (SuccessfullLogin)
            {
                stuinter();     //Move the user to the Student Menu
            }
            

        }
        if (!SuccessfullLogin)
        {

            cout << "\n\n\n\t Enter correct User Name or Password!" << endl;
        }
    } while (!SuccessfullLogin);
    system("cls");

}