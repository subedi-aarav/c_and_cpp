#include <iostream>
using namespace std;

// Base class
class Emp {
	protected: // Protected access specifier 
		int salary;
};

// Derived class 
class Programmer: public Emp {
	public:
		int bonus;
		void setsalary(int s){
			salary = s;
		}
		int getsalary(){
			return salary;
		}
};

int main() {
	Programmer Obj;
	Obj.setsalary(50000);
	Obj.bonus = 15000;
	cout << "Salary: " << Obj.getsalary() << "\n";
	cout << "Bonus: " << Obj.bonus << "\n";
	return 0;
}
