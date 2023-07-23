#include<iostream>
using namespace std;
int main()
{
    char message[]={'H','e','l','l','o'};
    cout<<"Message : ";
    for(auto c : message)
    {
        cout<<c;
    }
    cout<<endl;
    char message1[9]{'K','U','S','H','A','G','R','A'};
    cout<<"Message1 : "<<message1<<endl;//Here the message1[8] stores '\0' 
    cout<<message1[8]<<endl;
    return 0;
}
