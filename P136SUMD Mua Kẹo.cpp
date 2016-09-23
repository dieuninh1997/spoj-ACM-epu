#include<iostream>
using namespace std;
int main()
{
	int c,k;
	cin>>c>>k;
	int t=1;
	while(k--) t*=10;
	int d=c%t;//4
	if((d+1)>(t/2))
		cout<<(c-d+t);
	else cout<<(c-d);
}
