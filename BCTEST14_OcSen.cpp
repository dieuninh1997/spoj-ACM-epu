#include<iostream>
using namespace std;
int a,b,v;
void nhap()
{
	cin>>a>>b>>v;
}
void xuly()
{
	if(a==v) 
	{
		cout<<1;	
	}
	else if((v-b)%(a-b)==0)
	{
		cout<<(v-b)/(a-b);
	}
	else 
	{
		cout<<((v-b)/(a-b))+1;
	}
}
int main()
{
	nhap();
	xuly();
}
//100 diem nha
