#include<iostream>
using namespace std;
int main()
{
    char val1 {'a'};
    char val2 {65};
    cout<<"value of val1 is "<<val1<<endl;                       
    cout<<"value of val2 is "<<val2<<endl;
    cout<<"The size of char is "<<sizeof(char)<<endl;
    cout<<"If we want to get the ASCII value of char we can use static_cast<int> "<<endl;
    cout<<"ASCII value of a is "<<static_cast<int>(val1)<<endl;
    cout<<"ASCII value of val2 is "<<static_cast<int>(val2)<<endl;
    return 0;
}