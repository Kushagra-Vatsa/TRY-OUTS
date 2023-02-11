#include <iostream>
using namespace std;
class Employee
{
    int id;
    int salary;
    public:
        void setdata()
        {
            cout<<"Enter the id of this employee:"<<endl;
            cin>>id;
            cout<<"Enter the salary of this employee"<<endl;
            cin>>salary;
        }
        void getdata()
        {
            cout<<"The id and salary are "<<id<<" and "<<salary<<endl;
        }
};
int main()
{
    Employee nike[10];
    for(int i=0;i<5;i++)
    {
        nike[i].setdata();
        nike[i].getdata();
    }
    return 0;
}