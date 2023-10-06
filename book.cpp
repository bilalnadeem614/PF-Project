#include <iostream>
#include <conio.h> // Console input/output function Library.
#include <fstream> // To open or close a file.
#include <string>  // To work with strings.
#include <cstring>
#include <cstdlib>     // To exit the Program
#include "functions.h" // User Defined Header File

using namespace std;


void booksrch()
{
    system("cls");
    string book_name;
    bool found = false;
    cout << "\n\n\n\t" << endl;
    cout << "\t\t Enter the name of the book:--> ";
    cin.ignore();   // Ignore Previous Input
    getline(cin, book_name);
    

    fstream book_file("books.txt", ios::in);
    if (book_file.is_open())
    {
        string line;
        while (getline(book_file, line))    //Copmare Name of the book one by one to the input
        {
            if (line == book_name)
            {
                found = true;
                break;
            }
        }
        book_file.close();
    }

    else
    {
        cout << "\a Unable to open file....!" << endl;
        return;
    }

    if (found)
    {
        cout << "\t\t\tBook is available" << endl;
    }

    else
    {
        cout << "\a Book is not available....!" << endl;
    }

    string cho;
    cout << "\t\t\tDo you want to Search any other Book???\tY Or N" << endl;
    cout << "\t\t\tEnter your Choice:--> ";
    cho = "";
    cin.ignore();   // Ignore Previous Input
    getline(cin,cho);

    if (cho == "y" || cho == "Y")
    {
        booksrch(); //Call the function again
    }

    else if (cho == "n" || cho == "N")
    {
       exit(0); //Exit the program
    }
    else
    {
        cout << "\a Invalid Input...!" << endl;
    }
    
}

void bookadd()
{
    system("cls");
    string bookname;
    ofstream booksfile("books.txt", ios::app);
    if (!booksfile.is_open())
    {
        cout << "Error opening file!";
        exit(0);
    }

    cout << "\n\t\t\tEnter the name of the book you want to add: ";
    cin.ignore();   // Ignore Previous Input
    getline(cin, bookname);
    booksfile << bookname << endl;
    booksfile.close();
    cout << "\t\t\tBook added successfully!" << endl;

    char cho;

    cout << "Do you want to Add any other Book???\tY Or N" << endl;
    cout << "Enter your Choice:--> ";
    cin >> cho;
    cout << endl;

    if (cho == 'y' || cho == 'Y')
    {
        bookadd(); //Call the function again
    }

    else if (cho == 'n' || cho == 'N')
    {
        exit(0);   //Exit the program
    }
    else
    {
        cout << "\a Invalid Input...!" << endl;
    }
}


