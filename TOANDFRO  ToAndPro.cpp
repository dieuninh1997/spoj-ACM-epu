#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char s[10000];
	int cot,flag;
	while(1)
	{
		cin>>cot;
		if(cot==0)break;
		cin>>s;
		int k=0;
		for(int i=0; i<cot; i++)
		{
			k++;
			flag=0;
			for(int j=i; j<strlen(s);j+=cot)
			{
				if(flag==0)
				{
					cout<<s[j];
					flag=1;
				}
				else
				{
					cout<<s[j+cot-k-i];
					flag=0;
				}
			}
			
		}
		cout<<"\n";
	}
}
//accepted 
