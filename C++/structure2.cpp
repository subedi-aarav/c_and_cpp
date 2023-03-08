#include <iostream>
#include <string>
using namespace std;

//declare a structur name "car"
struct car{
	string brand;
	string model;
	int year;
};

int main(){
	//Create a car structure and store it in mycar1;
	car mycar1;
	mycar1.brand = "BMW";
	mycar1.model = "Z5";
	mycar1.year = 1999;
	
	//Create another car structure and store it in mycar2;
	car mycar2;
	mycar2.brand ="Ford";
	mycar2.model = "Mustang";
	mycar2.year = 1969;
	
	//print the structure members
	cout << mycar1.brand << "\t" << mycar1.model << "\t" << mycar1.year << "\n";
	cout << mycar2.brand << "\t" << mycar2.model << "\t" << mycar2.year << "\n";
	
	return 0;
	
}

