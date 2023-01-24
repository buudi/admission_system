#ifndef FILTER_H
#define FILTER_H

#include <iostream>
#include <string>

#include "Node.h"
#include "List.h"

#define COURSES_SIZE 5

string generateMatric(){
    string part1 = "A23EC0";
    int part2 = rand() % 1000;
    string matric = part1 + to_string(part2);

    return matric;
}

struct Course{
    string courseName;
    float minimum_cgpa;
} course[COURSES_SIZE];

void filter(Course course[], Node* applicant){

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

    string _choice1 = applicant->choice1;
    string _choice2 = applicant->choice2;
    int allocatedChoice = 0;
    for(int i = 0; i < COURSES_SIZE; i++){
        if(course[i].courseName == applicant->choice1)
        {
            if (applicant->cgpa >= course[i].minimum_cgpa)
            {
                allocatedChoice = 1;
                applicant->setAccepted();
                applicant->set_allocated_course(
                    applicant->choice1
                );
                applicant->set_matric(generateMatric());
                break;
            }
        }
    }
    if (allocatedChoice == 0){
        for(int i = 0; i < COURSES_SIZE; i++){
            if(course[i].courseName == applicant->choice2)
            {
                if(applicant->cgpa >= course[i].minimum_cgpa)
                {
                    allocatedChoice = 2;
                    applicant->setAccepted();
                    applicant->set_allocated_course(
                    applicant->choice2
                );
                    applicant->set_matric(generateMatric());
                    break;
                }
            }     
        }
    }
    
    // if (allocatedChoice == 0){
    //     cout << "\n We regret to inform you that your application failed, reason being your cgpa doesn't satisfy the minimum required for your choices. code: " << allocatedChoice << endl;
    //     return;
    // } else if (allocatedChoice == 1){
    //     cout << "\ncode: " << allocatedChoice << " Congratulations you've passed the application and allocated to: " << _choice1 << endl;
    //     return;
    // } else if (allocatedChoice == 2){
    //     cout << "\ncode: " << allocatedChoice << " Congratulations you've passed the application and allocated to: " << _choice2 << endl;
    // } else {
    //     cout << "\nsome error occured, code: " << allocatedChoice << endl;
    // }
}


#endif