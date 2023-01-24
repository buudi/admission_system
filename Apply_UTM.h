#ifndef APPLY_UTM_H
#define APPLY_UTM_H

#include <string>
#include <iostream>
#include "List.h"
#include "Node.h"
#include "ApplicantsList.h"
#include "APPLICATIONS_SIZE.h"

void apply_utm(){

    string courses[] = {
        "Computer Science",
        "Electrical Engineering",
        "Psychology",
        "Information Technology",
        "Business Studies"
    };

    system("CLS");
    cout << "This is the Apply to UTM Interface\n\n";

    string fullname;
    int age;
    float cgpa;
    string choice1;
    string choice2;

    cout << ">> Please Enter your full Name: \n";
    cout << "> ";
    cin.ignore();
    getline(cin, fullname);

    cout << ">> Please Enter your age: \n";
    cout << "> ";
    cin >> age;

    cout << ">> Please Enter your cgpa: \n";
    cout << "> ";
    cin >> cgpa;

    cout << ">> Please select the course of your first choice: \n";
    cout <<"Enter a number from 1-5\n";

    for (int i = 0; i < 5; i++){
        cout << "\n" << i+1 << ". " << courses[i]; 
    }
                    
    int user_input_course_choice1;
    cout << "> ";
    cin >> user_input_course_choice1;
    choice1 = courses[user_input_course_choice1 - 1];

    cout << "\n>> Please select the course of your second choice: \n";
    cout <<">> Enter a number from 1-5\n";
                    
    int user_input_course_choice2;
    cout << "> ";
    cin >> user_input_course_choice2;
    choice2 = courses[user_input_course_choice2 - 1];

    Node* new_application = new Node(fullname, age, cgpa, choice1, choice2);
    applicantsList->insertTail(new_application);

    Node* in_the_list = applicantsList->search_node(fullname);

    cout << "\nApplication submitted successfully!\n";
    cout << "Here is the submitted information: \n";

    cout << "Full Name: " << in_the_list->fullName;
    cout << "\n";

    cout << "Age: " << in_the_list->age;
    cout << "\n";

    cout << "CGPA: " << in_the_list->cgpa;
    cout << "\n";

    cout << "Course first choice: " << in_the_list->choice1;
    cout << "\n";

    cout << "Course second choice: " << in_the_list->choice2;
    cout << "\n";


    cout << "\n\npress Enter to go back ...";
    cin.ignore();
    cin.ignore();
    return;
}

#endif
