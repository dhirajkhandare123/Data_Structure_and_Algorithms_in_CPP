// Find perfect square root

#include<iostream>
using namespace std;

int SQRT(int x){
    int low=0;
    int high=x;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(mid*mid==x) return mid;
        if(mid*mid > x) {
            high = mid - 1;
        }
        if(mid * mid < x) {
            low = mid + 1;
        }
    }
}

int main()
{
    cout<<SQRT(36);
    return 0;
}