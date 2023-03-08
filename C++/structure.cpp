#include <iostream>
#include <string>
using namespace std;

int main(){
	struct {
		string name;
		int age;
		string sex;
		int height;
	}detail1,detail2;
	
	detail1.name = "aarav";
	detail1.age = 21;
	detail1.sex = "M";
	detail1.height = 5.9;
	
	detail2.name = "diwas";
	detail2.age = 22;
	detail2.sex = "M";
	detail2.height = 6;
		
	cout << detail1.name << "\n";
	cout << detail1.age << "\n";
	cout << detail1.sex << "\n";
	cout << detail1.height << "\n\n\n";
	
	cout << detail2.name << "\n";
	cout << detail2.age << "\n";
	cout << detail2.sex << "\n";
	cout << detail2.height << "\n";
	
	
	return 0;
}
