#include<iostream>
using namespace std;
int main()
{
    /*
    This is how we were using pointers
        int number{23};//Is stored in stack
        int* p_number=&number;
        cout<<"Number : "<<number<<endl;
        cout<<"p_number : "<<p_number<<endl;
        cout<<"&number : "<<&number<<endl;
        cout<<"*p_number : "<<*p_number<<endl;
    */
    /*
    Writing into uninitialised memory is very bad
    int* p_number2;//Contains junk address , could be anything
    cout<<"Program stops working after this "<<endl;
    *p_number2=55;//writing into junk address - Very bad! 
    cout<<"p_number2 : "<<p_number2<<endl;
    cout<<"*p_number2 : "<<*p_number2<<endl;
    */


   //DYNAMIC HEAP MEMORY
   int* p_number4{nullptr};
   p_number4=new int;//Dynamically allocates space for single int on the heap
   *p_number4=77;
   cout<<"Dynamically allocated memory : "<<endl;
   cout<<"*p_number4 : "<<*p_number4<<endl;

   //To delete the dynamic allocation use:
   delete p_number4;//After this always point it to nullptr
   p_number4= nullptr;


   


    return 0;
}