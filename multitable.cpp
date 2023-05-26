//design a cpp program to create a multiplicable table of a number

#include<iostream>
using namespace std;

 int main()
 {
    int x;
    int i=1;
    cout<<"Enter the number"<<endl;
    cin>>x;
    cout<<"The multiplicable table is:"<<endl;
    while(i!=11){
        cout<<x*i<<endl;
        i++;
    }
    return 0;
 }
