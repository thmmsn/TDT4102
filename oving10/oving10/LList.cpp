//
//  LList.cpp
//  oving10
//
//  Created by fredrik on 27/03/15.
//  Copyright (c) 2015 fredrik. All rights reserved.
//
#include <iostream>
#include "LList.h"
using namespace std;

ListNode::ListNode(const string &str){
    value = str;
}

const string& ListNode::getValue() const{
    return value;
}

ListNode* ListNode::getNext() const{
    return next;
}

LinkedList::LinkedList(){
    head = NULL;
    last = head;
}

LinkedList::~LinkedList(){
    if (isEmpty()){
        return;
    }
    
    ListNode* next = head;
    while(next != last){
        ListNode* toBeDeleted = next;
        next = toBeDeleted->next;
        
        delete toBeDeleted;     }
    
    if (next == last)
    {

        delete next;
    }
    
}

bool LinkedList::isEmpty() const{
    if (head == NULL) return true;
    return false;
}

void LinkedList::insertAtFront(const string &val)
{
    ListNode* node = new ListNode(val);
    
    node->next = head;
    if (isEmpty())
    {
        head = node;
        last = node;
        head->next = nullptr;
        return;
    }
    
    
    head = node;
}

void LinkedList::insertAtBack(const string &val)
{
    ListNode* node = new ListNode(val);
    
    if (isEmpty())
    {
        head = node;
        last = node;
        head->next = last;
        return;
    }
    else
    {
        last->next = node;
        last = node;
    }
    node->next = nullptr;
}


bool LinkedList::removeFromFront(string & output) {
    if (head == NULL)
        return false;
    output = head->value;
    ListNode *newHead = head->next;
    delete head;
    
    ListNode* temp = head;
    head = head->next;
    delete temp;
    
    head = newHead;
    if (head == NULL)
        last = NULL;
    return true;
}

bool LinkedList::removeFromBack(string & output) {
    if (last == NULL)
        return false;
    output = last->value;
    ListNode *previousNode = NULL;
    ListNode *thisNode = head;
    while (thisNode->next != NULL) {
        previousNode = thisNode;
        thisNode = thisNode->next;
    }
    delete last;
    last = previousNode;
    if (last == NULL) {
        head = NULL;
    } else {
        last->next = NULL;
    }
    return true;
}

ListNode* LinkedList::search(const string &value) {
    ListNode *thisNode = head;
    while (thisNode != NULL) {
        if (thisNode->value == value) {
            return thisNode;
        }
        thisNode = thisNode->next;
    }
    return NULL;
}

ostream& operator <<(ostream &output, const LinkedList &ll)
{
    ListNode* thisNode = ll.head;
    output << "\t*\t" <<thisNode->getValue() << endl;
    while (thisNode != ll.last)
    {
        thisNode = thisNode->getNext();
        output << "\t* " <<thisNode->getValue() << endl;
    } 
    return output;
}

