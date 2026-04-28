// Power Logarithmic:

#include<iostream>
using namespace std;

int powLog(int x, int n){
    if(n == 0) return 1; // base case
    int half = powLog(x, n / 2);
    
    if(n % 2 == 0){
        return half * half;
    } else {
        return x * half * half;
    }
}

int main()
{
    cout << powLog(2, 9); // Output: 8
    return 0;
}
