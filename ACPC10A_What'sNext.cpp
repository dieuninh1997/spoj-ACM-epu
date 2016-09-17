#include<iostream>
using namespace std;
int main()
{
	int n1, n2,n3;
	while(1)
	{
		cin>>n1>>n2>>n3;
		if(n1==0&&n2==0&&n3==0) break;
		if((n3-n2)==(n2-n1))
		{
			cout<<"AP "<<n3+(n3-n2)<<endl;
		}
		else cout<<"GP "<<n3*(n3/n2)<<endl;
	}
}

/*
accepted
*/
