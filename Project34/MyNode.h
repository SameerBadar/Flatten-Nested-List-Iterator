#pragma once
class MyNode
{
public:
	MyNode() { value = 0; next = nullptr;}
	MyNode(const int _value) { setValue(_value); }
	void setValue(const int _value) { value = _value; }
	void setNext(MyNode* _next) { next = _next; }
	MyNode* getNext() { return next; }
	int getValue() { return value; }
private:
	int value;
	MyNode* next;
	
};

