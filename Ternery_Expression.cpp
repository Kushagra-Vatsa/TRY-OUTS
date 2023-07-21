#include<iostream>
using namespace std;
int main()
{
    /*
        result = (condition) ? option1 : option2;
        this is equivalent to 
        if(condition)
        {
            result=option1;
        }
        else
        {
            result=option2;
        }
    */
   int max{};
   int a{40};
   int b{35};
   max=(a>b) ? a:b;
   cout<<"Maximum value is "<<max<<endl;
   
    return 0;
}