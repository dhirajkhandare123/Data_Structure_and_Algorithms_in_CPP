#include<iostream>
#include<vector>
using namespace std;

int main()
{
    // vector<int> v(5);

    // cout<<v.size()<<endl;
    // cout<<v.capacity()<<endl;

    // cout<<v[0]<<endl;  // 0
    // cout<<v[1]<<endl;  // 0
    // cout<<v[2]<<endl;  // 0
    // cout<<v[3]<<endl;  // 0
    // cout<<v[4]<<endl;  // 0
//-------------------------------------------------------------

    vector<int> v(5,7);  // Initial size = 5,each element value is 7

    cout<<v[0]<<endl;  // 7
    cout<<v[1]<<endl;  // 7
    cout<<v[2]<<endl;  // 7
    cout<<v[3]<<endl;  // 7
    cout<<v[4]<<endl;  // 7

    return 0;
}