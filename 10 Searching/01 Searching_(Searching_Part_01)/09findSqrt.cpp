// Given a non-negative integer x, return the square root of x rounded
//  down to the nearest integer. The returned integer should be 
//  non-negative as well.

// You must not use any built-in exponent function or operator.

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
    return high;
}

int main()
{
    cout<<SQRT(19);
    return 0;
}