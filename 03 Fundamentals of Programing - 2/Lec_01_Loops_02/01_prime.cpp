#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    bool flag=true; // true means prime
    for(int i=2;i<=(n-1);i++){
        if(n%i==0){  // i is a factor of n.
            flag=false; // false means composite.
            break;
        }
        // 1 2 3 4 5 6 7  8 9 10 
    }

    if(n==1){
        cout<<"1 is neigther prime nor composite."<<endl;
    }
    else if(flag==false){
        cout<<n<<" is composite number."<<endl;
    }
    else{
        cout<<n<<" is prime number."<<endl;
    }
    return 0;
}