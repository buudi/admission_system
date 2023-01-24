#ifndef TASK4_H
#define TASK4_H
 
// TASK4 --> Search for an Applicant Info given the full name

#include <string>
#include "Node.h"
#include "List.h"
#include "ApplicantsList.h"

void task4(){
    system("CLS");

    cout << "This is the Search Applicant Interface\n\n";

    while(true){

        string _fullName;

        cout << ">>Enter the full name of the applying student to look for: \n";
        cout << "> ";
        cin.ignore();
        getline(cin, _fullName);

        Node* found = applicantsList->search_node(_fullName);

        if(found == nullptr){
            cout << "the applicant was not found in the list\n\n";
        } else {
            cout << _fullName << " exists in the list: \n";
            cout << "Age: " << found->age << endl;
            cout << "CGPA: " << found->cgpa << endl;
            cout << "Course First Choice: " << found->choice1 << endl;
            cout << "Course Second Choice: " << found->choice2 << endl;
        }


        char userChoice;
        cout <<"\n" << ">>Do you wish to search for another applicant? (Y/N)\n";
        cout << ">";
        cin >> userChoice;

        if(userChoice == 'N' || userChoice == 'n') break;
    }
    cout << "\n\npress Enter to go back to adminstrator screen ...";
    cin.ignore();
    return;
}

#endif