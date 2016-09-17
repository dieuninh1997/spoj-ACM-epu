#include<iostream>
using namespace std;

int main()
{
	int t,n,i, temp, index, direct;
	cin>>t;
	while(t--)
	{
		cin>>n;//vij tri
		temp=n;
		for(i=1; i<n; i++)
		{
			temp=temp-i;
			if(temp<=0) break;
			index=temp-1;
		}
		if(i%2==1) direct=1;
		else direct=0;
		
		if(direct==1)
			cout<<"TERM "<<n<<" IS "<<i-index<<"/"<<1+index<<endl;
		else
			cout<<"TERM "<<n<<" IS "<<1+index<<"/"<<i-index<<endl;
	}	
}
