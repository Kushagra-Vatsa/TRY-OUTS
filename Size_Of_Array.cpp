#include<iostream>
using namespace std;
int main()
{
    int scores[]{0,1,2,3,4,5,6,7,8,9};
    /*
    We can get the size of array with std::size(array_name)
    This syntax works of C++ 17 or more
    cout<<"Array : scores[] size is "<<size(scores)<<endl; here size of array is 10
    To print the value of arrays
    for (size_t i = 0; i < size(scores); i++)
    {
        cout<<"Scores ["<<i<<"] : "<<scores[i]<<endl;
    }
    */

    //Before C++ 17
    cout<<"Size of scores : "<<sizeof(scores)<<endl;
    cout<<"Size of scores[0] : "<<sizeof(scores[0])<<endl;
    cout<<"Score item count "<<sizeof(scores)/sizeof(scores[0])<<endl;
    size_t Count = sizeof(scores)/sizeof(scores[0]);
    for (size_t i = 0; i < Count; i++)
    {
        /* code */
        cout<<"Scores["<<i<<"] : "<<scores[i]<<endl;
    }
    //Range based for loop
    for(auto i:scores)
    {
        cout<<"Value : "<<i<<endl;
    }
    
    
    
    return 0;
}