#include <iostream>
#include <cstring>
#include<cmath>
using namespace std;
char s[111];
char t[111][111];
 
int main() {
  cin>> s;
  int n = strlen(s);
  int row;
  int col;
  for (row = sqrt(n); row >= 1; --row)
    if (n % row == 0) break;
  col = n / row;
  for (int i = 0; i < col; ++i)
    for (int j = i; j < n; j += row)
      t[i][(j - i) / row] = s[j];
  for (int i = 0; i < row; ++i)
    cout<< t[i];
}
//accepted 
