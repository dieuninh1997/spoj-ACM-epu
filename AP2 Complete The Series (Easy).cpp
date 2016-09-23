#include<iostream>
using namespace std;
int main()
{
	int t;
	long long x,y,z,n,d,num1;
	cin>>t;
	while(t--)
	{
		cin>>x>>y>>z;
		n=(2*z)/(x+y);
		d=(y-x)/(n-5);
		num1=x-2*d;
		cout<<n<<endl;
		for(int i=0; i<n;i++)
			cout<<(num1+i*d)<<" ";
	}
}
//ADCT:  a(n)=a1+ (n-1)*d
//s(n)= (n/2) *(a1+an)
