#include<iostream>
using namespace std;
int dao(int x)
{
	int rev=0,du;
	while(x)
	{
		du=x%10;
		rev=rev*10+du;
		x/=10;
	}
	return rev;
}
int main()
{
	int a,b;
	cin>>a>>b;
	if(dao(a) > dao(b))
		cout<<dao(a);
	else cout<<dao(b);
//accepted nha	
}
