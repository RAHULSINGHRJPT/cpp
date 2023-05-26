// Write a program to read the data of n employees and compute the net salary of each using pointers


#include <iostream>
using namespace std;
class Employee
{
    char eid[10];
    char ename[70];
    double bs, gs, it, nets, da;

public:
    void details();
    void cal();
    void display();
};

void Employee::details()
{
    cout << "Enter the emplyoee id :\t";
    cin >> eid;
    cout << "\nEnter the employee name : ";
    cin >> ename;
    cout << "\nEnter the basic salary : ";
    cin >> bs;
}
void Employee::cal()
{
    da = (.52) * bs;
    gs = da + bs;
    it = (.30) * gs;
    nets = da + bs - it;
}
void Employee::display()
{
    cout << "\nEmployee id = " << eid;
    cout << "\n employee name ="  << ename;
    cout << "\nbasic salary = " << bs;
    cout << "\nDA = " << da;
    cout << "\nGross salary = " << gs;
    cout << "\nintax = " << it;
    cout << "\nnet salary = " << nets<<"\n";
}

int main()
{
    int n, i;
    cout << "Enter the number of employees : ";
    cin >> n;
    Employee e[i],*p;
    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter the " << i+1 << " employee details\n";
        p=&e[i];
        p->details();
        p->cal();
    }
    for (int i = 0; i < n; i++)
    {
        cout << "\nDetails of " << i+1 << " employee\n";
        p=&e[i];
        p->display();
    }
    return 0;
}