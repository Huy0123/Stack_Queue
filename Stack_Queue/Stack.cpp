#include "Stack.h"
#include<iostream>
void Stack::push(int x) {
    Element* p = new Element();
    p->setData(x);
    this->linkedlist->addHead(p);
}
int Stack::pop() {
    if (linkedlist->getHead() == nullptr) {
        return NULL; // Hoặc giá trị khác biểu thị ngăn xếp rỗng
    }
    int p = this->linkedlist->getHead()->getData();
    this->linkedlist->DeleteHead();
    
    return p;

}
void Stack::printStack()
{
    this->linkedlist->display();
}
void Stack::henhiphan(int x)
{
    Stack* a = new Stack();
    if (x == 0) {
        a->push(0);
    }
    while (x != 0) {
        a->push(x % 2);
        x /= 2;
    }
    a->printStack();
}
Stack::Stack()
{
    //ctor
    this->nNum = 0;
    this->linkedlist = new LinkedList();
}
Stack::~Stack()
{
    //dtor
}
