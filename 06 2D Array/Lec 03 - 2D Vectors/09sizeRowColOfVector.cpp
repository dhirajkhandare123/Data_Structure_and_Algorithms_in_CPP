#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector< vector<int> > v(3,vector<int>(4,20));

    int row= v.size();
    int column= v[0].size();

    cout<<"Rows: "<<row<<endl;
    cout<<"Columns: "<<column<<endl;

    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}