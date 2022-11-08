#include<iostream>
using namespace std ;
int main()
{
      float d=34.4f;                        //according to C++ compiler 3.4 IS assigned as long double
    long double e=34.4l;                    //thats why we use float to assign value to d         
    cout<<"the value of d is "<<d<<endl;
    cout<<"the value of e is "<<e<<endl;
    
    // if we write d=3.4f or d=3.4F then d is assigned as float
    // similarily e=3.4l or e=3.4L
    // this is used in function overloading 
    cout<<"the size of 34.4 is "<<sizeof(34.4)<<endl;
    cout<<"the size of 34.4f is "<<sizeof(34.4f)<<endl;
    cout<<"the size of 34.4F is "<<sizeof(34.4F)<<endl;
    cout<<"the size of 34.4l is "<<sizeof(34.4l)<<endl;
    cout<<"the size of 34.4L is "<<sizeof(34.4L)<<endl;
  return 0;

} 