#include <iostream>
using namespace std;
class person{
	private:
		int age;
		string name;
	public:
		person(){
			age = 0;
			name = "";
		}
		person(int a, string n){
			age = a;
			name = n;
		}
		void setdetails(int a, string n){
			age = a;
			name = n;
		}
		int getage(){
			return age;
		}
		string getname(){
			return name;
		}
		void printdetails(){
			cout << "Name: " << name << endl << "Age: " << age << endl;
		}
};
class house{
	private:
		person *peps;
		int numberofpeople = 0;
		int tempage;
		string tempname;
	public:
		house(){
			
		}
		house(int numpep){
			if (numpep <= 0){
				cout << "A house cant have 0 members!" << endl;
				return;
			}
			numberofpeople = numpep;
			peps = (person*) calloc (numpep, sizeof(person));
			for (int i = 0; i < numpep; i++){
				cout << "Name of " << i+1 << ": ";
				cin >> tempname;
				cout << "Age of " << i+1 << ": ";
				cin >> tempage;
				cout << endl;
				peps[i].setdetails(tempage, tempname);
			}
		}
		void printmembers(){
			if (numberofpeople == 0){
				cout << "A house cant have 0 members!" << endl;
				return;
			}
			cout << "Your house members are: " << endl;
			for (int i = 0; i < numberofpeople; i ++){
				cout << "Name: " << peps[i].getname() << endl << "Age: " << peps[i].getage() << endl;
			}
		}
};
int main(int argc, char** argv) {
	cout << "How many people does your house have?" << endl;
	int people;
	cin  >> people;
	house myhouse(people);
	myhouse.printmembers();
	return 0;
}