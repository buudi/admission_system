#ifndef TASK6_H
#define TASK6_H

#include <string>
#include "Node.h"
#include "List.h"

string generateMatric(){
    string part1 = "A23EC0";
    int part2 = rand() % 1000;
    string matric = part1 + to_string(part2);

    return matric;
}

void task6(){
    system("CLS");

    cout << ">>Generating Matric Numbers for Accepted applicants\n";
    
    


    cout << "\n\npress Enter to continue ...";
    cin.ignore();
    cin.ignore();
    return;
}

#endif