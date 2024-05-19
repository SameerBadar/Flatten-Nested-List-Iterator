#include"MyNode.h"
#pragma once
class queue
{
public:
	queue() { front = nullptr; rear = nullptr; }
	bool isEmpty();
	bool isFull();
	void enqueue(const int );
	int dequeue();
	void emptyqueue();
	int getSize() {
		if (front == nullptr) {
			return 0;
		}
		else {
		MyNode* temp = front; 
		int s = 0; 
		while (temp != rear)
		{ s++;
		temp = temp->getNext();
		}
		return s;
		}
	}
private:
	MyNode* front;
	MyNode* rear;
};

