#include<iostream>
using namespace std ;
int main()
{
    bool a{true};    
    bool b{false};
    bool c{true};  
    cout<<boolalpha;
    cout<<" a :"<<a<<endl;
    cout<<" b :"<<b<<endl; 
    cout<<" c :"<<c<<endl; 
    cout<<"-----------------"<<endl;
    cout<<"BASIC AND OPERATOR"<<endl;
    cout<<" a && b :"<<(a&&b)<<endl;
    cout<<" a && b && c :"<<(a&&b&&c)<<endl;
    cout<<"-----------------"<<endl;
    cout<<"BASIC OR OPERATOR"<<endl;
    cout<<" a || b :"<<(a||b)<<endl;
    cout<<" a || b || c :"<<(a||b||c)<<endl;
    cout<<"-----------------"<<endl;
    cout<<"BASIC NOT OPERATOR "<<endl;
    cout<<" !a "<<(!a)<<endl;
    cout<<" !b "<<(!b)<<endl;   
    cout<<" !c "<<(!c)<<endl;
    return 0;
}