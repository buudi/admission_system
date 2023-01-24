#include <iostream>
#include <string>

#include "List.h"
#include "Node.h"

void List::insertHead(Node* item){

    Node* new_node = new Node(
        item->fullName,
        item->age,
        item->cgpa,
        item->choice1,
        item->choice2
    );

    if(isEmpty()){
        head = new_node;
        tail = head;
    } else {
        new_node->next = head;
        head = new_node;
    }
}

void List::insertTail(Node* item){
    Node* new_node = new Node(
        item->fullName,
        item->age,
        item->cgpa,
        item->choice1,
        item->choice2
    );

    if (isEmpty()){
        head = new_node;
        tail = head;
    } else {
        tail->next = new_node;
        tail = new_node;
    }
}

void List::displayList(){
    if(isEmpty()) {
        cout << "Bro what the hell, there is nothing here \n";
        return ;
    } else {
        Node* current = head;
        int num = 0;
        while(current != nullptr){
            cout << ++num << ". " << current->fullName << endl;
            current=current->next;
        }
    }
}

Node* List::return_node_at(int position){
    if (position == 0 || position < 0){
        return head;
    } else {
        Node* current = head;
        for (int i = 1; i <= position; i++)
            current = current->next;
        return current;
    }
    return head;
}

void List::display_node_where(string _fullname){
    
}

Node* List::update_node(string _fullName){
    Node* current = head;
    while(current->fullName != _fullName)
        current = current->next;
    // if(current == nullptr){
    //     cout << "\nNode Not Found (at update_node(string))\n";
    //     return ;
    // }

    // } else {
    //     cout << "\nSome error happened at update_node(string)\n";
    //     return ;
    // }
    return current;
}

Node* List::search_node(string fullName)
{
    Node *current = head;
    while (current != nullptr)
    {
        if (current->fullName == fullName)
        {
            return current;
        }
        current = current->next;
    }
    return nullptr;
}

int List::node_count(){
    int num = 0;
    if(isEmpty()){
        return num;
    } else {
        Node* current = head;
        while(current){
            num++;
            current = current->next;
        }
        return num;
    }
}

int List::accepted_applicants_count()
{
    int num = 0;
    if(isEmpty()){
        return num;
    } else {
        Node* current = head;
        while(current){
            if(current->accepted)
                num++;
            current = current->next;
        }
        return num;
    }
}

void List::displayAcceptedStudents(){
    if(isEmpty()){
        cout << "there are no Applications \n";
        return;
    }
    Node* current = head;
    bool accepted_exist = false;
    int num = 0;
    while(current){
        if(current->accepted){
            accepted_exist = true;
            cout << ++num << ". Student Name: " << current->fullName << endl;
            cout << "   Age: " << current->age << endl;
            cout << "   Allocated Course: " << current->allocatedCourse << endl;
            cout << "   Matric Number: " << current->matricNo << endl << endl;
        }
        current = current->next;
    }
    if(accepted_exist == false){
        cout << "There are no Accepted Applications\n";
        return;
    }
}


void List::deleteHead(){
    if(isEmpty()){
        cout << "there is nothing to remove \n";
        return;
    } else {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}

void List::deleteTail(){
    if(head){
        Node* current = head;
        if (head == tail){
            delete tail;
            head = nullptr;
            head->next = nullptr;
        } else {
            while(current->next != nullptr){
                current = current->next;
            }
            delete tail;
            tail = current;
            current->next = nullptr;
        }
    }   
}