#include<iostream>
using namespace std;

int change(int &x)
{
    x=x*x*x;
    cout<<"The value in function is"<<x<<endl;
    return x;
}

int main()
{
    int a;
    cout<<"Enter the value of a"<<endl;
    cin>>a;
    change(a);
    cout<<"The value of a in main is "<<a<<endl;

    return 0;
}