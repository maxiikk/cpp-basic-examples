#include <iostream>
using namespace std;

class sword{
	public:
		int length;
		bool modified = false;
		sword(){
		}
		sword (int l){
			length = l;
		}
		sword operator+ (const sword p1){
			sword temp;
			temp.length = p1.length + length;
			temp.modified = true;
			return temp;
		}
		void show(){
			cout << length << " " << modified << endl;
		}
};
int main(int argc, char** argv) {
	sword me(50);
	sword me2(65);
	sword me3;
	me3 = me + me2;
	me3.show();
	return 0;
}