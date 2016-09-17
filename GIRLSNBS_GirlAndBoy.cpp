#include<iostream>
using namespace std;
int main()
{
	int g,b;
	cin>>g>>b;
	while(g!=-1 && b!=-1)
	{
	int kq=0;
	int maxx=max(g,b);
	int minx=min(g,b);
	
	minx++;
	kq=maxx/minx;
	if(maxx%minx)//ko chia het
		kq++;

	cout<<kq<<endl;
	cin>>g>>b;
	}
}//ok accept
