#include <iostream>
#include "LinkedList.h"

int main() {

    LinkedList<int> list;

    list.InsertAtHead(5);
    list.InsertAtHead(4);
    list.InsertAtHead(3);
    list.InsertAtHead(2);
    list.InsertAtHead(1);
    list.InsertAtHead(0);

    list.Print();


    while(!list.Empty()){
        list.RemoveFromHead();
    }

    if(list.Empty()){
        std::cout << "List is empty!" << std::endl;
    }
    else{
        std::cout << "List is not empty!" << std::endl;
    }

    return 0;
}