#pragma once
class Element
{
private:
	int data;	
	Element* pointer;
public:
	int getData();
	void setData(int data);
	Element();
	~Element();
	Element* getPointer();
	void setPointer(Element* pointer);
};

