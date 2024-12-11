#include <iostream>
using namespace std;

int main()
{
   int n , m=0 ;
   string s;
   cin>>n;
   for (int i=1 ; i<=n ; i++)
   {
      cin>>s;
      for (int j=0 ; j<s.length() ; j++)
      {
         m += s[j] - '0' ;
      }
   }
   cout<<m;
}
