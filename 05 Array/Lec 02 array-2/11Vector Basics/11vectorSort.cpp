#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(17);
    v.push_back(2); 
    v.push_back(13);
    v.push_back(42); 
    v.push_back(11); 

    for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<" ";
    }

    cout<<endl;
    //sort
    sort(v.begin(),v.end()); // usually use Quick sort for sorting.

    for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<" ";
    }

    return 0;
}