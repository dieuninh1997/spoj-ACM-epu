#include<iostream>
using namespace std;
int kt(int a[])
{
	int k=0;
	for(int i=0; i<8-1; i++)
	{
		if(k!=1&&a[i]<a[i+1])
			k++;
		if(k!=2 && a[i]>a[i+1])
			k+=2;
	}
	return k;
}
int main()
{
	int a[8],i;
	for(i=0; i<8; i++)
		cin>>a[i];
	
	if(kt(a)==1) cout<<"ascending";
	else if(kt(a)==2)cout<<"descending";
	else if(kt(a)!=1 && kt(a)!=2) cout<<"mixed";
	
}
//accepted 
