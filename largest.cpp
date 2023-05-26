#include <iostream>
using namespace std;

inline int findLargest(int num1,int num2,int num3){
	return (num1 > num2)? ((num1 > num3)? num1 : num3)   :   ((num2 > num3)? num2 : num3);
}


int main(){
		int num1,num2,num3;
		cout << "Enter the first number : ";
		cin >> num1 ;
		cout << "Enter the second number : ";
		cin >> num2 ;
		cout << "Enter the third number : ";
		cin >> num3 ;
		
		int largest = findLargest(num1,num2,num3);
		
		cout << "The largest of the three is : " << largest << endl;
		
		return 0;
       }
