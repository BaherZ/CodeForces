#include <iostream>
using namespace std;

int main() {
	long long n;
	cin>>n;
	if(n<=2)
	{
		cout<<-1;
		return 0;
	}
	if(n%2)
	{
		long long b =(n*n-1)/2.0;
		long long c=(n*n+1)/2.0;
		cout<<b<<" "<<c;
	}
	else
	{
		long long c=(1.0/4)*(n*n)+1;
		long long b=c-2;
		cout<<b<<" "<<c;
	}
	return 0;
}