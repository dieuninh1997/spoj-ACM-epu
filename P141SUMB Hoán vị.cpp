#include<iostream>
using namespace std;
int n,a[5002];
void nhap()
{
	cin>>n;
	for(int i=1; i<=n; i++)
		cin>>a[i];
}
bool kt(int x)
{
	for(int i=1; i<=n; i++)
	{
		if(x==a[i])
			return false;
	}
	return true;
}
void xuly()
{
	int dem=0;
		for(int j=1; j<=n; j++)
		{
			if(kt(j))dem++;
		}
		cout<<dem;	
}
int main()
{
	nhap();
	xuly();
}
//accepted nha
