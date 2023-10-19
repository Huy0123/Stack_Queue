#pragma once
#include"Element.h"
class LinkedList
{
private:
	Element* head;
	Element* tail;
public:
	LinkedList();
	void addHead(Element*);
	void display();
	void addTail(Element*);
	void DeleteHead();
	void DeleteTail();
	void addMiddle(Element* p, Element* data);
	void DeleteMiddle(Element*);
	void nhap();
	Element* getHead();
	Element* getTail();
};

