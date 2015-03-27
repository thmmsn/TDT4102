//
//  LList.h
//  oving10
//
//  Created by fredrik on 27/03/15.
//  Copyright (c) 2015 fredrik. All rights reserved.
//

#ifndef __oving10__LList__
#define __oving10__LList__
#include <string>
#include <stdio.h>
using namespace std;

class ListNode {
private:
    string value;
    ListNode *next;
public:
    ListNode(const string& value);
    const string& getValue() const;
    ListNode* getNext() const;
    friend class LinkedList;
};

class LinkedList {
private:
    ListNode *head;
    ListNode *last;
public:
    LinkedList();
    ~LinkedList();
    bool isEmpty() const;
    void insertAtFront(const string & elem);
    void insertAtBack(const string & elem);
    bool removeFromFront(string & output);
    bool removeFromBack(string & output);
    ListNode* search(const string &value);
    friend ostream & operator<<(ostream & stream, const LinkedList & list );
    void remove(const string &value);

};


#endif /* defined(__oving10__LList__) */
