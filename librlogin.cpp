#include <iostream>
#include <conio.h>//Console input/output function Library.
#include <fstream>//To open or close a file.
#include <string>//To work with strings.
#include "functions.h" //User Defined Header File

using namespace std;

 string name, pass;
 string username,password;
int librlogin() 
{
    system("cls");

    bool SuccessfullLogin = false;
    do 
    {
    
        fstream file("Librarian.txt", ios::in);
        cout << "\n\n\n\t To Login Enter given details:" << endl;
        cout << "\n\n\n\t Enter User Name to login:--> ";
        cin >> name;
        cout << "\n\n\n\t Enter Password:--> ";
        char c;

        // This code is for password to be in steric(*) form.

        while ((c = _getch()) != '\r') // \r is use to move the cursor to the beginning of line
        {

            pass += c;
            cout << "*";
        }
        
        while (file) 
        {
            cout << "\t";
            file >> username;
            cout << "\t";
            file >> password;
            if (name.compare(username) == 0) //Comparing Name in text file
            {
                if (pass.compare(password) == 0) //Comparing Password in text file
                {
                    SuccessfullLogin = true;
                }
            }

            if (SuccessfullLogin)
            {
                librinter();    //Moving user to Librinter Face
            }
            

        }
        if (!SuccessfullLogin)
        {

            cout << "\n\n\n\t Enter correct User Name or Password!" << endl;
        }
    } while (!SuccessfullLogin);
    system("cls");

    return 0;
}

