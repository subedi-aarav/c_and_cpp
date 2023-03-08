#include <iostream>
#include <string>
using namespace std;

class car{            // The class 
	public:           // Access specifier  
		string brand; // Attributes
		string model; // Attributes
		int year;     // Attributes
		car(string x, string y, int z){  //Constructor with parameters
			brand = x;
			model = y;
			year = z;
		}
};

int main(){
	//Create Car objects and call the constructor with different values
	car obj1("BMW", "X5", 1999);
	car obj2("Ford", "Mustang", 1969);
	
	//print values
	cout <<obj1.brand << " " << obj1.model << " " << obj1.year << "\n";
	cout <<obj2.brand << " " << obj2.model << " " << obj2.year << "\n";
	return 0;
}
