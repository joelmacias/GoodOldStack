#include "Stack.h"
#include <iostream>


int main(){
    Stack<int> IntStack;

    if(IntStack.Empty()){
        std::cout << "Stack is empty!" << std::endl;
    }
    else{
        std::cout <<"Stack size: " << IntStack.Size() << std::endl;
    }

    for(int i = 0;i < 5; i++){
        IntStack.Push(i);
    }

    std::cout <<"Stack size: " << IntStack.Size() << std::endl;
    std::cout << IntStack.Top() << std::endl;
    IntStack.Top() -= 4;
    std::cout << IntStack.Top() << std::endl;
    int x = IntStack.Top();
    std::cout << x << std::endl;

    std::cout << "Nums in stack" << std::endl;
    while(!IntStack.Empty()){
        std::cout << IntStack.Top() << std::endl;
        IntStack.Pop();
    }
    if(IntStack.Empty()){
        std::cout << "List is empty, again." << std::endl;
    }
    else{
        std::cout << "Que?" << std::endl;
    }

    return 0;
}