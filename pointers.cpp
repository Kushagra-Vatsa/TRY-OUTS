#include<iostream>
using namespace std;
int main()
{
    int a=3;
    int*b=&a;
    cout<<"The address of a is "<<b<<endl; 
    // also if we do like this 
    cout<<"The address of a is "<<&a<<endl;
    // the find the value we use 
    cout<<"The value at b is "<<*b<<endl;
    return 0;
}