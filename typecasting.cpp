//used to change 1 variable into another like float to interger 
#include<iostream>
using namespace  std;
int main()
{
    float a=12.66;
    int c=12;
    cout<<"The value of a is "<<a<<endl;
    //to convert this variable from float to integer we use type casting
    cout<<"the value of a is "<<int(a)<<endl; //or like this (int)a
    cout<<"The value of a is "<<(int)a<<endl;
    cout<<"The value of a+c is "<<a+c<<endl;
    cout<<"The value of c+int(a) is "<<c+int(a)<<endl;
    cout<<"the value of c+(int)a is "<<c+(int)a<<endl;

    return 0;

} 