// Integral types less thyan 4 bytes in size cannot support arithmetic operations 
//Like char(1 byte) and short int(2 byte) 
//However compiler are self aware to convert it into int (4 byte) when used with arithmetic operator
#include<iostream>
using namespace std;
int main()
{
    short int val1{1};
    short int val2{2};  
    char var3{3};
    char var4{4};
    auto result1=val1 + val2;
    auto result2=var3+ var4;
    cout<<"Size of val1 and val2 is "<<sizeof(val1)<<" and "<<sizeof(val2)<<endl;
    cout<<"Size of var3 and var4 is "<<sizeof(var3)<<" and "<<sizeof(var4)<<endl;
    cout<<"Size of result1 is "<<sizeof(result1)<<endl;//Size of result1 is not 2 , it is changed to 4 because we apply arithmetic operation
    cout<<"Size of result2 is "<<sizeof(result2)<<endl;//Size of result2 is not 1 , as it is changed from 1 to 4 because of arithmetic operator
    //The same behavior can be seen in other operators like bitwise shift operator << and >>
    return 0;
}