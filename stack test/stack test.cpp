#include <iostream>
#include <time.h>
using namespace std;
#define arsize 10
bool isfull(int *top){
	if (*top >= (arsize-1)){
		return true;
	}
	else{
		return false;
	}
}
int peek(int *array, int *top){
	return array[*top];
}
bool isempty(int *top){
	if (*top <= -1){
		return true;
	}
	else return false;
}
void printstack (int *array, int *top){
	for (int i = 0; i <= *top; i++){
		cout << array[i] << endl;
	}
}
int pop(int *array, int *top){
	if (!isempty(top)){
		*top -= 1;
		return array[*top+1];
	}
	return 0;
}
void push(int *array, int *top, int data){
	if (!isfull(top)){
		if (*top < -1){
			cout << "Top is lower than -1!" << endl;
			return;
		}
		*top += 1;
		array[*top] = data;
	}
	else{
		cout << "Could not insert the data! The stack is full!" << endl;
	}
}
int main(){
	int *a = (int*) calloc (arsize, sizeof(int));
	srand(time(NULL));
	int b = arsize - 1;
	int *top = &b;
	for (int i =0; i < arsize; i++){
		a[i] = rand()%100;
	}
	cout << "Top is: " << *top+1 << endl;
	push(a, top, 15);
	pop(a, top);
	pop(a, top);
	cout << peek(a, top) << endl << endl << endl;
	printstack(a, top);
	return 0;
}