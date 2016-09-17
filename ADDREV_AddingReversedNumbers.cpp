#include<iostream>
using namespace std;
int dao(int x)
{
	int d=0, du;
	while(x>0)
	{
		du=x%10;
		x/=10;
		d=d*10+du;
	}
	return d;
}

int main()
{
	int n, n1, n2;
	cin>>n;
	while(n--)
	{
		cin>>n1>>n2;
		int a1=dao(n1);
		int a2=dao(n2);
		int sum=a1+a2;
		cout<<dao(sum)<<endl;
	}
}
//accepted
