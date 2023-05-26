//write a c++ program to find whether the given no is odd or even

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;

    if(n%2!=0){
        cout<<"Its an odd number"<<endl;
    }
    else{
        cout<<"Its an even number"<<endl;
    }
}