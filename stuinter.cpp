#include <iostream>
#include <conio.h>//Console input/output function Library.
#include <fstream>//To open or close a file.
#include <string>//To work with strings.
#include <cstdlib>//To exit the Program
#include "functions.h" //User Defined Header File

using namespace std;


void stuinter(){
    system("cls");
    
    int choice;
    cout<<"\n\n\t\t\tWhat do You want???"<<endl;
    cout<<"\t\t\t1--> Check Book Avalibility"<<endl;
    cout<<"\t\t\t2--> Back to Main Menu"<<endl;
    cout<<"\t\t\t3--> Exit"<<endl;
    cout<<endl;
    cout<<"\t\t\tEnter your Choice:--> ";
    cin>>choice;

    switch (choice)
    {
        case 1:
            booksrch();     //Call the function that Searches the Book
            break;
        case 2:
            menu();         //Back to Main Menu
            break;
        case 3:
            exit(0);        //Exit the program
            break;
        default:
            cout<<"\a Invalid Input!";
            stuinter();     // Again call the function
            break;
    }
}




