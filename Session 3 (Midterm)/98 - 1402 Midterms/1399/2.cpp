#include <bits/stdc++.h>

using namespace std;

int main()
{
    int m , n , k , t = 1 ;
    cin >> m >> n >> k;
    for(int i = 0 ; i < n ;i++)
    {
        t*=(m%k);
        t%=k;



    }
    cout << t ;



    return 0;
}
