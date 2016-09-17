#include<iostream>
using namespace std;
int n,a,b;
void nhap()
{
	cin>>n>>a>>b;
}
void xuly()
{
	cout<<min(n-a,b+1);
}
int main()
{
	nhap();
	xuly();
}
/*
Co n nguoi xep hang
ko co it hon a nguoi dung truoc -> co the dung o (n-a) vi tri tinh tu cuoi len
ko co nhieu hon b nguoi dung sau -> co the dung o (b+1) vi tri tinh tu cuoi len

=> ket qua : min(n-a, b+1)

100 diem
*/
