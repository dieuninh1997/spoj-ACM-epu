#include <iostream>
using namespace std;
#include <math.h>
int a,b,c,d;

void nhap(){
	cin>>a>>b>>c>>d;
}

void xuly(){
	int xx,temp;
	float maxNum = 0;
	for(int i = 0;i <= 3;i++){
		if(fabs((float)a/c - (float)b/d) > maxNum){
			maxNum = fabs((float)a/c - (float)b/d);
			xx = i;
		}
		temp = a;a = c;c = d;d = b;b = temp;
	}
	cout<<xx;
}

int main(){
	nhap();
	xuly();
}
//accepted
