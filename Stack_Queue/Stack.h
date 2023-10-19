#pragma once
#include"LinkedList.h"
class Stack
{
private: int nNum;
       LinkedList* linkedlist;
public:
    Stack();
    virtual ~Stack();
    void push(int);
    int pop();
    void printStack();
    void henhiphan(int);
};


