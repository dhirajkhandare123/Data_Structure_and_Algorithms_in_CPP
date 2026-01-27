// 1) Using swap() librarie function.
// #include<iostream>
// using namespace std;

// int main()
// {
//     int a,b;
//     cin>>a>>b;
//     cout<<a<<" "<<b<<endl;

//     swap(a,b);

//     cout<<"After swapping."<<endl;

//     cout<<a<<" "<<b<<endl;

//     return 0;
// }

// 2) Using extra variable.
#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    cout<<a<<" "<<b<<endl;

    int temp=0;

    temp = a;
    a = b;
    b = temp;

    cout<<"After swapping."<<endl;

    cout<<a<<" "<<b<<endl;

    return 0;
}