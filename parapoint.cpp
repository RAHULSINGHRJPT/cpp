// write a cpp program to find the average of n subjects of one student using  parameterised constructor

#include <iostream>
using namespace std;
class stud                //creating a student class
{
    char usn[20], name[30];
    float marks[3];
    int i;

public:                     //defining all the meathods in the public class
    float avg;
    void read();
    void calc();
    void disp();
};
void stud::read()            //colon is used to ascess the meathods of class variable
{
    cout << "\nEnter USN no.: ";
    cin >> usn;
    cout << "\nEnter name: ";
    cin >> name;
    for (i = 0; i < 3; i++)
    {
        cout << "\nEnter the marks of subject " << i + 1 << ": ";
        cin >> marks[i];
    }
}
void stud::calc()               //taking the sum in a loop and calculating the average
{
    int sum = 0, min = marks[0];
    for (i = 0; i < 3; i++)
    {
        sum += marks[i];
        if (min >= marks[i])
            min = marks[i];
    }
    avg = float(sum - min) / 2;
}
void stud::disp()                   // displaying the marks 
{
    cout << usn << "\t" << name << "\t";
    for (i = 0; i < 3; i++)
        cout << marks[i] << "\t";
    cout << avg << "\n";
}
int main()
{
    int n, topper, i, z;
    float max = 0;
    cout << "\nEnter the number of students: ";
    cin >> n;
    stud s[n];               //creating student array to take input of usn , name and  marks and calculating avg
    for (i = 0; i < n; i++)
    {
        s[i].read();
        s[i].calc();
    }
    cout << "USN\tName\t";
    for (i = 0; i < 3; i++)
    {
        cout << "Marks " << i + 1 << "\t";
    }
    cout << "Avg.\n";
    for (i = 0; i < n; i++)
        s[i].disp();
    for (i = 0; i < n; i++)
    {
        if (max < s[i].avg)
        {
            max = s[i].avg;
            topper = i;
        }
    }
    for (i = 0; i < n; i++)
    {
        if (s[topper].avg == s[i].avg)          //condition to be a topper is getting highest marks among the three
        {
            cout << "\nThe toppers is student " << i + 1 << ": ";
            cout << "\nDetails:-\n";
            s[i].disp();
        }
    }
}