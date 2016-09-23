#include <bits/stdc++.h>
using namespace std;
long long G,Y;
int main()
{
	cin>>G>>Y;
	long long i=1;
	while(i>0)
	{
		if(Y%i==0&&((i+2)*2+(Y/i)*2)==G)
		{
			cout<<i+2<<" "<<Y/i+2;
			break;
		}
		i++;
	}
}
//accept nha
