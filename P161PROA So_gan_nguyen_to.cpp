#include<iostream>
#include<cmath>
using namespace std;

bool snt(int x)
{
	int j=sqrt(x);
	for(int i=2; i<=j;i++)
	{
		if(x%i==0)
			return false;
	}
	return true;
}
int main()
{
	long long x,n,*a;
	cin>>n;
	a=new long long[n];
	for(int i=0; i<n; i++)
		cin>>a[i];
	
	for(int i=0; i<n; i++)
	{
		long long t=sqrt(a[i]);
		if(a[i]==1||t*t!=a[i]||!snt(t))
			cout<<"NO\n";
		else cout<<"YES\n";
	}
		
		
	delete[]a;
}
//accepted
