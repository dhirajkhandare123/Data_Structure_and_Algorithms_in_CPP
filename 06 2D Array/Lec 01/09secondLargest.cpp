// Write C++ program to find the largest element of a given
// 2D array of integers.

#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int arr[3][3]={1,2,113,4,5,16,7,81,9};

    int largest=INT_MIN;
    int second_largest=INT_MIN;
    
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(largest<arr[i][j]){
                second_largest=largest;
                largest=arr[i][j];
            }
            else if(second_largest<arr[i][j]){
                second_largest=arr[i][j];
            }
        }
    }

    cout<<"Largest : "<<largest<<endl;
    cout<<"Second Largest : "<<second_largest<<endl;
    return 0;
}