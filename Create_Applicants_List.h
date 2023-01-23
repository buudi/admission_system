
#ifndef CREATE_APPLICANTS_LIST_H
#define CREATE_APPLICANTS_LIST_H

#include "Node.h"
#include "List.h"
#include "ApplicantsList.h"

#define APPLICATIONS_SIZE 4

List* create_applicants_list(){
    Node* applications[APPLICATIONS_SIZE] = {
            new Node("Abdullah Yaser", 20, 3.7, "Computer Science", "Information Technology"),
            new Node("Ihab mandi", 65, 1.7, "Information technology", "Business studies"), 
            new Node("Ahmed shawarma", 21, 3.5, "Electrical Engineering", "Computer Science"), 
            new Node("Yamete Kudasai", 18, 2.2, "Psychology", "Business Studies")
        };

    // inserts nodes into the linked list
    List* applicantsList = new List();
    for (int i = 0; i < APPLICATIONS_SIZE; i++)
        applicantsList->insertTail(applications[i]);
    
    return applicantsList;
}

#endif