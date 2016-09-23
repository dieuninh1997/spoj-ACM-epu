#include<iostream>
#include<string.h>
  using namespace std;
int main()
{
    char x[205];
    x[0]=x[1]='0';
   	cin>>(x+2);
    int n=strlen(x+2);
    n=n%3;
    char *p=x+2;
    if(n==1)p=p-2;
    if(n==2)p=p-1;
    for(;*p;p=p+3)
    {
        int a=(p[0]-'0')*4+(p[1]-'0')*2+p[2]-'0';
        cout<<a;
    }
}
//ok, accept
