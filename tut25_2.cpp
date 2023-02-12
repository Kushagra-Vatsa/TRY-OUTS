#include<iostream>
using namespace std;
class complex
{
    int a;
    int b;
    public:
        void getdata(int v1,int v2)
        {
            a=v1;
            b=v2;
        }
        void sum(complex o1,complex o2)
        {
            a=o1.a+o2.a;
            b=o1.b+o2.b;
        }
        void displaynum()
        {
            cout<<"The complex number is "<<a<<"+"<<b<<"i"<<endl;
        }
};
int main()
{
    complex o1,o2,o3;
    o1.getdata(1,2);
    o1.displaynum();
    o2.getdata(3,4);
    o2.displaynum();
    o3.sum(o1,o2);
    o3.displaynum();
    return 0;
}