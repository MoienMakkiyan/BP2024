#include<iostream>
#include<math.h>
using namespace std;

long long  counter ( long long n){
long long i,u=0;
for(i=1;i<=sqrt(n);i++){
        if(n%i==0){
            u++;
        }
}
return 2*u;
}

int main(){
long long k,c=0,i=1,a;
long long n=0;
cin>>k;
while(c==0){
    n+=i;
    a=counter (n);
    if(a>k){
        cout<<n;
        c++;
    }
    i++;
}
}
