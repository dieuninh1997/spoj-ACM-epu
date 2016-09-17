#include<iostream>
using namespace std;
int n,x,y,a;
int main()
{
	cin>>n;
	while(n--)
	{
		cin>>x>>y;
		if(x==y)
		{
			if(x%2==0) a=x*2;
			else a=(x*2)-1;
			
			cout<<a<<endl;
		}
		else if(x==y+2)
		{
			if(x%2==0) a=x+y;
			else a=x+y-1;
			
			cout<<a<<endl;
		}
		else{
			cout<<"No Number"<<endl;
		}
	
	}
}
//accepted
