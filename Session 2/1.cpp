#include<iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;

    int table[n][n];
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            table[i][j]=(i+1)*(j+1);

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            cout<<table[i][j]<<"\t";
        cout<<endl;
    }

}
