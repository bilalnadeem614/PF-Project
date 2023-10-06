#include <iostream>
#include <conio.h>//Console input/output function Library.
#include <fstream>//To open or close a file.
#include <string>//To work with strings.
#include <cstdlib>//To exit the Program
#include "functions.h" //User Defined Header File

using namespace std;

void librinter(){

    system("cls");
    cout<<"\n<----------------------->";
    cout<<"\n\t\t Welcome"<<endl;
    cout<<"<----------------------->"<<endl;

    cout << "\n\n\n\t  LIBRARIAN INTERFACE" << endl;

    cout<<"\n\n\n\t What do you want???"<<endl;

    int choice;

    cout << "\n\n\n\t1--> Search for a Book" << endl;
    cout << "\n\n\n\t2--> Add Book" << endl;
    cout << "\n\n\n\t3--> Issue Book or Get Report" << endl;
    cout << "\n\n\n\t4--> Back to Main Menu " << endl;
    cout << "\n\n\n\t5--> Exit " << endl;
    cout << "\n\n\n\t Enter your choice:--> ";
    cin>>choice;

    switch (choice)
    {
    case 1:
        booksrch();     //Calls Function for Search of Book
        break;

    case 2:
        bookadd();      //Calls Function for Add Book
        break;
    
    case 3:
        issuemain();    //Calls Function for Issue Book or Get Report
        break;
    
    case 4:
        menu();         //Calls Function for Menu
        break;
    case 5:
        exit(0);        //Exit the program
        break;
    default:
        cout<<"\a Invalid Input"<<endl;
        break;
    }

}