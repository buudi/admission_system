#ifndef TASK3_H
#define TASK3_H

// Filter applicants based on GPA, print the number of accepted students.

#include <cstdlib>
#include "ApplicantsList.h"
#include "Filter.h"
#include "APPLICATIONS_SIZE.h"


void task3(){
    system("CLS");

    cout <<"This is the filter interface\n";
    cout <<"\n>> Filtering applications based on the minimum requirements\n";

	APPLICATIONS_SIZE = applicantsList->node_count();
    for (int i = 0; i < APPLICATIONS_SIZE; i++)
    {
        filter(course, applicantsList->return_node_at(i));
    }

    cout << "\nThere are " << applicantsList->accepted_applicants_count() << " applications passed out of " << applicantsList->node_count() << " total applications";

    cout << "\n\npress Enter to continue ...";
    cin.ignore();
    cin.ignore();

    return;
}

#endif