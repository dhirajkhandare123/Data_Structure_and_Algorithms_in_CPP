#include<iostream>
#include<string>
using namespace std;

int main()
{
    string arr[] = {"123","000893","008900","456","010","990"};
    int max=stoi(arr[0]);
    string maxS = arr[0];

    for(int i=0;i<6;i++){
        int x = stoi(arr[i]);
        if(max<x){
            max=x;
            maxS=arr[i];
        }
        
    }
    cout<<max<<endl;
        cout<<maxS<<endl;
    return 0;
}