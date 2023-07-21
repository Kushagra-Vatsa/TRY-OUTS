#include<iostream>
#include<limits>
using namespace std ;
int main()
{
    cout<<"The Range of short is "<<numeric_limits<short>::min()<<" to "<<numeric_limits<short>::max()<<endl;
    cout<<"The Range of unsigned short is "<<numeric_limits<unsigned short>::min()<<" to "<<numeric_limits<unsigned short>::max()<<endl;
    cout<<"The Range of int is "<<numeric_limits<int>::min()<<" to "<<numeric_limits<int>::max()<<endl;
    cout<<"The Range of short int is "<<numeric_limits<short int>::min()<<" to "<<numeric_limits<short int>::max()<<endl;
    cout<<"The Range of float is "<<numeric_limits<float>::min()<<" to "<<numeric_limits<float>::max()<<endl;  
    return 0;
}