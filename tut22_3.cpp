#include <iostream>
using namespace std;
class student
{
    public:
        int RollNo;
        void disp()
        {
            name="Kushagra";
            cout<<"The Roll number and name is "<<RollNo<<" and "<<name;
        }
    private:
        string name;
        //Function made is private cannot be called in main 
};
using namespace std;
int main() {
    // Write C++ code here
    cout << "Hello world!"<<endl;
    student obj;
    obj.RollNo=1;
    //obj.name="Kushagra"; Will throw error as name is private
    obj.disp();
    

    return 0;
}