#include <iostream>
#include <cstdlib>
#include <string>

#include "Node.h"
#include "List.h"
#include "Filter.h"
#include "Task1.h"
#include "Task2.h"
#include "Create_Applicants_List.h"
#include "ApplicantsList.h"

using namespace std;

#define APPLICATIONS_SIZE 4
#define COURSES_SIZE 5

List* applicantsList;

int main(){ 

    // create the linked list:
    applicantsList = create_applicants_list();

    char userInput;
	int userChoice;
	string studentName;

	
	cout << "UTM STUDENT RECRUITMENT & ADMISSION DIVISION" << endl;
	cout << "(SRAD)" << endl;
	
    while(true){
        cout << ">> Are you a student (S) or an adminstrator (A) ?" << endl;
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
		    cout << ">> 2. Filter student info (GPA)" << endl;
		    cout << ">> 3. Search student info" << endl;
		    cout << ">> 4. Display accepted students" << endl;
		    cout << ">> 5. Generate matric number" << endl;
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
				cout << ">> Enter the student's full name:- " << endl;
					cout << "> ";
				cin >> studentName;
				
				//code for the task (linked list) should start here.
				//this is just a filler, it isn't the actual code.
				cout << " " << endl;
				cout << "sike, you get nothin >:-]" << endl;
				//note: try to look for "main menu" references.
				//for the "yes or no" options.
				break;
				
			case 4:
				//work in progress
				cout << " " << endl;
				// cout << ">> There are "; << noStudent << " accepted students." << endl;
				cout << " " << endl;
				//there should be a loop here that will display a list of accepted students.
				
				//note: try to look for "main menu" references.
				//for the "yes or no" options.
				break;
				
			case 5:
				cout << " " << endl;
				cout << ">> This is task 5!" << endl;
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