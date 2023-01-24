
#ifndef CREATE_APPLICANTS_LIST_H
#define CREATE_APPLICANTS_LIST_H

#include "Node.h"
#include "List.h"
#include "ApplicantsList.h"

#define SIZE 4

List* create_applicants_list(){
    Node* applications[SIZE] = {
            new Node("Ahmad Saeed", 20, 3.4, "Computer Science", "Information Technology"),
            new Node("Arshad Parvez", 65, 3.9, "Information Technology", "Business Studies"), 
            new Node("Haneen Moemen", 21, 3.8, "Electrical Engineering", "Computer Science"), 
            new Node("Ihab Abdo", 18, 1.7, "Psychology", "Business Studies")

        };

    // inserts nodes into the linked list
    List* applicantsList = new List();
    for (int i = 0; i < SIZE; i++)
        applicantsList->insertTail(applications[i]);
    
    return applicantsList;
}

#endif