#include<iostream>
using namespace std;
int main ()
{
    int age;
    cout<<"Enter the age"<<endl;
    cin>>age;
    switch(age)
    {
        case 18:
        cout<<"You are 18"<<endl;
        break;
        case 1:
        cout<<"You are 1"<<endl;
        break;
        default:
        cout<<"Yoy are no special case ";
        break;
    }
    cout<<"This is switch case statement";
    return 0;


}