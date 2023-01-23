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

void printApplicantInfo(Node* current){
        cout << "Full name: " << current->fullName << endl;
        cout << "Age: " << current->age << endl;
        cout << "CGPA: " << current->cgpa << endl;
        cout << "Course first choice: " << current->choice1 << endl;
        cout << "Course second choice: " << current->choice2 << "\n\n\n";
}

void task1(){

 string courses[] = {
        "Computer Science",
        "Electrical Engineering",
        "Psychology",
        "Information Technology",
        "Business Studies"
    };

    system("CLS");

    cout << "This is the update Applicant info interface\n\n";

    cout << ">> Please type the number to select an applicant: \n";
    applicantsList->displayList();

    int applicantNo;
    cout << "> ";
    cin >> applicantNo;

    Node* current =  applicantsList->return_node_at(applicantNo - 1);
   
    do
    {
        cout << "\nSelected Applicant: \n";
        printApplicantInfo(current);

        cout << ">> what type of information you want to update: \n";
        cout << ">> please select an option from 1-5\n\n";

        cout << ">> 1. Age" << endl;
        cout << ">> 2. CGPA" << endl;
        cout << ">> 3. Course first choice" << endl;
        cout << ">> 4. Course second choice" << endl <<endl;
        cout << ">> 5. Go back to Adminstrator Screen" << endl;
        cout << " " << endl;

        int userChoice;
        cout << "> ";
        cin >> userChoice;

        switch (userChoice) 
        {
            case 1:
                cout << " " << endl;
                
                cout << ">> You selected option 1. Age" << endl;
                cout << ">> Please type the new Age value: " << endl;
                cout << "> ";
                int new_Age;
                cin >> new_Age;

                current->setAge(new_Age);

                cout << "\nUpdated Applicant Info: \n";
                printApplicantInfo(current);
                cin.ignore();
                break;
                
            case 2:
                cout << " " << endl;
                
                cout << ">> You selected option 2. CGPA" << endl;
                cout << ">> Please type the new CGPA value: " << endl;
                cout << "> ";
                float new_cgpa;
                cin >> new_cgpa;

                current->set_cgpa(new_cgpa);

                cout << "\nUpdated Applicant Info: \n";
                printApplicantInfo(current);
                cin.ignore();
                break;
                
            case 3:
                //work in progress
                cout << " " << endl;
                
                cout << ">> You selected option 3. Course first choice" << endl;
                cout << ">> Please select a new course from the list below: " << endl;

                for (int i = 0; i < 5; i++){
                    cout << "\n" << i+1 << ". " << courses[i]; 
                }
                
                int user_input_course_choice1;
                cout << "\n> ";
                cin >> user_input_course_choice1;

                if(courses[user_input_course_choice1 - 1] == current->choice2){
                    system("CLS");
                    cout << "\ncannot select the same course as the second choice";
                    cin.ignore();
                    break;
                }

                current->set_choice1(courses[user_input_course_choice1 - 1]);

                cout << "\nUpdated Applicant Info: \n";
                printApplicantInfo(current);
                cin.ignore();
                break;
                
            case 4:
                cout << " " << endl;
                
                cout << ">> You selected option 4. Course second choice" << endl;
                cout << ">> Please select a new course from the list below: " << endl;

                for (int i = 0; i < 5; i++){
                    cout << "\n" << i+1 << ". " << courses[i]; 
                }
                
                int user_input_course_choice2;
                cout << "\n> ";
                cin >> user_input_course_choice2;

                if(courses[user_input_course_choice2 - 1] == current->choice1){
                    system("CLS");
                    cout << "\ncannot select the same course as the first choice";
                    cin.ignore();
                    break;
                }

                current->set_choice2(courses[user_input_course_choice2 - 1]);

                cout << "\nUpdated Applicant Info: \n";
                printApplicantInfo(current);
                cin.ignore();
                break;
                
            case 5:
                return ;

            default:
                cout << " " << endl;
                cout << ">> This number is not a part of the selection." << endl;
            }
        
        cout << "\npress Enter to continue ...\n";
        cin.ignore();
        system("CLS");
        
        cout << "do you wish to change something else for this applicant? (Y/N)" << endl;
        char userChoice2;
        cin >> userChoice2;
        if (userChoice2 == 'N' || userChoice2 == 'n') break;

    } while(true);
    return ;
}

#endif