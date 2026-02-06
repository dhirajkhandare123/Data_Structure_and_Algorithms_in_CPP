// take input from user and find count of positive,negative &
// zero

#include<iostream>
using namespace std;

int main()
{
    int arr[5];
    int p=0,n=0,z=0;

    // take input for array.
    for(int i=0;i<5;i++){
        cout<<"Enter : ";
        cin>>arr[i];
    }

    //  print array.
    cout<<"Array : ";
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    // Find positive, negative and zero count.
    for(int i=0;i<5;i++){

        if(arr[i]>0){
            p+=1;
        }
    
        else if(arr[i]<0){
            n+=1;
        }
        else{
            z+=1;
        }
    }

    // Print counts.

    cout<<"Positive elements count : "<<p<<endl;
    cout<<"Negative elements count : "<<n<<endl;
    cout<<"zero elements count : "<<z<<endl;

    return 0;
}