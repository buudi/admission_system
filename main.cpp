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
// #include "Task6.h"
#include "Create_Applicants_List.h"
#include "ApplicantsList.h"
#include "Undo_Stack.h"

using namespace std;

#define APPLICATIONS_SIZE 4
#define COURSES_SIZE 5

List* applicantsList;
Stack* Undo_Stack;

int main(){ 

    // create the linked list:
    applicantsList = create_applicants_list();
	// create the Undo Stack
	Undo_Stack = new Stack();
	Undo_Stack->createStack();

    char userInput;
	int userChoice;
	string studentName;

	
	cout << "UTM STUDENT RECRUITMENT & ADMISSION DIVISION" << endl;
	cout << "(SRAD)" << endl;
	
    while(true){
        cout << ">> Are you an applying student (S) or an adminstrator (A) ?" << endl;
        cout << "> ";
        cin >> userInput;
        if(userInput=='A' || userInput=='a')
            break;
    }
	
	if (userInput == 'A' || userInput == 'a') {
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
            cout << ">> 6. Exit program" << endl;
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
                cout << " " << endl;
                return 0;

			default:
				cout << " " << endl;
				cout << ">> This number is not a part of the task selection." << endl;
		    }
		}
		while (true);
    }
    

    cout << "\n\npress Enter to continue ...";
    cin.ignore();
    return 0;
}   