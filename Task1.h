#ifndef TASK1_H
#define TASK1_H

// Task 1: Update student information

#include <iostream>
#include <string>
#include <cstdlib>

#include "List.h"
#include "Node.h"
#include "ApplicantsList.h"

using namespace std;

void task1(){
    system("CLS");
    do
    {
        cout << "This is the update student info interface\n\n";

        cout << ">> Please type the student name: \n";
        cout << "> ";

        string studentName;
        cin.ignore();
        getline(cin, studentName);

        Node* current =  applicantsList->return_node_at(0);
        cout << "current: " << current->fullName << ", " << current->age << endl;

        cout << ">> what type of information you want to update: \n";
        cout << ">> please select an option from 1-5\n\n";


        cout << ">> 1. age" << endl;
        cout << ">> 2. cgpa" << endl;
        cout << ">> 3. course first choice" << endl;
        cout << ">> 4. course second choice" << endl;
        cout << ">> 5. Go back to Adminstrator Screen" << endl;
        cout << " " << endl;

        int userChoice;
        cout << "> ";
        cin >> userChoice;

        switch (userChoice) 
        {
            case 1:
                cout << " " << endl;
                cout << ">> This is task 1!" << endl;
                break;
                
            case 2:
                cout << " " << endl;
                cout << ">> This is task 2!" << endl;
                break;
                
            case 3:
                cout << " " << endl;
                cout << ">> This is task 3!" << endl;
                break;
                
            case 4:
                //work in progress
                cout << " " << endl;
                cout << ">> This is task 3!" << endl;
                break;
                
            case 5:
                return ;

            default:
                cout << " " << endl;
                cout << ">> This number is not a part of the selection." << endl;
            }
    } while(true);
    return ;
}

#endif