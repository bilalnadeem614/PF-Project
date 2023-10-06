#include <iostream>
#include <conio.h>//Console input/output function Library.
#include <fstream>//To open or close a file.
#include <string>//To work with strings.
#include "functions.h" //User Defined Header File

using namespace std;

void librarian(){

    system("cls");

    int number=0;

    cout<<"<----------------------->";
    cout<<"\n\n\t Welcome"<<endl;
    cout<<"<----------------------->"<<endl;

    while (number != 4)
    {
        cout << "\n\n\n\t  LIBRARIAN INTERFACE " << endl;

        cout<<"\n\n\n\t What do you want???"<<endl;

        cout << "\n\n\n\t 1--> Register a New Account " << endl;
        cout << "\n\n\n\t 2--> Login into Existing Account " << endl;
        cout << "\n\n\n\t 3--> Back to Main Menu " << endl;
        cout << "\n\n\n\t 4--> Exit" << endl;

        cout << "\n\n\n\t Enter your choice:--> ";
        cin >> number;
        system("cls");

        switch (number)
        {
            case 1:
                 reglibr();     // Register New Account
                break;

            case 2:
                librlogin();    //Login into Existing Account
                break;

            case 3:
                menu();         //Back to Main Menu
                break;

            case 4:
               exit(0);         // Exit program


            default:
                 cout << "\n\n\n\t Enter a valid input\a" << endl;
                break;
        }


    }

}