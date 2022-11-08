// #include<iostream>
// using namespace std;

// void swap(int x,int y)
// {
//     int temp=x;
//     x=y;
//     y=temp;
//     cout<<"The value of x and y is "<<x<<"and"<<y<<endl;
// }
// int main()
// {
//     int a=1,b=2 ;
//     swap(a,b);
//     cout<<"The value of a and b is "<<a <<"and"<<b<<endl;
    
//     return 0 ;
    
// }
#include<iostream>
using namespace std;

void swap(int &x,int &y)
{
    int temp=x;
    x=y;
    y=temp;
    cout<<"The value of x and y is "<<x<<"and"<<y<<endl;
}
int main()
{
    int a=1,b=2 ;
    swap(a,b);
    cout<<"The value of a and b is "<<a <<"and"<<b<<endl;
    
    return 0 ;
    
}