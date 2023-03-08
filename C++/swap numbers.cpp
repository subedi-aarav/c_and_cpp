#include <iostream>
using namespace std;

void swapnums(int x, int y){
	int z=x;
	x=y;
	y=z;
}

int main(){
	int firstnum = 10;
	int secondnum = 20;
	
	cout << "Before swap: " << "\n";
	cout << firstnum << "\t" << secondnum << "\n";
	
	swapnums(firstnum,secondnum);
	
	cout << "After swap: " << "\n";
	cout << firstnum << "\t" <<secondnum << "\n";
	
	return 0;
}


