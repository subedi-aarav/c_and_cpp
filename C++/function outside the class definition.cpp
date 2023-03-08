#include <iostream>
using namespace std;

class myclass{
	public:
		void function();
};

//Method/Function defination outside the class
void myclass::function(){
	cout <<"Hello WORLD";
}

int main(){
	myclass myobj;
	myobj.function();
	return 0;
}
