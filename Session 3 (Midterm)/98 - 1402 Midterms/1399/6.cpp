#include <iostream>


using namespace std;

int sum_of_digits (int x);

int main()
{

    string n; getline(cin,n);
    long long int sum=0;
    int k=1;
    if (n.length()<=1)
        cout<<"0";
    else
    {


    for(int i=0;i<n.length();i++)
            sum+=(n[i]-'0');
    while(sum>9)
    {
        sum=sum_of_digits(sum);
        k++;
    }

    cout<<k;
    }

}

int sum_of_digits (int x)
{
    int sum=0;
    while (x!=0)
    {
        sum+=(x%10);
        x/=10;
    }
    return sum;
}
