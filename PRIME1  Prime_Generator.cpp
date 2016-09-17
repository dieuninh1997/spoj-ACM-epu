#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	long test_n=0, n1, n2 , t;
	bool prime;
	
	cin>>test_n;
	
	while(test_n --)
	{
		cin>>n1>>n2;
		if(n1==1 ||n1==0) n1=2;
		
		t=sqrt(n2);
		for(long i=n1; i<=n2; i++)
		{
			for(long j=2; j<=t; j++)
			{
				if(i%j==0 && i!=j) goto ninh;
			}
			cout<<i<<endl;
			ninh:;
		}
	}
}
//accepted
