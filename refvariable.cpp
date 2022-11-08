#include<iostream>
using namespace std;
int main ()
{
    int a=3;
    cout<<"The value of a is "<<a<<endl;
    int & x=a;    //this line assigns the value of a to x
    cout<<"The value of x is "<<x<<endl;
    return 0;


}