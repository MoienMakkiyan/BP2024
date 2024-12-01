#include<iostream>
using namespace std;

int main()
{
    int n = 8;
    int m[n];
    for(int i=0;i<n;i++)
        cin>>m[i];

    for(int i=0;i<n-1;i++)
        for(int j=1;j<n;j++)
            if(m[j-1]<m[j]) swap(m[j],m[j-1]);

    for(int i=0;i<n;i++)
        cout<<m[i]<<" ";
}
