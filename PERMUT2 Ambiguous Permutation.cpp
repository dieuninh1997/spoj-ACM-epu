#include<iostream>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);
	int n,i;
	while(1){
		cin>>n;
		if(n==0)break;
		int a[n+1];
		for(i = 1;i <= n;i++)
			cin>>a[i];
		for(i = 1;i <= n;i++)
		{
			if(a[a[i]] != i)
				break;	
		}
		if( i<=n) cout<<"not ambiguous\n";
		else cout<<"ambiguous\n";
	}
}
//accepted , 0.04s
