#include "LinkedList.hpp"
#include <iostream>
#include <string>
using namespace std;

int main() {
    LinkedList<int> myList;

    myList.add(10);
    myList.add(20);
    myList.add(30);
    myList.add(40);
    myList.addAt(5, 0);
    cout << "popBack: " << myList.popBack() << endl;
    myList.print(); // 10 20 30 40
    myList.add(60);
    myList.print();
    // LinkedList<string> myList;
    // myList.add("hi");
    // myList.add("bye");
    // myList.add("hello");
    // myList.print();

    return 0;
}