#include<iostream>
#define N 100
int m,n,mt[N][N];//m :dong n:cot
using namespace std;
void nhap()
{
	cin>>m>>n;
	for(int i=0; i<m; i++)
		for(int j=0; j<n; j++)
			cin>>mt[i][j];
}
int _max(int a, int b, int c, int d)
{
	return max(max(a,b), max(c,d));
}

int get(int r, int c)
{
	if(r<0 || r>=m || c<0||c>=n)
		return 0;
	return mt[r][c]; 
}

void xuly()
{
	for (int i=1;i<m;i++)
	{
		for (int j=0;j<n;j++)
		{
			mt[i][j] += _max(
				get(i-2,j-1),
				get(i-2,j+1),
				get(i-1,j-2),
				get(i-1,j+2)
			);
		}
	}
	int kq=0;
	for(int j=0;j<n;j++)
	{
		kq=max(kq,mt[m-1][j]);
	}
	cout<<kq;
}
int main()
{
	nhap();
	xuly();
}
//ok 100 diem
