#include <iostream>
using namespace std;

class emp{
	private:
		int salary;
	public:
		void setsalary(int s){
			salary = s;
		}
		int getsalary(){
			return salary;
		}
};

int main(){
	emp obj1;
	obj1.setsalary(50000);
	cout<< obj1.getsalary();
	return 0;
}
