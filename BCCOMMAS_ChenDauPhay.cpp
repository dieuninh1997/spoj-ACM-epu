#include <iostream>
using namespace std;
long long a;
int b[100];
void nhap()
{
		cin>>a;
}
void xuly()
{
	int i=0,t=0;
	while(a!=0)
	{
		if(i==3)
		{
		b[t]=-1;
		t++;
		i=0;
		}
		b[t]=a%10;
		t++;
		a=a/10;
		i++;
	}
	for(int i=t-1;i>=0;i--)
		if(b[i]==-1)
		cout<<",";
		else
		cout<<b[i];
}
int main()
{
	nhap();
	xuly();
}
//100 diem
