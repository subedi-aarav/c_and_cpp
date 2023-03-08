#include <iostream>
#include <string>
using namespace std;


class car {
	public:
		string brand;
		string model;
		int year;
};

int main(){
	system("color 02");
	car carobj1;
	carobj1.brand = "BMW";
	carobj1.model = "X5";
	carobj1.year = 1999;
	
	car carobj2;
	carobj2.brand = "Ford";
	carobj2.model = "Mustang";
	carobj2.year = 1969;
	
	cout << carobj1.brand << " " << carobj1.model << " " << carobj1.year << "\n";
    cout << carobj2.brand << " " << carobj2.model << " " << carobj2.year << "\n";
}
