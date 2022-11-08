// C++ Control structure
//if else statement
#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter your age"<<endl;
    cin>>age;
    if (age<18){
        cout<<"You are not eligible to vote "<<endl;
    }
    else if (age==18){
        cout<<"You can apply to become a voter . if you already have a voter id , you are eligible";
    }
    else {
        cout<<"You are eligible "<<endl;
    }
    return 0;
}