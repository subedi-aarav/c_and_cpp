#include <iostream>
#include <string>
using namespace std;

// Base class
class MyClass {
	public:
		void myFunction(){
			cout <<"Some content in Parent class.\n";
		}
};

// Another base class
class MyOtherClass {
	public:
		void myOtherFunction(){
			cout << "Some content in another class.\n";
		}
};

// Derived class
class MyChildClass: public MyClass, public MyOtherClass {
};

int main(){
	MyChildClass Obj;
	Obj.myFunction();
	Obj.myOtherFunction();
	return 0;
}
