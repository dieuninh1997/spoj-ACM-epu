//dem so o vuong khac nhau trong ma tran NxN
#include<iostream>
using namespace std;
int main()
{
	while(1)
	{
		int n;
		cin>>n;
		if(n==0) break;
		int dem=0;
		while(n>0)
		{
			dem+=n*n;
			n--;
		}
		cout<<dem<<endl;
	}
}
//ok nhé accept
