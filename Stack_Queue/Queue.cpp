#include "Queue.h"
#include<iostream>
Queue::Queue()
{
    //ctor
    this->nNum = 0;
    this->linkedlist = new LinkedList();
}

Queue::~Queue()
{
}

void Queue::push(int x)
{
    Element* p = new Element();
    p->setData(x);
    this->linkedlist->addHead(p);
}

int Queue::pop()
{
    if (linkedlist->getHead() == nullptr) {
        return NULL; // Hoặc giá trị khác biểu thị ngăn xếp rỗng
    }
    int p = this->linkedlist->getTail()->getData();
    this->linkedlist->DeleteTail();
    return p;

}

void Queue::printQueue()
{
    this->linkedlist->display();
}
