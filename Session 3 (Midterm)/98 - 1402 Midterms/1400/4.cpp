#include <iostream>
using namespace std;

int main()
{

char c;
long long int a,b;


b=0;
cin >>a;
b=a;
while (c!='c')
{
          cin>>c;

    if (c=='-')
    {
        cin>>a;
               b-=a;
    }
    if (c=='+')

    {
        cin>>a;
               b+=a;
    }

}

cout <<b<<endl;
return 0;

}
