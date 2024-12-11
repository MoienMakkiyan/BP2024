#include <iostream>
#include <math.h>

using namespace std;

int isPrime(int n);

int main()
{
    int n;
    cin>>n;
    for(int i=2;i<=n;i++)
        cout<<isPrime(i)<<endl;
    return 0;
}

int isPrime(int n)
{
    int temp = 0;
    static int counter = 0;

    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            temp++;
        }
    }
    if(temp==0) counter++;
    //cout<<"counter = "<<counter;
    return counter;
}
