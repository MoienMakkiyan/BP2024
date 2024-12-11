#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;
void bubble_sort(int *arr,int n);
int main()
{

    srand(time(0));

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        //cin>>arr[i];
        arr[i] = rand();

    bubble_sort(arr,n);


    for(int i=0;i<n;i++)
        cout<<arr[i]<<endl;

    return 0;
}


void bubble_sort(int *arr,int n)
{
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<n-1;j++)
            if(arr[i]<arr[j])
                swap(arr[i],arr[j]);
    }
}
