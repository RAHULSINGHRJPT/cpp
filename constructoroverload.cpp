// cpp  program to verify constructor overloading

#include<iostream>
using namespace std;

class date
{
    private:
        int dd, mm, yy;

    public:
        date()
        {
            dd=31;
            mm=12;
            yy=2016;
        }
        date(int dd, int mm, int yy){
            this->dd = dd;
            this->mm = mm;
            this->yy = yy;
        }

        void display()
        {
            cout<<"\nThe Entered Date is :: ";
            cout<<dd<<"-"<<mm<<"-"<<yy<<"\n";
        }
};
int main ()
{
date obj,obj2(25,1,2003);
obj.display ();
obj2.display();

return 0;
}