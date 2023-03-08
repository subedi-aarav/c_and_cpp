#include <iostream>
using namespace std;

void myfunction(){
	cout << "myfunction just got called" << "\n";
	
}

int main(){
	for(int i=0;i<10;i++){
		myfunction();
	}
}
