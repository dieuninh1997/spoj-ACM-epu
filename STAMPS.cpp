//muon tem
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int n,i=1,d=0;
	cin>>n;
	while(n--)
	{
		d++;
		int needs, friends;
		cin>>needs>>friends;
		int a[1000];
		for(int j=0; j<friends;j++)
		{
			cin>>a[j];
		}
		
	
		sort(a,a+friends);
	
	//	int dem=0;
		int s=0,t;
		for(t=friends-1;t>=0; --t)
		{
		//	needs-=a[t];
			//dem++;
			//if(needs<=0)
			//{
			//	cout<<dem<<endl;
			//	break;
			//}
			if(s>=needs)break;
			s+=a[t];
		
		}
		
		//if(needs>0) cout<<"impossible";
	
		if(s>=needs) cout<<"Scenario #"<<d<<":\n"<<friends-1-t<<endl;
		else cout<<"Scenario #"<<d<<":\nimpossible\n";
	}
	//accepted nhá
}
