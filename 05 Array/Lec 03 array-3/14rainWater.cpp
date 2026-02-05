#include<iostream>
#include<vector>
#include<climits>
using namespace std;

void display(vector<int>&v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int water(vector<int>&height){

    int n=height.size();

    int prev[n];
    prev[0]=-1;
    int max=height[0];
    for(int i=1;i<n;i++){
        prev[i]=max;
        if(max<height[i]) max=height[i];
    }

    int next[n];
    next[n-1] = -1;
    max=height[n-1];
    for(int i=n-2;i>=0;i--){
        next[i]=max;
        if(max<height[i]) max=height[i];
    }

    int Min[n];
    for(int i=0;i<n;i++){
        Min[i]=min(prev[i],next[i]);
    }

    int level=0;
    
    for(int i=0;i<n;i++){
        if(height[i]>Min[i]){
            level=level+height[i]-Min[i];
        }
    }
    return level;
    
}

int main()
{
    vector<int>v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(2);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(3);
    v.push_back(2);
    v.push_back(1);
    v.push_back(2);
    v.push_back(1);

    cout<<water(v);


    return 0;
}