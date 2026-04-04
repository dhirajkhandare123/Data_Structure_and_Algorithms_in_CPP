// display this GP - 1,2,4,8,16,32,........ upto n terms
// an = a*r^(n-1)

#include <iostream>
using namespace std;

int main(){
    cout<<"Enter n";
    int n;
    cin>>n;
    for(int i=1;i<=n;i=i*2){
        cout<<i<<endl;
    }
    return 0;
}

// Without using formula (Non mathemetics method).

// #include<iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout<<"Enter n: ";
//     cin>>n;
//     int a = 1;
//     for(int i=1;i<=n;i++){
//         cout<<a<<" ";
//         a=a*2;
//     }
//     return 0;
// }