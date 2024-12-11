#include <iostream>

using namespace std;

int main()
{
    long int n,i;
    int p;
    cin>>n;
    for(i=2;i<=n && n>1;i++){
                p=0;
            while(n%i==0){
               p++;
               n/=i;
            }
            if(p>0)
                cout<<i<<" ";
        }

    return 0;
}
