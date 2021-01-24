#include "LinkedList.hpp"

template <typename T>
LinkedList<T>::LinkedList() {
    count_ = 0;
    head_ = nullptr;
    tail_ = nullptr;
}

template <typename T>
LinkedList<T>::~LinkedList() {
    count_ = 0;
    head_ = nullptr;
    tail_ = nullptr;
}

template <typename T>
int LinkedList<T>::size() const {
    return count_;
}

template <typename T>
void LinkedList<T>::add(T inputT) {
    Node<T> *tempNode = new Node<T> { inputT };

    if(head_ == nullptr && tail_ == nullptr) {
        head_ = tempNode;
    } else {
        tail_ -> next = tempNode;
    }

    tail_ = tempNode;
    count_++;
}

template <typename T>
void LinkedList<T>::print() {
    if(head_ != nullptr) {
        Node<T> *tempNode = head_;

	    while(tempNode != nullptr) {
            std::cout << tempNode -> value << std::endl;
		    tempNode = tempNode -> next;
	    }
    }
}

template <typename T>
void LinkedList<T>::addAt(T inputT, int index) {
    Node<T> *newNode = new Node<T> { inputT };

    if(index == 0) {
        newNode -> next = head_;
        head_ = newNode;
    } else if(index <= count_) {
        Node<T> *tempNode = head_;

        for(int i = 0; i < index - 1; i++) {
            tempNode = tempNode -> next;
        }

        newNode -> next = tempNode -> next;
        tempNode -> next = newNode;
    }

    count_++;
}

template <typename T>
T LinkedList<T>::popFront() {
    T value = head_ -> value;
    head_ = head_ -> next;
    count_--;
    return value;
}

template <typename T>
T LinkedList<T>::popBack() {
    Node<T> *tempNode = head_;
    T value = tail_ -> value;

    for(int i = 0; i < count_ - 2; i++) {
        tempNode = tempNode -> next;
    }

    tail_ = tempNode;
    tail_ -> next = nullptr;
    count_--;

    return value;
}