#include<iostream>
using namespace std;
int main()
{
    int class_size[] {1,2,3,4,5};
    //We can print the data of the array using simple syntax
    for(auto value : class_size){
        cout<<"Value : "<<value<<endl;
    }
    //We cannot change value of constant arrays
    const size_t arr[]={1,2,3,4,5};
    //arr[0]=5;
    return 0;
}