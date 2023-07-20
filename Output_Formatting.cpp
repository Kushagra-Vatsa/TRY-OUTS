#include<iostream>
#include<ios>
#include<iomanip>
using namespace std;
int main()
{
    cout<<"Unformatted table : "<<endl;
    cout<<"Kushagra"<<" "<<"Vatsa"<<" 18"<<endl;
    cout<<"Mayank"<<" "<<"Kumar"<<" 19"<<endl;
    cout<<"-------------"<<endl;
    /*
    std::setw() : Adjusts the field with for the item about to be printed. 
    The setw() manipulator only affects the next value to be printed.
    However it is recommened to use a variable to store width and then 
    pass it to setw(variable) for easy modification
    */
    cout<<"Formatted table : "<<endl;
    cout<<setw(10)<<"First Name"<<setw(10)<<"Last Name"<<setw(5)<<"Age"<<endl;
    cout<<setw(10)<<"Kushagra"<<setw(10)<<"Vatsa"<<setw(5)<<"18"<<endl;
    cout<<setw(10)<<"Mayank"<<setw(10)<<"Kumar"<<setw(5)<<"19"<<endl;
    cout<<"-------------"<<endl;
    cout<<endl;
    int width_name=12;
    int width_age=6;
    cout<<"Formatted table : "<<endl;
    cout<<setw(width_name)<<"First Name"<<setw(width_name)<<"Last Name"<<setw(width_age)<<"Age"<<endl;
    cout<<setw(width_name)<<"Kushagra"<<setw(width_name)<<"Vatsa"<<setw(width_age)<<"18"<<endl;
    cout<<setw(width_name)<<"Mayank"<<setw(width_name)<<"Kumar"<<setw(width_age)<<"19"<<endl;
    cout<<"-------------"<<endl;
    cout<<endl;
    /*
    Justify : Values can be justified in their fields. There are three manipulators
    for adjusting the justification: left, right, and internal.
    eg:rigth justified
    */
    cout<<"Rigth Justified Table : "<<endl;
    cout<<right;
    width_name=15;
    width_age=8;
    cout<<"Formatted table : "<<endl;
    cout<<setw(width_name)<<"First Name"<<setw(width_name)<<"Last Name"<<setw(width_age)<<"Age"<<endl;
    cout<<setw(width_name)<<"Kushagra"<<setw(width_name)<<"Vatsa"<<setw(width_age)<<"18"<<endl;
    cout<<setw(width_name)<<"Mayank"<<setw(width_name)<<"Kumar"<<setw(width_age)<<"19"<<endl;
    cout<<"-------------"<<endl;
    cout<<endl;

    // Eg:left justified table
    cout<<"Left Justified Table : "<<endl;
    cout<<left;
    width_name=15;
    width_age=8;
    cout<<"Formatted table : "<<endl;
    cout<<setw(width_name)<<"First Name"<<setw(width_name)<<"Last Name"<<setw(width_age)<<"Age"<<endl;
    cout<<setw(width_name)<<"Kushagra"<<setw(width_name)<<"Vatsa"<<setw(width_age)<<"18"<<endl;
    cout<<setw(width_name)<<"Mayank"<<setw(width_name)<<"Kumar"<<setw(width_age)<<"19"<<endl;
    cout<<"-------------"<<endl;
    cout<<endl;

    
    //Internal justified : sign is left justified , data is right justified
    std::cout << std::endl;
    std::cout << "Internal justified : " << std::endl;
    std::cout << std::right;
    std::cout << std::setw(10) << -123.45 << std::endl;
    std::cout << std::internal;
    std::cout << std::setw(10) << -123.45 << std::endl;
    cout<<"------------"<<endl;

    // setfill() is used to fill empty spaces 
    cout<<"Filled Table Format"<<endl;
    cout<<"Left Justified Table : "<<endl;
    cout<<left;
    width_name=15;
    width_age=8;
    cout<<setfill('-');
    cout<<setw(width_name)<<"First Name"<<setw(width_name)<<"Last Name"<<setw(width_age)<<"Age"<<endl;
    cout<<setw(width_name)<<"Kushagra"<<setw(width_name)<<"Vatsa"<<setw(width_age)<<"18"<<endl;
    cout<<setw(width_name)<<"Mayank"<<setw(width_name)<<"Kumar"<<setw(width_age)<<"19"<<endl;
    cout<<endl;

    //Boolalpha : used to display boolean data into true and false 
    bool a{true};
    bool b{false};
    cout<<"Without boolalpha"<<endl;
    cout<<"Value of boolean a and b are "<<a<<" and "<<b<<endl;
    cout<<endl;
    cout<<"With boolalpha"<<endl;
    cout<<boolalpha;
    cout<<"Value of boolean a and b are "<<a<<" and "<<b<<endl;
    // We can disable boolalpha using noboolalpha



    //showpos and noshowpos : show or hide the + sign for positive numbers;

    int x{10};
    int y{20};
    cout<<showpos;
    cout<<"Value of x and y with showpos is "<<x<<" and "<<y<<endl;
    cout<<noshowpos;
    cout<<"Value of x and y with noshowpos is "<<x<<" and "<<y<<endl;


    // We can also use different number system in C++ like binary , hexadecimal and octal.
    int pos_int{1000};
    int neg_int {-1000};
    double double_var{498.32};
    cout<<endl;
    cout<<"default base format"<<endl;
    cout<<"pos_int : "<<pos_int<<endl;
    cout<<"neg_int : "<<neg_int<<endl;
    cout<<"doublr_var : "<<double_var<<endl;


    cout<<"pos_int in different base format "<<endl;
    cout<<"pos_int(dec) : "<<dec<<pos_int<<endl;
    cout<<"pos_int(hex) : "<<hex<<pos_int<<endl;
    cout<<"pos_int(oct) : "<<oct<<pos_int<<endl;
    cout<<endl;
    cout<<"neg_int in different base format "<<endl;
    cout<<"neg_int(dec) : "<<dec<<neg_int<<endl;
    cout<<"neg_int(hex) : "<<hex<<neg_int<<endl;
    cout<<"neg_int(oct) : "<<oct<<neg_int<<endl;
    cout<<endl;
    cout<<"double_var in different base format "<<endl;
    cout<<"double_var(dec) : "<<dec<<double_var<<endl;
    cout<<"double_var(hex) : "<<hex<<double_var<<endl;
    cout<<"double_var(oct) : "<<oct<<double_var<<endl;
    cout<<"It doesnt has an effect on floating numbers as they are not effected "<<endl;
    cout<<endl;

    //std::uppercase can be used to convert them into uppercase
    cout<<uppercase;
    cout<<"pos_int in different base format "<<endl;
    cout<<"pos_int(dec) : "<<dec<<pos_int<<endl;
    cout<<"pos_int(hex) : "<<hex<<pos_int<<endl;
    cout<<"pos_int(oct) : "<<oct<<pos_int<<endl;
    cout<<endl;
    cout<<"neg_int in different base format "<<endl;
    cout<<"neg_int(dec) : "<<dec<<neg_int<<endl;
    cout<<"neg_int(hex) : "<<hex<<neg_int<<endl;
    cout<<"neg_int(oct) : "<<oct<<neg_int<<endl;
    cout<<endl;
    

    cout<<endl;

    



    return 0;
}
