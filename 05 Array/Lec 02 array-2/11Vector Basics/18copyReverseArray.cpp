// Write a program to copy the contents of one array
// into another in the reverse order.

#include<iostream>
#include<vector>
using namespace std;

void display(vector<int> &a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    vector<int>v1;
    v1.push_back(12);
    v1.push_back(25);
    v1.push_back(5);
    v1.push_back(10);
    v1.push_back(90);

    display(v1);

    vector<int> v2(v1.size());

    for(int i=0;i<v2.size();i++){
        // //i + j = size - 1
        // int j = v1.size()-1-i;
        // v2[i] = v1[j];

        // OR

        v2[i] = v1[v1.size()-1-i];
    }

    display(v2);


    return 0;
}