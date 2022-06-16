#include <iostream>
#include <sstream>
#include <fstream>
using namespace std;
class person {
	public:
		int age;
		string name;
		int bday;
		int bmonth;
		int byear;
		
		string getdob(int bday, int bmonth, int byear){
			string dob;
			stringstream ss;
			ss << bday << "/" << bmonth << "/" << byear;
			dob = ss.str();
			return dob;
		}
	
	
};
int main(int argc, char** argv) {
	
	person me;
	string temp = me.getdob(12, 09, 2003);
	fstream p1;
	p1.open ("result.txt", ios::trunc);
	if (p1.is_open()){
		p1 << temp;
		p1 << "\nthis is how we write to a file\n";
	}
	p1.close();
	return 0;
}