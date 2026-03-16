// brute force method

#include<iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 6, 7, 8, 9, 5, 11};
    int n = sizeof(arr)/sizeof(int);
    for(int i=1;i<=n;i++){
        bool flag = false;
        for(int j = 0; j < n ; j++){
            if(arr[j] == i){
                flag = true;
            }
        }
        if(flag == false){
            cout<<"Not found: "<<i<<endl;
           return 0;
        }
    }
    cout<<"Everything okk....."<<endl;
    return 0;
}