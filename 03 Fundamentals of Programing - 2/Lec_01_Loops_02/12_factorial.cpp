#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    int product = 1;
    for(int i=1;i<=n;i++){
        product = product * i;
    }
    cout<<product;
    return 0;
}




// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter number: ";
//     cin>>n;
//     int factorial = 1;
//     // int a = 1;

//     for(int i=n;i>=1;i--){
        
//         factorial = factorial*i;
//     }
//     cout<<factorial;
//     return 0;
// }