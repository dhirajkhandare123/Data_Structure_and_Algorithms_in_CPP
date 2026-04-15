#include<iostream>
using namespace std;

int main()
{
    int arr[] = {5,4,1,2,3};
    int n=5;
    for(int i=1;i<n;i++){
        int j=i;
        while(j>=1){
            if(arr[j]>=arr[j-1]) break;
            if(arr[j]<arr[j-1]){
                swap(arr[j],arr[j-1]);
            }
            j--;
        }
    }

    for(int ele:arr){
        cout<<ele<<" ";
    }
    cout<<endl;
    return 0;
}