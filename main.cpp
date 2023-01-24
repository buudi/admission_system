#include <iostream>
#include <cstdlib>
#include <string>

#include "Node.h"
#include "List.h"
#include "Stack.h"
#include "Filter.h"
#include "Task1.h" // update applicant info
#include "Task3.h" // filter applicant info
#include "Task2.h" // Undo applicant Info
#include "Task4.h" // search applicant info

#include "Apply_UTM.h"

#include "Create_Applicants_List.h"
#include "ApplicantsList.h"
#include "Undo_Stack.h"

using namespace std;

#define COURSES_SIZE 5

List* applicantsList;
Stack* Undo_Stack;

int APPLICATIONS_SIZE;

int main(){ 

    // create the linked list:
    applicantsList = create_applicants_list();

	// create the Undo Stack
	Undo_Stack = new Stack();
	Undo_Stack->createStack();

	APPLICATIONS_SIZE = applicantsList->node_count();

    char userInput;
	int userChoice;
	string studentName;

	while(true){
		system("CLS");
		cout << "UTM STUDENT RECRUITMENT & ADMISSION DIVISION" << endl;
		cout << "(SRAD)" << endl;
    
        cout << ">> Are you an applying student (S) or an adminstrator (A) ?" << endl;
        cout << "> ";
        cin >> userInput;

		if (userInput == 'A' || userInput == 'a') {
			bool runningA = true;
			do {
				system("CLS");
				cout << "UTM STUDENT RECRUITMENT & ADMISSION DIVISION" << endl;
				cout << "(SRAD)" << endl;
				cout << " " << endl;
				cout << ">> Please select a task by typing a number" << endl;
				cout << ">> from 1-5" << endl;
			
				cout << ">> 1. Update Applicant info" << endl;
				cout << ">> 2. Undo to latest change in Applicant info" << endl;
				cout << ">> 3. Filter the Applicants based on thier CGPA " << endl;
				cout << ">> 4. Search for an applicant student info" << endl;
				cout << ">> 5. Display accepted students" << endl;
				cout << ">> 6. Go back to Home Menu" << endl;
				cout << ">> 7. Exit Program" << endl;

				cout << " " << endl;
			
				cout << "> ";
				cin >> userChoice;
				
				switch (userChoice) {
				case 1:
					cout << " " << endl;
					// task1 is in "Task1.h" - Update applicant info
					task1();
					break;
					
				case 2:
					cout << " " << endl;
					task2();
					break;
					
				case 3:
					cout << " " << endl;
					task3();
					break;

				case 4:
					task4();
					break;
					
				case 5:
					system("CLS");
					applicantsList->displayAcceptedStudents();
					cout << "\n\npress Enter to continue ...";
					cin.ignore();
					cin.ignore();
					break;

				case 6:
					runningA = false;
					break;

				case 7:
					return 0;

				default:
					cout << " " << endl;
					cout << ">> This number is not a part of the task selection." << endl;
				}
			}
			while (runningA);
		}

		if (userInput == 'S' || userInput == 's') {
			bool runningB = true;
			do {
				system("CLS");
				cout << "UTM STUDENT RECRUITMENT & ADMISSION DIVISION" << endl;
				cout << "(SRAD)" << endl;
				cout << ">> Please select a task by typing a number" << endl;
				cout << ">> from 1-2" << endl;
				cout << ">> 1. Apply to UTM" << endl;
				cout << ">> 2. Go back to Home Menu" << endl;
				cout << ">> 3. Exit Program" << endl;

				cout << "> ";
				cin >> userChoice;

				switch (userChoice) {
					case 1:
						cout << " " << endl;
						apply_utm();
						break;
					case 2:
						runningB = false;
						break;
					case 3:
						return 0;
					default:
						cout << " " << endl;
						cout << ">> This number is not a part of the task selection." << endl;
				}
			} while(runningB);
		}
	}

    cout << "\n\npress Enter to continue ...";
    cin.ignore();
    return 0;
}   