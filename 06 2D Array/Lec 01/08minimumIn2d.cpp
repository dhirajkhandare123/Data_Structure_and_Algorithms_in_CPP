#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int arr[3][3]={11,72,93,40,55,16,7,18,9};

    int mini=INT_MAX;

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(mini>arr[i][j]) mini=arr[i][j];
        }
    }

    cout<<"MINIMUM : "<<mini<<endl;

    return 0;
}