//
// Created by Joel on 9/15/17.
//

#ifndef GOODOLDSTACK_STACK_H
#define GOODOLDSTACK_STACK_H

#include "LinkedList.h"
#include <iostream>

template <class DataType>
class Stack{
public:
    //constructor
    Stack();

    //return size of stack
    std::size_t Size();

    //return a reference to the top of the stack
    DataType& Top();

    //add an element to the stack
    void Push(DataType data);

    //remove the last element pushed onto the stack
    void Pop();

    bool Empty();

private:
    LinkedList<DataType> list;

};

template <class DataType>
Stack<DataType>::Stack() = default;

template <class DataType>
bool Stack<DataType>::Empty() {
    return list.Empty();
}
template <class DataType>
size_t Stack<DataType>::Size() {
    return list.GetSize();
}

template <class DataType>
DataType& Stack<DataType>::Top() {
    if(!list.Empty()){
        return list.GetHeadData();
    }
}

template <class DataType>
void Stack<DataType>::Push(DataType data) {
    list.InsertAtHead(data);
}

template <class DataType>
void Stack<DataType>::Pop(){
    if(!list.Empty()) {
        list.RemoveFromHead();
    }
    else{
        std::cout <<"Stack is empty cannot, nothing to remove." << std::endl;
    }
}
#endif //GOODOLDSTACK_STACK_H
