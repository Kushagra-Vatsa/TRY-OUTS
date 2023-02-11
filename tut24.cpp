#include <iostream>
using namespace std;
class Employee
{
    int id;
    static int count;
    public:
        void setdata(void)
        {
            cout<<"Enter the empId :"<<endl;
            cin>>id;
            count++;
        }
        void getdata(void)
        {
            cout<<"The id of employee is "<<id<<" and the employee number is "<<count<<endl;
        }
};
int Employee::count;//default value is zero
//To set count to other value ---> int Employee::count=1000;

int main() {
    Employee Kush,Noddy;
    Kush.setdata();
    Kush.getdata();
    Noddy.setdata();
    Noddy.getdata();
    return 0;
}
