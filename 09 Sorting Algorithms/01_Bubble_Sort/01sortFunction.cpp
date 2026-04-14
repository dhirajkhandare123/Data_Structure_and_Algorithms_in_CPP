#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int>v(5);
    for(int i=0;i<v.size();i++){
        cin>>v[i];
    }

    sort(v.begin(),v.end()); // inbuilt function

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}

// to sort -> put in ascending order. 1 2 3 4 5
// increasing order -> put in ascending order. 1 2 3 4 5
// non-decrising order -> put in ascending order. 1 2 3 4 5
// sort in -> put in ascending order. 1 2 3 4 5

// decrising order 5 4 3 2 1
// non increasing order 5 4 3 2 1