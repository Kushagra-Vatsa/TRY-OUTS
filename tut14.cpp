#include<iostream>
using namespace std;
struct employee
{
    int eId;
    float salary;
    char favchar;
};

int main()
{
    struct employee harry;
    struct employee kushagra;
    harry.eId=1;
    harry.salary=120000;
    harry.favchar='a';

    kushagra.eId=2;
    kushagra.salary=200000;
    kushagra.favchar='c';
    cout<<"the salary of harry and kushagra are "<<harry.salary<<" and "<<kushagra.salary<<endl;
    return 0;
}