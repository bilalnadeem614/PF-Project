#include <iostream>
#include <conio.h>//Console input/output function Library.
#include <fstream>//To open or close a file.
#include <string>//To work with strings.
#include <cstdlib>//To exit the Program
#include "functions.h" //User Defined Header File

using namespace std;

 //string name, pass;
 
int reglibr()
{
    string username,password;
    system("cls");

    fstream file("Librarian.txt", ios::app);
    cout << "\n\n\n\t To Register Enter given details:" << endl;
    //To Register Enter given details and Store the result in a file
    cout << "\n\n\n\t Enter User Name:--> ";
    cout << "\t";
    cin >> username;
    file<<"\n";
    file << username << " ";
    cout << "\n\n\n\t Enter Password:--> ";
    char c;
    while ((c = _getch()) != '\r')  //Runs Untill user hit Enter!
    {
        password += c;
        cout << "*";
    }
    cout << "\t";
    file << password << endl;  
    cout << "\t";
    file.close();

    system("cls");

    cout<<"You are Rigestered Successfuly!"<<endl;

    cout<<"Enter--> 1 to Login"<<endl;
    cout<<"Enter--> 2 to Exit"<<endl;

    int c2;
    cout<<"Enter your Choice:--> ";
    cin>>c2;

    switch (c2)
    {
    case 1:
        librlogin();    //Move to Login
        break;
    
    case 2:
        exit(0);        //Exit the program
    
    default:
        cout<<"\a Invalid Input!"<<endl;
        break;
    }
   
    system("cls");
    return 0;
}