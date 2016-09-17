#include<iostream>
using namespace std;
int main()
{
	float n;
	while(cin>>n)
	{
		if(n==0) break;
		float sum=0;
		int i;
		for(i=2;sum<n;i++)
		{
			sum+=1.0/i;
		}
		cout<<i-2<<" card(s)\n";
	
	}
}
//accepted
