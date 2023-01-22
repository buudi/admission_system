#ifndef FILTER_H
#define FILTER_H

#include <iostream>
#include <string>

#include "Node.h"
#include "List.h"

#define COURSES_SIZE 5

struct Course{
    string courseName;
    float minimum_cgpa;
} course[COURSES_SIZE];

void filterSingle(Course course[], Node* applicant){
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
                    break;
                }
            }     
        }
    }
    
    if (allocatedChoice == 0){
        cout << "\n We regret to inform you that your application failed, reason being your cgpa doesn't satisfy the minimum required for your choices. code: " << allocatedChoice << endl;
        return;
    } else if (allocatedChoice == 1){
        cout << "\ncode: " << allocatedChoice << " Congratulations you've passed the application and allocated to: " << _choice1 << endl;
        return;
    } else if (allocatedChoice == 2){
        cout << "\ncode: " << allocatedChoice << " Congratulations you've passed the application and allocated to: " << _choice2 << endl;
    } else {
        cout << "\nsome error occured, code: " << allocatedChoice << endl;
    }
}


#endif