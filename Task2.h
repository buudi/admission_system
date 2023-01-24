#ifndef TASK2_H
#define TASK2_H

#include <cstdlib>
#include "Node.h"
#include "List.h"
#include "Stack.h"
#include "ApplicantsList.h"
#include "Undo_Stack.h"

void task2(){
    system("CLS");
    cout << "This is the Undo Applicant Info Interface\n";

    if(Undo_Stack->isEmpty()){
        cout << "\n>> There are no changes made to any applicants such that you can undo them\n>> please update applicant info and come back here\n";

        cout << "\n\npress Enter to go back to adminstrator screen ...";
        cin.ignore();
        cin.ignore();
        return;
    }

    StackNode* undo = Undo_Stack->stackTop();

    cout << "\nDo you wish to Undo the latest change to the following: \n";

    cout << ">> Full Name: " << undo->fullName << endl;
    cout << ">> Age: " << undo->age << endl;
    cout << ">> CGPA: " << undo->cgpa << endl;
    cout << ">> Course first choice : " << undo->choice1 << endl;
    cout << ">> Course second choice : " << undo->choice2 << endl;

    cout << "\nEnter (Y/N)\n";
    char userChoice;
    cout << "> ";
    cin >> userChoice;

    if(userChoice == 'Y'|| userChoice == 'y'){
        Node* toUndo = applicantsList->search_node(undo->fullName);
        toUndo->age = undo->age;
        toUndo->cgpa = undo->cgpa;
        toUndo->choice1 = undo->choice1;
        toUndo->choice2 = undo->choice2;

        Undo_Stack->pop();

        cout <<"\nApplicant info change has been undo successfully\n";
    }


    cout << "\n\npress Enter to go back to adminstrator screen ...";
    cin.ignore();
    cin.ignore();
    return;
}


 #endif