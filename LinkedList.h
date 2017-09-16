//
// Created by Joel on 9/14/17.
//

#ifndef GOODOLDSTACK_LINKEDLIST_H
#define GOODOLDSTACK_LINKEDLIST_H

#include<cstddef>
#include<iostream>

template <class DataType>
class LinkedList {
public:
    //constructor
    LinkedList();

    ~LinkedList();

    //insert at head
    void InsertAtHead(DataType data);

    //remove at head
    void RemoveFromHead();

    DataType& GetHeadData();

    //returns size of list
    std::size_t GetSize();

    //returns true if list empty, false other wise
    bool Empty();

    //print list
    void Print();

private:
    struct Node{
        DataType data;
        Node* next;
        Node(DataType data);
    };

    Node* head;
    std::size_t listSize;


};

template <class DataType>
LinkedList<DataType>::Node::Node(DataType data) {
   this->data = data;
   next = NULL;
}

template <class DataType>
LinkedList<DataType>::~LinkedList() {
    if(head != NULL){
       while(head != NULL){
           Node* temp = head;
           head = head->next;
           delete temp;
       }
    }
    std::cout<<"LMAO i got called";
}
template <class DataType>
DataType& LinkedList<DataType>::GetHeadData() {
    return head->data;
}
template <class DataType>
LinkedList<DataType>::LinkedList() {
    head = NULL;
    listSize = 0;
}

template <class DataType>
void LinkedList<DataType>::InsertAtHead(DataType data) {
    Node* newNode = new Node(data);

    if(head == NULL){
        head = newNode;
    }
    else{
        newNode->next = head;
        head = newNode;
    }
    listSize++;
}

template <class DataType>
void LinkedList<DataType>::RemoveFromHead() {

    if(listSize > 0) {
        Node *temp = head;
        head = head->next;
        delete temp;
        listSize--;
    }
    else{
        std::cout <<"List is empty, cannot delete." << std::endl;
    }
}

template <class DataType>
std::size_t LinkedList<DataType>::GetSize(){
    return listSize;
}

template <class DataType>
bool LinkedList<DataType>::Empty() {
    if(listSize == 0){
        return true;
    }
    else{
        return false;
    }
}

template <class DataType>
void LinkedList<DataType>::Print() {
    if(listSize == 0){
        std::cout << "List is empty." << std::endl;
    }
    else{
        Node* temp = head;;
        while(temp != NULL){
            std::cout << temp->data << std::endl;
            temp = temp->next;
        }
    }
}

#endif //GOODOLDSTACK_LINKEDLIST_H
