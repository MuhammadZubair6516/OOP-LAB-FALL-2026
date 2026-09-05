#include <iostream>
using namespace std;
class Employee
{
private:
string firstname; string lastname ;int monthlySalary;

public:
Employee(string empfirstname,string emplastname,int empmonthlySalary) 
{
firstname = empfirstname;
lastname = emplastname;
if(empmonthlySalary >0 )
monthlySalary = empmonthlySalary;

else monthlySalary =0;
}

string getfirstname(){
	return firstname ;
}
string getlastname(){
	return lastname;
}
int getmonthlySalary(){
	return monthlySalary ;
}
int yearlySalary()
{
	return monthlySalary*12;
}
void raiseSalary(float percent){
	float raise = monthlySalary * (percent/100);
	monthlySalary+= raise ;
	 
}
};

int main()
{
Employee emp1("ALi","Hassan" , 6500);
Employee emp2("Naveen","Raj" , 5000);

emp1.yearlySalary();
emp2.yearlySalary();
cout << "Yearly Salary of emp 1 : " << emp1.yearlySalary() << endl;
cout << "Yearly Salary of emp 2 : " << emp2.yearlySalary() << endl;
emp1.raiseSalary(10);
emp2.raiseSalary(10);
cout << "\nAfter rasie of 10 % Yearly Salary of emp 1: " << emp1.yearlySalary() << endl;
cout << "After rasie of 10 % Yearly Salary of emp 2: " << emp2.yearlySalary() << endl;
return 0;
}
