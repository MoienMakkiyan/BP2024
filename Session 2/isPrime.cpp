#include<iostream>
using namespace std;

bool isPrime(int n);

int main()
{
    while(true)
    {
        int n; cin>>n;
        if(isPrime(n)) cout<<"This Number is Prime!!!"<<endl;
        else cout<<"Try Again..."<<endl;
    }
}

bool isPrime(int n)
{
    bool temp = 0;
    if(n==1) temp = 1;

    for(int i=2;i<n;i++)
    {
        if(n%i==0)
            temp = 1;
    }
    if(!temp) return true;
    else return false;
}
