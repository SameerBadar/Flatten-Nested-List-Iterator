#include<iostream>
#include"queue.h"
void displayList(int*, int);
using namespace std;
int  main() {
	const char* input = "[[1,1],2,[1,1]]\0";
	queue list;
	for (int i = 0; input[i] != '\0'; i++) {
		if (input[i] >= '0' && input[i] <= '9') {
			list.enqueue(input[i] - '0');
		}
	}
	int size = list.getSize();
	int* output = new int[size + 1];
	int count = 0;
	while (!list.isEmpty()) {
		output[count] = list.dequeue();
		count++;
	}
	displayList(output, count);
	list.emptyqueue();
	delete output;
	output = nullptr;
	return 0;
}
void displayList(int * _output,int size){
	for (int i = 0; i < size; i++) {
		cout << _output[i] << "	";
}
	cout << endl;
}
