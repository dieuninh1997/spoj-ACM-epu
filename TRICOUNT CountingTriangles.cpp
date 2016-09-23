#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n,kq;
		cin>>n;
	 	if(n%2==0)
		{
			kq=n*(n+2)*(2*n+1)/8;
		}
		else
		{
			kq=(n*(n+2)*(2*n+1)-1)/8;
		}
		cout<<kq<<endl;
	}
}

	
	//accepted
