#include <cmath>
#include <iostream>
#include <fstream>
using namespace std;
int n,b;
int a[100000];
void nhap()
{
cin>>n>>b;
for(int i=0;i<n;i++)
{
	cin>>a[i];
}
}
bool kt(int tg[],int x)
{
	int max=0,min=0;
for(int i=0;i<x;i++)
	if(tg[i]>b)
		max++;
	else
		if(tg[i]<b)
			min++;
	if(max==min)
		return true;
	else
		return false;			
}
void xuly()
{
	int dem=0,tg[100000],vtb[1000],sl=0;
	for(int i=0;i<n;i++)
	{
		
		if(a[i]==b)
		{
			vtb[sl]=i;
			sl++;
		}
		while(sl!=0)
		{
		for(int i=0;i<=vtb[sl-1];i++)
			for(int j=0;j<n-vtb[sl-1];j++)
			{	
				int x=0;
				for(int t=i;t<n-j;t++)
				{	
					tg[x]=a[t];
					x++;
				}
				if(kt(tg,x))
					dem++;
			}
		sl--;	
	}
	
	cout<<dem;
	}
}
	//ok 50 diem			

int main()
{
nhap();
xuly();
}
