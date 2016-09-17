#include<iostream>
using namespace std;
int x, a[100][51];
void nhap()
{
	cin>>x;
	while(x<=0 || x>=50)
		cin>>x;
	
}

void xuly()
{
	for( int i=0; i<2*x+2; i++)
	{
		for(int j=0; j<x+2; j++)
		{		

			if(i==x || i==x+1|| j==0  || j==x+1)
			{
				cout<<"*";
			}
			else
			{
				cout<<".";
			}	
		}
		cout<<endl;
	}
}
int main()
{
	nhap();
	xuly();
}
