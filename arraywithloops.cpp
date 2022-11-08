#include<iostream>
using namespace std;
int main ()
{
    int marks[]={1,10,11,19};
    int i=0;




    // first for loop
    // for (int i=0;i<4;i++)

    // {
    // cout<<"The value of marks " << i <<" is "<<marks[i]<<endl;
    // }




    // second while loop
    // while(i<4)
    // {
    //     cout<<"The marks is "<<marks[i]<<endl;
    //     i++;
    // }



    // using do while loop
    do
    {
        cout<<"The marks are "<<marks[i]<<endl;
        i++;
    }
    while(i<4);
    return 0;
}