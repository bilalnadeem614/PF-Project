#include <iostream>
#include <conio.h>//Console input/output function Library.
#include <fstream>//To open or close a file.
#include <string>//To work with strings.
#include <cstdlib>//To exit the Program
#include "functions.h" //User Defined Header File

using namespace std;

void stumenu(){

    system("cls");

    cout<<"<----------------------->"<<endl;
    cout<<"\n\n\t Welcome"<<endl;
    cout<<"<----------------------->"<<endl;

    int choice2=0;

    while (choice2 !=4)
    {
        cout<<"\n\n\n\t Student Interface"<<endl;

        cout<<"\n\n\n\t What do you want???"<<endl;

        cout << "\n\n\n\t 1--> Register a New Account " << endl;
        cout << "\n\n\n\t 2--> Login into Existing Account " << endl;
        cout << "\n\n\n\t 3--> Back to Main Menu " << endl;
        cout << "\n\n\n\t 4--> Exit" << endl;

        cout << "\n\n\n\t Enter your choice:--> ";
        cin>>choice2;

        system("cls");

        switch (choice2)
        {
        case 1:
            stureg();   //Register a new account
            break;

        case 2:
            stulogin();     //Login into Existing Account
            break;

        case 3:
            menu();         //Back to Main Menu
            break;
        case 4:
            exit(0);        //Exit the program
            break;    


        default:
            cout<<"\n\n\n\t Invalid Input!\a"<<endl;
            break;
        }



    }
    






}