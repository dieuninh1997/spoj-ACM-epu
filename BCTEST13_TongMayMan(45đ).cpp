#include<iostream>
using namespace std;
int l,r, LKSUM=0, i=1;
void nhap()
{
	cin>>l>>r;
}
int next(int i)
{
	int n;
	i--;
	if(i==0) 
	{
		n=4;
		return n;	
	}
	if(i==1)
	{
		n=7;
		return n;
	}
	if(i>=2)
	{
		n=next(i%2+1)+next(i/2)*10;
		return n;
	}
}
void ktra(int l,int r)
{

	while(next(i)<l)
	{
		i++;
	}
	LKSUM=LKSUM+next(i);
	if(l<r)
	{
		l++;
		ktra(l,r);
	}
} 
int main()
{
	nhap();
	ktra(l,r);
	cout<<LKSUM;
}
//45 diem 
