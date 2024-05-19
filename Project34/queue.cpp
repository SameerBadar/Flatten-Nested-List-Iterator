#include<iostream>
#include "queue.h"
using namespace std;
bool queue::isEmpty() {
	
	
	if (front == nullptr) {
		return true;
}
	return false;
}
bool queue::isFull() {
	MyNode* temp = (MyNode*)malloc(sizeof(MyNode));
	if (temp == nullptr) {
		return true;
	}
	return false;
	
}
void queue::enqueue(const int _value) {
	if (front == nullptr) {
		MyNode* temp = new MyNode(_value);
		front = temp;
		rear = temp;
		//front->setNext(temp);
		//rear->setNext(temp);
	}
	else {
		if (isFull()) {
			cout << "Has Reached Maximum Size " << endl;
			return;
		}
		MyNode* temp = new MyNode(_value);
		rear->setNext(temp);
		rear = temp;
	}
}
int queue::dequeue() {
	if (isEmpty()) {
		cout << "Queue Is Empty " << endl;
		return -1;
	}
	else {
		MyNode* temp = front;
		int value = front->getValue();
		front = front->getNext();
		delete temp;
		return value;
	}
}
void queue::emptyqueue() {
	if (!isEmpty()) {
		MyNode* temp ;
		while (front != rear) {
			temp = front;
			front = front->getNext();
			delete temp;
		}
		if (front != nullptr) {
			delete front;
			front = nullptr;
			rear = nullptr;
	}
	}

}
