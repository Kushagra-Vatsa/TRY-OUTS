#include<iostream>
using namespace std;
int main()
{
    //Declaring & Initialising pointers
    int *p_number{};//Will initialise with nullptr
    double* p_fractional_number{};
    cout<<"Size of int and double are "<<sizeof(int)<<" and "<<sizeof(double)<<endl;
    cout<<"Size of int* and double* are "<<sizeof(int*)<<" and "<<sizeof(double*)<<endl;

    int int_var{43};
    int* p_int{&int_var};
    cout<<"Int var : "<<int_var<<endl;
    cout<<"Address of int_var in memory : "<<(p_int)<<endl;

    //Dereferencing a pointer : Accessing Value stored at some variable using its address
    int* p_int2{nullptr};
    int int_data{50};
    p_int2=&int_data;
    cout<<"Value : "<<*p_int2<<endl;
    return 0;
}