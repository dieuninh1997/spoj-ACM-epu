#include<iostream>
#include<map>
#include<algorithm>
using namespace std;
int n,m;
map<int,int>MAP;
int a[100001];
int d=1,c=1,maxx=0;

void xuly()
{
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	int d=1,c=1,ts=0,j,i=d;
	
	while(c<=n)
	{
		if(MAP[a[c]]==0)
			++ts;
		MAP[a[c]]++;
		if(ts>m)
		{
		//	i++;
			if(c-d>maxx)maxx=(c-d);
			if(MAP[a[d]]==1) ts--;
			MAP[a[d]]--;
			d++;
		}
	
	c++;
	
	}
	cout<<max(c-d,maxx);
}
int main()
{
	xuly();
}
//100 diem
