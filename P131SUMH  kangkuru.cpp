#include <cmath>
#include <iostream>
#include <fstream>
using namespace std;
int a,b,c;
void nhap()
{
	cin>>a>>b>>c;
	while(a<1||b<a|c<b||c>100)
		cin>>a>>b>>c;
}
void kangkuru()
{
	int x,y;
	x=b-a;
	y=c-b;
	if(x>y)
		cout<<x-1;
	else
	cout<<y-1;	
}
int main()
{
	nhap();
	kangkuru();
	//ok accept nhé
}
