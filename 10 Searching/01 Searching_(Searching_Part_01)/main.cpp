#include<iostream>
using namespace std;
int SQRT(int n){
    int low=0;
    int high=n;
    while(low<=high){
        int mid = low + (mid - low)/2;
        if(mid * mid == n) return mid;
        if(mid*mid > n ){
            high = mid - 1;
        }
        if(mid*mid < n){
            low = mid + 1;
        }
    }
    return high;
}
int main()
{
    cout<<"I can find square root of number?"<<endl;
    cout<<"Enter number: ";
    int n;
    cin>>n;
    cout<<SQRT(n);
    return 0;
}