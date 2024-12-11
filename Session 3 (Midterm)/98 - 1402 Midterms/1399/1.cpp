#include<iostream>
using namespace std;


int main()
  {
   long long int n;
   int sum=0;
   cin>>n;
   while(n>0)
   {
       n/=10;
       sum++;
   }
   cout<<sum;
  return 0;
  }












