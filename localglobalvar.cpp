#include<iostream>
using namespace std ;
int a=2,b=4;
// if a variable is defined before main function it is called global variable 
int main()
{
    int a=5,b=10;
    cout<<"The value of a and b is "<<a<<" and "<<b<<endl;
    // this will display the value of a and b which is local variable if you
    // want to display value of global variable use this ::
    cout<<" The value of global  a  is "<<::a<<endl;
    cout<<"The value of global b is  "<<::b<<endl;
    return 0;


}