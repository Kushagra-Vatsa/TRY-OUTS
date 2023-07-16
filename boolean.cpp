#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    bool red_light {true};
    bool green_light {false};
    if(red_light==true)
    {
        cout<<"STOP"<<endl;
    }
    else
        cout<<"Go Through"<<endl;
        cout<<"Size of bool is "<<sizeof(bool)<<endl;
        cout<<"Red Ligth : "<<red_light<<endl;
        cout<<"Green ligth : "<<green_light<<endl;
        cout<<"If you want the value of bool is trur or false and not"
        <<" in 0 or 1 use boolalpha "<<endl;
        cout<<boolalpha;
        cout<<"Red Ligth : "<<red_light<<endl;
        cout<<"Green ligth : "<<green_light<<endl;
        
    return 0;
}