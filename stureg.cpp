#include <iostream>
#include <conio.h>//Console input/output function Library.
#include <fstream>//To open or close a file.
#include <string>//To work with strings.
#include <cstdlib>//To exit the Program
#include "functions.h" //User Defined Header File

using namespace std;

void stureg(){
    string stu_username,stu_password;
    string stu_name,stu_pass;

    system("cls");

    fstream file("student.txt", ios::app);
    cout << "\n\n\n\t To Register Enter given details:" << endl;

    cout << "\n\n\n\t Enter User Name:--> ";
    cin >> stu_username;
    file<<"\n";
    file << stu_username << " ";

    cout << "\n\n\n\t Enter Password:--> ";
    char c;
    while ((c = _getch()) != '\r')  //Runs Untill user hit Enter!
    {
        stu_password += c;
        cout << "*";
    }
    // cout << "\t";
    file << stu_password << endl;
    cout << "\t";
    file.close();
   
    system("cls");

    cout<<"You are Rigestered Successfuly!"<<endl;

    cout<<"Enter--> 1 to Login"<<endl;
    cout<<"Enter--> 2 to Exit"<<endl;

    int ch;
    cout<<"Enter your Choice:--> ";
    cin>>ch;

    switch (ch)
    {
    case 1:
        stulogin();     //Login Menu
        break;
    
    case 2:
        exit(1);    //Exit the program
    
    default:
        cout<<"\a Invalid Input!"<<endl;
        break;
    }


    system("cls");


}