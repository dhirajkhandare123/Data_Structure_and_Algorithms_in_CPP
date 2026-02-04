#include<iostream>
using namespace std;
// declaration
void display(int a[]){
    for(int i=0;i<5;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return;
}

void change(int b[]){
    b[0] = 100;
}

int main()
{
    int arr[] = {1,2,3,4,5};
    // accessing the elements of array in another function
    // updation , pass by value or reference.
    display(arr); // calling
    change(arr); // calling
    display(arr); // calling
    return 0;
}