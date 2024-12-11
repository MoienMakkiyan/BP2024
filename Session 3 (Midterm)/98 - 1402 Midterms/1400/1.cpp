#include<iostream>
#include<cmath>
#include<iomanip>
#include<string.h>

// just a template to start

using namespace std;

int main(){
	long long int a,c = 0;
	cin>>a;
	while(a != 0){
		a /= 10;
		c++;
	}
	cout<<c;
	return 0;
}
