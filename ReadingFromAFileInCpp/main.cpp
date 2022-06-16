#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char** argv) {
	int num;
	fstream p1;
	p1.open("C:/Users/maxgi/Downloads/code projects/ReadFrom.txt", ios::in);
	while (!p1.eof()){
		p1 >> num;
		if (!p1.eof()){
			cout << "the num is " << num << endl;
		}
	}
	p1.close();
	p1.open("ToCopyFrom.txt", ios::out);
	p1 << "fhdfhhdfhdfhdhdfdffdggd";
	p1.close();
	p1.open("ToWriteToAndReadFrom.txt", ios::in);
	char c;
	if (p1){
		while (1){
			p1 >> c;
			if (!p1.eof()){
				cout << c;
			}
			else break;
		}
	}
	else cerr << "Cannot open";
	
	p1.close();
	return 0;
}