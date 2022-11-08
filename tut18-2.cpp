#include<iostream>
using namespace std;
 int fib(int n)
 {
    if (n<2)
    {
        return 1;
    }
    return fib(n-1)+fib(n-2);
 }
 int main()
 {
    int a;
    cout<<"Enter the number"<<endl;
    cin>>a;
    cout<<" The value at position "<<a<<" in fibonacci seq is "<<fib(a);
    return 0;
 }