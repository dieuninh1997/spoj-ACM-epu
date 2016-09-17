#include <iostream>
using namespace std;
#include <math.h>
#include <stdlib.h>

int a,b;
long long r;

void nhap(){
	do{
		cin>>a;
	}while(a < 0 || a > 45);
	do{
		cin>>b;
	}while(b < 1 || b > 9);
}

void xuly(){
	int i = a+1;
	while(i <= 62){
		r = pow(2,i);
		while(r > 10){
			r /= 10;
		}
		if(r == b){
			cout<<i;
			exit(0);
		}
		i++;
	}
	cout<<0;
}

int main(){
	nhap();	
	xuly();
}
//100 diem
