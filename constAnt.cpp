//used when we want to keep value of variable constant 
#include<iostream>
using namespace std;
int main ()
{
    const a=3.88;
    cout<<"The value of a was "<<a<<endl;
    a=3.78;
    cout<<"the value of a is "<<a<<endl;
    return 0;

}
//this will produce error as a was declared as constant with the help of const
