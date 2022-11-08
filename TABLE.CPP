#include<iostream>
using namespace std;
int main()
 {
//     int n;
//     cout<<"Please enter the number "<<endl;
//     cin>>n;

//     for(int i=0; i<=10 ; i++)
//     cout<<n<<"*"<<i<<"="<<n*i<<endl;
//     return 0;
int i=1,n;
cout<<"Enter the number "<<endl;
cin>>n;
do
{
    cout<<n<<"X"<<i<<"="<<n*i<<endl;
}
while (i<=10);
return 0;
}