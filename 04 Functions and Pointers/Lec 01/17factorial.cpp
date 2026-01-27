// Print factorials of first n numbers.

// #include<iostream>
// using namespace std;

// int fact(int a){
//     int f = 1;
//     for(int i=2;i<=a;i++){
//         f *= i;
//     }
//     return f;
// }

// int main()
// {
//     int n;
//     cout<<"Enter: ";
//     cin>>n;

//     for(int i=0;i<=n;i++){
//         cout<<i<<"!"<<" = "<<fact(i)<<endl;
//     }
//     return 0;
// }

// Efficient method.

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter: ";
    cin>>n;

    int fact=1;
    for(int i=1;i<=n;i++){
        fact = fact * i;
        cout<<fact<<endl;
    }

    return 0;
}