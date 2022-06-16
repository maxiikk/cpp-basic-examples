#include <iostream>
using namespace std;
#define NUM 100
struct node{
	int value[NUM];
	struct node *next;
	struct node *prev;
};
typedef struct node nodet;

nodet *createfirstnode(int value){
	nodet *result = new nodet;
	for (int i = 1; i <= NUM; i++){
		result->value[i-1] = i + value;
	}
	result->prev = NULL;
	result->next = NULL;
	return result;
}
nodet *createnode(int value, nodet *temp){
	nodet *result = new nodet;
	temp->next = result;
	for (int i = 1; i <= NUM; i++){
		result->value[i-1] = i + value;
	}
	result->next = NULL;
	result->prev = temp;
	return result;
}

void printlist (nodet *tail){
	nodet *temp = tail;
	while (temp != NULL){
		for (int i = 0; i < NUM; i++){
			cout << temp->value[i] << endl;
		}
		temp = temp->next;
	}
}
int main(int argc, char** argv) {
	
	nodet *head = NULL;
	nodet *tail = NULL;
	nodet *temp1;
	nodet *temp2;
	int start = 1;
	int end = 20;
	for (int i = start; i <= end; i++){
		if (i == start){
			temp1 = createfirstnode(i);
			tail = temp1;
		}
		else{
			temp1 = createnode(i, temp2);
		}
		temp2 = temp1;
		head = temp1;
		
	}
	printlist(tail);
	cout << NUM << endl;
	return 0;
}