#include<iostream>
using namespace std;
int main ()
{
    int a=4,b=5;
    cout<<"Types of logical operators :"<<endl;
    cout<<"THE VALUE OF this logical and operator (a==b)&&(a<b) is "<<((a==b)&&(a<b))<<endl;
    cout<<"THE VALUE OF this logical or operator(a==b)||(a<b) is "<<((a==b)||(a<b))<<endl;
    cout<<"THE VALUE OF this logical not operator(a==b) is "<<(!(a==b))<<endl;
    return 0;
}