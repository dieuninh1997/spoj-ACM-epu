#include<iostream>
using namespace std;
int main()
{
	int t;
	long long n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		long long kq=((n*(n+1)/2)*3)-n;
		cout<<kq%1000007<<endl;
	}
}
//accepted
