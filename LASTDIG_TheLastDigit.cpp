//cu mu la boi cua 4 thi so cuoi giong nhau
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a,n;
	long long b,k;
	
	cin>>n;
	for(int i=0; i<n; i++)
	{
		cin>>a>>b;
	
	if(b==0&&a==0)
		k=1;
	else if(b==0)
		k=1;
	else if(a==0)
		k=0;
	else 
	{
		if(b%4==0)
			b=4;
		else 
			b=b%4;
		k=pow(a,b);
	}
	cout<<k%10<<endl;
	}
}
//accepted
