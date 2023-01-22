#ifndef NODE_H
#define NODE_H

#include <string>
using namespace std;

class Node{ 
    public:
        string fullname;
        int age;
        float cgpa;
        string choice1;
        string choice2;

        bool accepted = false;
        string allocatedCourse;
        string matricNo;

        Node* next;

        void setAccepted(){
            this->accepted = true;
        }

        Node(){
            next = nullptr;
        }

        Node(string _fullname, int _age, float _cgpa, string _choice1, string _choice2){
            this->fullname = _fullname;
            this->age = age;
            this->cgpa = _cgpa;
            this->choice1 = _choice1;
            this->choice2 = _choice2;

            this->next = nullptr;
        }
};

#endif