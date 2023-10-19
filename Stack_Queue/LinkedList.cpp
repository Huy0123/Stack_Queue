#include "LinkedList.h"
#include<iostream>
LinkedList::LinkedList()
{
	this->head = nullptr;
	this->tail = nullptr;
}

void LinkedList::addHead(Element* a)
{
	if (this->head == nullptr) {
		this->head = this->tail = a;
	}
	else {
		a->setPointer(this->head);
		this->head = a;
	}
}

void LinkedList::display()
{
	Element* p = this->head;
	while (p != nullptr) {
		std::cout << p->getData() << " ";
		p = p->getPointer();
	}
}

void LinkedList::addTail(Element* a)
{
	if (this->head == nullptr) {
		this->head = this->tail = a;
	}
	else {
		this->tail->setPointer(a);
		this->tail = a;
	}
}

void LinkedList::DeleteHead()
{
	Element* p = head;
	this->head = this->head->getPointer();
	delete p;
}

void LinkedList::DeleteTail()
{
	if (head == nullptr) {
		// The list is empty, so there is nothing to delete.
		return;
	}

	if (head == tail) {
		// There is only one element in the list.
		delete tail;
		head = tail = nullptr;
		return;
	}

	Element* p = head;
	while (p->getPointer() != tail)
	{
		p = p->getPointer();
	}

	delete tail;
	tail = p;
	tail->setPointer(nullptr);
}


void LinkedList::addMiddle(Element* p, Element* data)
{
	data->setPointer(p->getPointer());
	p->setPointer(data);
}

void LinkedList::DeleteMiddle(Element* p)
{
	Element* q = head;
	while (q->getPointer() != p) {
		q = q->getPointer();
	}
	q->setPointer(p->getPointer());
	delete p;
}

void LinkedList::nhap()
{
}


Element* LinkedList::getHead()
{
	return head;
}

Element* LinkedList::getTail()
{
	return tail;
}


