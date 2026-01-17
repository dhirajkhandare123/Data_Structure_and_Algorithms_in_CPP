// Print the sum of this series:
//  1 - 2 + 3 - 4 + 5 - 6 ... 'n'. 

#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;

    int sum=0;

    // using loop.
    for(int i = 0;i<=n;i++){
        if(i%2==0) sum-=i;  // sum = sum-i;
        else sum+=i;
    }

    cout<<sum;

    // Without using loop.
    // if(n%2==0) cout<<-(n/2);
    // else cout<<(-n/2)+n;

    return 0;
}