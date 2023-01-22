#include "Node.h"

#ifndef LIST_H
#define LIST_H

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
        void deleteHead();
        void deleteTail();
};

#endif