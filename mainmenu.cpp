#include <iostream>
#include <conio.h>//Console input/output function Library.
#include <fstream>//To open or close a file.
#include <string>//To work with strings.
#include "functions.h" //User Defined Header File

using namespace std;
 
int menu()
{
    cout<<"<----------------------->"<<endl;
    cout<<"\n\n\t Welcome"<<endl;
    cout<<"<----------------------->"<<endl;

    cout<<"\n\n\n\t How do you want to Continue???"<<endl;

    cout << "\n\n\n\t MAIN MENU"<<endl;
    cout << "\n\n\n\t1--> LIBRARIAN"<<endl;
    cout << "\n\n\n\t2--> STUDENT"<<endl;
    cout << "\n\n\n\t3--> EXIT"<<endl;
    cout << "\n\n\n\t PLEASE SELECT YOUR OPTION:--> ";
    int choice;
    cin >> choice;
    system("cls");
    if (choice == 1)
    {
        librarian();    //Move user to Librarian Menu
    }

    else if (choice == 2)
    {
        stumenu();      //Move user to stumenu Menu
    }
    else
    {
        return 1;       //Exit Menu
    }

    return 0;
}

 int main(){
    menu();     //Start Menu
    return 0;
 }