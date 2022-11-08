//  #include<iostream>
//  using namespace std;
//  int main()
//  {
//     int marks[]={20,34,45,50};
//     cout<<"The marks in first subject is "<<marks[0]<<endl;
//     return 0;
//  }
#include<iostream>
using namespace std;
int main()
{
    int marks[]={20,43,68,72};
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;
    marks[1]=70;cout<<"The new marks for subject 2 is "<<marks[1]<<endl;

    return 0;
}
// Array is used to store data of same data types 
// syntax is like marks[]={} 
// Note values are put inside curly braces