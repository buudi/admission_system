#ifndef NODE_H
#define NODE_H

#include <string>
using namespace std;

class Node{ 
    public:
        string fullName;
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

        void setAge(int _age){
            this->age = _age;
        }

        void set_cgpa(float _cgpa){
            this->cgpa = _cgpa;
        }

        void set_choice1(string _choice1){
            this->choice1 = _choice1;
        }
        void set_choice2(string _choice2){
            this->choice2 = _choice2;
        }

        Node(){
            next = nullptr;
        }

        Node(string _fullName, int _age, float _cgpa, string _choice1, string _choice2){
            this->fullName = _fullName;
            this->age = _age;
            this->cgpa = _cgpa;
            this->choice1 = _choice1;
            this->choice2 = _choice2;

            this->next = nullptr;
        }
};

#endif