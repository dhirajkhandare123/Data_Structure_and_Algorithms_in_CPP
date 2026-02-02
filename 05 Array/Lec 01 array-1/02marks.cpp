//Given an array of marks of studens is less than 35 print its 
// roll number. [roll number here refers to the index of the
// array.]

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter numbers of students : ";
    cin>>n;

    int marks[n];
    cout<<"Enter the marks: ";

    // input.
    for(int i=0;i<n;i++){
        cin>>marks[i];
    }

    // print marks less than 35.
    for(int i=0;i<n;i++){
        if(marks[i+1]<35){
            cout<<i<<" ";
        }
    }

    return 0;
}

//-----------------------------------------------------------

// #include<iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout<<"Enter numbers of students: ";
//     cin>>n;

//     int arr[n];
//     cout<<"Enter marks : "<<endl;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//     cout<<"Roll call of students fail: "<<endl;
//     for(int i=0;i<n;i++){
//         if(arr[i]<35) cout<<i<<" : "<<arr[i]<<endl;
//     }
// }