//To write a program to read the data of N employee and compute net salary of each employee using pointer given that an employee class contains following
//data members, employee no, employee name,basic salary, daily allowance, income tax, net salary, gross salary, member function to calculate net salary and print data
//(DA=52%  basic ,  it=30%   gross salary=DA + basic  and print data)
#include<iostream>
using namespace std;
#define size 40
class employee
{
	int empno;
	char empname[size];
	int basic=0,net=0,DA=0,IT,gross;
	public:
		void input();
		void calculate();
		void output();
};
void employee::input()
{
	
	cout<<"\nEnter the employee number:";
	cin>>empno;
	cout<<"\nEnter the name of the employee:";
	cin>>empname;
	cout<<"\nEnter employee's basic salary:";
	cin>>basic;
	
}
void employee::calculate()
{
	DA=(52/100)*basic;
	gross=DA+basic;
	IT=(30/100)*gross;
	net=DA+basic-IT;
}
void employee::output()
{
	cout<<"\nThe name of the employee is "<<empname;
	cout<<"\nThe employee number of the employee is "<<empno;
	cout<<"\nThe Net Salary of the employee is "<<net;
	cout<<"\n";
}
int main()
{
	int n,i;
	cout<<"\nEnter the number of employees:";
	cin>>n;
	employee emp[n];
	for(i=0;i<n;i++)
	{
		cout<<"\nEnter the employee "<<i+1<<" details:";
		emp[i].input();
	}
	for(i=0;i<n;i++)
	{
		cout<<"\nThe details of the employee "<<i+1<< " is:";
        emp[i].calculate();
		emp[i].output();
	}
	
		return 0;
}