// Binary to Decimal

#include<iostream>
#include<vector>
using namespace std;

void display(vector<int> &v){
    int size = v.size();
    for(int i=0;i<size;i++){
        
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int binaryToDecimal(vector<int>v){
    int sum = 0;
    int x = 1;
    for(int i=6;i>=0;i--){
        sum+=v[i]*x;
        x*=2;
    }

    return sum;
}

int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);

    cout<<"Binary number: ";
    display(v);

    cout<<"Decimal number: "<<binaryToDecimal(v)<<endl;

    return 0;
}