#include<iostream>

using namespace std;

int main()
{
    int n; cin>>n;
    for(int line = 0; line < n; line++)
    {
        for(int i = 1;i<n-line;i++)
        {
            cout<<" ";
        }
        cout<<"*";
        for(int i = 0;i<2*line-1;i++)
        {
            if(line == n-1) cout<<"*";
            else cout<<" ";
        }
        if(line != 0) cout<<"*";
        cout<<endl;
    }



    return 0;
}

