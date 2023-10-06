#include <iostream>
#include <fstream>
#include <string>
#include "functions.h" //User Defined Header File

using namespace std;

//This stuct is used keep the record of the issued books

struct BookIssued {
    string name;
    string bookname;
    int rollNo;
    string issuanceDate;
    string endingDate;
};

void issueBook()
{
    BookIssued bookIssued;
    fstream outFile("bookReport.txt", ios::app);

        //Gathering the Data to Issue a Book

        cout << "Enter the name of the book:--> ";
        cin.ignore();
        getline(cin,bookIssued.bookname);
        cout << "Enter student name: ";
        cin.ignore();
        getline(cin, bookIssued.name);
        cout << "Enter roll number: ";
        cin >> bookIssued.rollNo;
        cout << "Enter issuance date (dd/mm/yyyy): ";
        cin >> bookIssued.issuanceDate;
        cout << "Enter ending date (dd/mm/yyyy): ";
        cin >> bookIssued.endingDate;
    
    outFile << bookIssued.bookname<<"," << bookIssued.name << "," << bookIssued.rollNo << "," << bookIssued.issuanceDate << "," << bookIssued.endingDate << endl;

    outFile.close();

    cout << "Book issued successfully!" << endl;

    issuemain();

}
void readReport()
{
    system("cls");
    ifstream myfile;

    if (myfile)
    {
        string data;
        myfile.open("bookReport.txt", ios::out);
        if (myfile.is_open()) {                     //Fetching the data from the file
            string data;
            while (getline(myfile, data)) {
                cout << data << " \n";
            }
            myfile.close();
        }
    }
    else
    {
        cout << "Couldn't open file\n";
    }

}


int issuemain()
{
    system("cls");
    int choice;
    cout << "\t\t----------------------------";
    cout << "\n\n\n\t\t\t LIBRARY BOOK ISSUANCE SYSTEM" << endl;
    cout << "\t\t----------------------------" << endl;

    do
    {
        cout << "\n\t\t\t1--> Issue Book" << endl;
        cout << "\n\t\t\t2--> Read Report" << endl;
        cout << "\n\t\t\t3--> Back to Lbrinter" << endl;
        cout << "\n\t\t\tEnter your choice:--> ";
        cin >> choice;

        switch (choice) {
        case 1:
            issueBook();    //Calls the Function for the Issue of Book
            break;
        case 2:
            readReport();  //Calls the Function for Getting the Report
            break;
        case 3:
            librinter();  //Back to Librinter
            break;
        default:
            cout << "Invalid choice! Please try again." << endl;
            break;
        }
    } while (choice != 4);
    return 0;
}