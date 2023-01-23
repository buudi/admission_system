#include "Node.h"

#ifndef LIST_H
#define LIST_H

#include <string>

class List{
    private:
        Node* head;
        Node* tail;
    public: 
        List(){head = nullptr; tail = nullptr;}
        bool isEmpty(){return head==nullptr;}
        void insertHead(Node*);
        void insertTail(Node*);
        void displayList();
        Node* returnHead() { return head; }
        Node* returnTail(){return tail;}
        Node* return_node_at(int);
        Node* update_node(string);
        int node_count();
        int accepted_applicants_count();
        void deleteHead();
        void deleteTail();
};

#endif