#include <iostream>

class Node{
private:
    std::string data;
    Node *next; //hvorfor privat?
public:
    Node(const std::string &data);
    friend class List;
};

class List{
private:
    Node *head;
    Node *last;
public:
    List();
    void push_front(const std::string&);
    void pop_front();
    void push_back(const std::string&);
    void pop_back();
    unsigned int size();
    Node* find(std::string);
    void insert(Node*, const std::string& data);
    void print();
};