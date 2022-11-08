#include<iostream>
using namespace std ;
float moneyrecieved(int money,float factor=1.04)  //Here if value of factor is not given , computer 
                                                    // will use 1.04 
{
    return money*factor;
}
int main()
{   
    int money;
    cout<<"Enter the money"<<endl;
    cin>>money;
    cout<<"If you have "<<money<<" rs , then you get"<<moneyrecieved(money)<<endl;
    cout<<"If you are VIP then you get rs"<<moneyrecieved(money,1.10)<<endl; 

    return 0;
}