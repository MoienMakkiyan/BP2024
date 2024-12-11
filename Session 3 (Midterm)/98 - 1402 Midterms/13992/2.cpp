#include <iostream>

using namespace std;

int main()
{
    int m,n,k,x,M,t,i;
    cin>>m>>n>>k;
    x=m%k;
    t=x;
    for(i=2;i<=n;i++)
        x=(x*t)%k;
        if(x==0 || x==1)
            i=n+1;
    cout<<x;
    return 0;
}

