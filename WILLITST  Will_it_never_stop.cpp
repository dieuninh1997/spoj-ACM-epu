#include<iostream>
using namespace std;
int main()
{
	unsigned long long n,i;
	cin>>n;
	i=1;
	while(i<n)
	{
		i*=2;
	}
	if(n==i)
	{
		cout<<"TAK";
	}
	else cout<<"NIE";
}
//chay qua tgian
// ok, sua long n, thanh unsigned long long => accept
