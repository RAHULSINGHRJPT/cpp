#include<iostream>
using namespace std;

int factorial(int num ){
    if(num==0||num==1)
    return 1;

    else 
   return num*factorial(num-1);
}


int main(){
    int num;
    cout<<"enter the number\n";
    cin>>num;

    cout<<"the factorial of the number is:"<<factorial(num);
}