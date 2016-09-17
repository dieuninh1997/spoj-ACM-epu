#include<iostream>
using namespace std;
int n,a[3],*sum;
void nhap()
{
	do{
		cin>>n;
	}while(n<1||n>5000);
	sum=new int[n];

}
void nhap_tg()
{
	for(int i=0; i<3; i++)
		cin>>a[i];
}

void hoanvi(int &x, int &y)
{
	int temp=x;
	x=y;
	y=temp;
}

void _sort(int b[],int left ,int right)
{
	int i=left, j=right;
	int pivot=b[(left+right)/2];

	while(i<=j)
	{
		while(b[i]<pivot)
			i++;
		while(b[j]>pivot)
			j--;
		if(i<=j)
		{
			hoanvi(b[i],b[j]);
			i++;
			j--;
		}
	}
	if(left<j)
		_sort(b,left,j);
	if(i<right)
		_sort(b,i,right);

}

int main()
{
	nhap();	
	for(int i=0; i<n; i++)
	{
		nhap_tg();
		sum[i]=a[0]*3600+a[1]*60+a[2];
	}
	//sort(sum,sum+n);
	_sort(sum,0,n-1);
	for(int i=0; i<n; i++)
	{
		cout<<sum[i]/3600<<" "<<(sum[i]/60)%60<<" "<<sum[i]%60<<endl;
	}
	delete[]sum;
}
/*
hoac sd hàm sort() trong algorithm (quick sort) luon
100diem

*/
