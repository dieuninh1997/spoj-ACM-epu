#include <iostream>
#include <cstring>
using namespace std;

bool kt(char c) {
	char test[] = "aoeui";
	for (int i=0;i<5;i++) {
		if (c == test[i]) return false;
	}
	return true;
}

int main() {
	char s[1000];
	cin >> s;
	int len = strlen(s);
	for (int i=0;i<len;i++) {
		char c = tolower(s[i]);
		if (kt(c)) {
			cout << '.' << c;
		}
	}
}
//ok 80 diem
