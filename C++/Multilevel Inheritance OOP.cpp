#include <iostream>
#include <string>
using namespace std;

// Parent class
class Myclass{
	public:
		void myFunction(){
			cout << "Some content in Parent class.";
		}
};

// Child class
class Mychild: public Myclass {
};

// Grandchild class
class Mygrandchild: public Mychild {
};

int main(){
	Mygrandchild myobj;
	myobj.myFunction();
	return 0;
}

