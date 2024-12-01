#include<iostream>

using namespace std;

int main()
{
    int n; cin>>n;

    int temp[n];
    for(int i=0;i<n;i++)
    {
        if(n%(i+1)==0)
            temp[i]=i+1;
        else temp[i]=0;
        cout<<"i = "<<i<<endl;
        cout<<"array = "<<temp[i]<<endl;
    }
    for(int i=0; i<n;i++)
    {
        if(temp[i]!=0)
            cout<<temp[i]<<" ";
    }
}


