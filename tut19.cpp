#include<iostream>
using namespace std;
int sum(int a,int b,int c)
{
    cout<<"Function with 3 integers "<<endl;
    return a+b+c;
}
int sum(int a,int b)
{
    cout<<"Function with 2 integers"<<endl;
    return a+b;
}
int main()
{
    cout<<"The sum of 1 and 2 is"<<sum(1,2)<<endl;
    cout<<"The sum of 1,2 and 3 is "<<sum(1,2,3)<<endl;
    return 0;
}