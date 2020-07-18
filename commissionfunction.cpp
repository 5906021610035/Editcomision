#include <iostream>
#include <String>
void calcom (int,int,int);
using namespace std;
int main()
{
	string name;
	float salary,sale,com;
	cout << "Enter Name          :";
	cin >> name;

	cout << "Enter Salary :";
	cin >> salary;

	cout << "Enter Sale :";
	cin >> sale;

	cout << "Enter Commission Percent : ";
	cin >> com;

	cout << "Your Name = "<<name<<"\n";

	calcom(salary,sale,com);

	

		return (0);
}
void calcom(int salary,int sale,int com)
{     
	
	cout << "Total Revenue "<< (sale*(com/100))+salary<< " Bath\n";
}