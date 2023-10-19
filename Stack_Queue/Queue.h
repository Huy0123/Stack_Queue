#pragma once
#include"LinkedList.h"
class Queue
{
private: int nNum;
       LinkedList* linkedlist;
public:
    Queue();
    virtual ~Queue();
    void push(int);
    int pop();
    void printQueue();
    
};

