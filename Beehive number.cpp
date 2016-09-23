#include<iostream>
using namespace std;
long long n;
int main()
{
	while(1)
	{
		cin>>n;
		if(n==-1) break;
		long long s=1;
		int i=0;
		while(1)
		{
			s+=6*i;
			 if(s==n)
			{
				cout<<"Y\n";break;
			}
			else if(s>n)
			{
				cout<<"N\n";break;
			}
			else
				i++;
			
		}
	}
}
//acceoted
