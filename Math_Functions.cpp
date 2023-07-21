#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double weigth {1.2};
    double savings{-5000};
    // floor 
    cout<<"Weigth rounded to floor is "<<floor(weigth)<<endl;
    //ceil
    cout<<"Weigth rounded to ceil is "<<ceil(weigth)<<endl;
    //abs
    weigth=7.7;
    cout<<"Abs of weigth and savings are "<<abs(weigth)<<" and "<<abs(savings)<<endl;
    // f(x):e^x , where e=2.71828
    double exponential=exp(10);
    cout<<"Value of e^10 is "<<exponential<<endl;
    //sqrt
    cout<<"Square root of 81 is "<<sqrt(81)<<endl;
    
    return 0;
}

