#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2); 
    v.push_back(13);
    v.push_back(42); 
    v.push_back(11); 
    
    cout<<v[3]<<endl;
    cout<<v.at(3)<<endl;

    // update
    v.at(3) = 1000;
    cout<<v.at(3)<<endl;


    return 0;
}