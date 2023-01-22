#include <iostream>
#include <string>

#include "Node.h"
#include "List.h"
#include "Filter.h"

using namespace std;

#define APPLICATIONS_SIZE 4
#define COURSES_SIZE 5

// struct Course{
//     string courseName;
//     float minimum_cgpa;
// } course[COURSES_SIZE];

// void filterSingle(Course course[], Node* applicant){
//     string _choice1 = applicant->choice1;
//     string _choice2 = applicant->choice2;
//     int allocatedChoice = 0;
//     for(int i = 0; i < COURSES_SIZE; i++){
//         if(course[i].courseName == applicant->choice1)
//         {
//             if (applicant->cgpa >= course[i].minimum_cgpa)
//             {
//                 allocatedChoice = 1;
//                 applicant->setAccepted();
//                 break;
//             }
//         }
//     }
//     if (allocatedChoice == 0){
//         for(int i = 0; i < COURSES_SIZE; i++){
//             if(course[i].courseName == applicant->choice2)
//             {
//                 if(applicant->cgpa >= course[i].minimum_cgpa)
//                 {
//                     allocatedChoice = 2;
//                     applicant->setAccepted();
//                     break;
//                 }
//             }     
//         }
//     }
    
//     if (allocatedChoice == 0){
//         cout << "\n We regret to inform you that your application failed, reason being your cgpa doesn't satisfy the minimum required for your choices. code: " << allocatedChoice << endl;
//         return;
//     } else if (allocatedChoice == 1){
//         cout << "\ncode: " << allocatedChoice << " Congratulations you've passed the application and allocated to: " << _choice1 << endl;
//         return;
//     } else if (allocatedChoice == 2){
//         cout << "\ncode: " << allocatedChoice << " Congratulations you've passed the application and allocated to: " << _choice2 << endl;
//     } else {
//         cout << "\nsome error occured, code: " << allocatedChoice << endl;
//     }
// }

int main(){

    course[0].courseName = "Computer Science";
    course[0].minimum_cgpa = 3.2; 
    
    course[1].courseName = "Electrical Engineering";
    course[1].minimum_cgpa = 3.5; 
    
    course[2].courseName = "Psychology";
    course[2].minimum_cgpa = 3.0;
    
    course[3].courseName = "Information technology";
    course[3].minimum_cgpa = 2.5; 
    
    course[4].courseName = "Business Studies";
    course[4].minimum_cgpa = 2.0; 

    Node* applications[APPLICATIONS_SIZE] = {
        new Node("Abdullah Yaser", 20, 3.7, "Computer Science", "Information Technology"),
        new Node("Ihab mandi", 65, 1.7, "Information technology", "Business studies"), 
        new Node("Ahmed shawarma", 21, 3.5, "Electrical Engineering", "Computer Science"), 
        new Node("Yamete Kudasai", 18, 2.2, "Psychology", "Business Studies")
    };


    List applicantsList;

    for (int i = 0; i < APPLICATIONS_SIZE; i++)
        applicantsList.insertTail(applications[i]);

    for (int i = 0; i < APPLICATIONS_SIZE; i++){
        cout << "applicant name: " << applications[i]->fullname;
        filterSingle(course, applicantsList.return_node_at(i));
        cout << endl;
    }

    cout << "\n\n\nooopps check this too!\n";
    applicantsList.displayList();

    cout << "\n\npress Enter to continue ...";
    cin.ignore();
    return 0;
}   