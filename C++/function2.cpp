#include <iostream>
#include <string>
using namespace std;

void myfunction(string fname, int age){
	cout << fname << "Subedi is " << age << " year\'s old.\n";
}

int main(){
	myfunction("Aarav  ",21);
	myfunction("Merina  ",26);
	myfunction("Bhawana  ",28);
	myfunction("Sita devi  ",48);
	myfunction("Rajan kumar  ",52);
	return 0;
}



//void myFunction(string country = "Norway") {
//  cout << country << "\n";
//}
//
//int main() {
//  myFunction("Sweden");
//  myFunction("India");
//  myFunction();
//  myFunction("USA");
