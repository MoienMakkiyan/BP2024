#include <iostream>

using namespace std;

int main()
{
    int n, sum = 0;
    int i,j;
    string number;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>number;
        for(j=0;j<number.length();j++)
            sum += number[j]-48;
    }
    cout<<sum;
    return 0;
}
