#ifndef STACK_H
#define STACK_H

#include <iostream>
#include "Node.h"
using namespace std;


class StackNode{ 
    public:
        string fullName;
        int age;
        float cgpa;
        string choice1;
        string choice2;

        bool accepted = false;
        string allocatedCourse;
        string matricNo;

        StackNode* next;
};

class Stack{
    private:
        StackNode* top;
    public:
        void createStack(){ top = nullptr; }
        void push(Node*);
        void pop();
        // void displayStack();
        StackNode* stackTop() {return top;}
        bool isEmpty() {return (top == nullptr); }
};

void Stack::push(Node* item){
    StackNode* new_node = new StackNode();

    new_node->fullName = item->fullName;
    new_node->age = item->age;
    new_node->cgpa = item->cgpa;
    new_node->choice1 = item->choice1;
    new_node->choice2 = item->choice2;

    new_node->next = top;
    top = new_node;
}

void Stack::pop(){
    if(isEmpty()){
        cout << "stack is empty \n";
        return ;
    } else {
        StackNode* current = top;
        top = current->next;
        delete current;
    }
}


#endif