#include<iostream>
using namespace std;
int k,a[1000];
void nhap()
{
	cin>>k;
	while(k<1||k>1000000000)
		cin>>k;	
}

void xuly()
{
	k++;
	int d=0;
	while(k!=0)
	{
		d++;
		a[d]=k%2;
		k/=2;
	}
	
	for(int i=d-1; i>=1; i--)
	{
		if(a[i]==0)
			cout<<4;
		else cout<<7;
	}
}
int main()
{
	nhap();
	xuly();
}
//100 diem
