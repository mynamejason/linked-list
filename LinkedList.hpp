#ifndef LinkedList_hpp
#define LinkedList_hpp

#include <iostream>

template <typename T>
struct Node {
    T value;
    Node* next = nullptr;
};

template <typename T>
class LinkedList {
public:
    LinkedList();
    ~LinkedList();
    int size() const;
    void add(T inputT);
    void addAt(T inputT, int index);
    T popFront();
    T popBack();
    void print();
private:
    int count_;
    Node<T> *head_;
    Node<T> *tail_;
};

#include "LinkedList.cpp"
#endif