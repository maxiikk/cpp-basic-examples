#include <iostream>
using namespace std;

class person{
	public:
		int age;
		string name;
};
struct studentnode{
	person student;
	struct studentnode *next;
	struct studentnode *prev;
};
typedef struct studentnode nodet;

nodet *createnode1(int age, string name){
	nodet *result = new nodet;
	result->student.age = age;
	result->student.name = name;
	result->next = NULL;
	return result;
}

nodet *createnode2(int age, string name, nodet *temp){
	nodet *result = new nodet;
	result->student.name = name;
	result->student.age = age;
	result->prev = temp;
	temp->next = result;
	result->next = NULL;
	return result;
}

void printlist (nodet *tail){
	nodet *temp = tail;
	while (temp != NULL){
		cout << "Name: " << temp->student.name << "\nAge: " << temp->student.age << endl;
		temp = temp->next;
	}
	cout << '\n';
}
int main(int argc, char** argv) {
	nodet *head = NULL;
	nodet *tail = NULL;
	nodet *temp1;
	nodet *temp2;
	string name;
	int age;
	for (int i = 1; i <= 5; i++){
		cout << "\nGive a name: ";
		cin >> name;
		cout << "\nGive age: ";
		cin >> age;
		if (i == 1){
			temp1 = createnode1(age, name);
			tail = temp1;
		}
		else{
			temp1 = createnode2(age, name, temp2);
		}
		head = temp1;
		temp2 = temp1;
	}
	cout << "\n\n";
	printlist (tail);
	return 0;
}