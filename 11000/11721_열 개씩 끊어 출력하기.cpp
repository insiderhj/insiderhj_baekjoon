#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

int main() {
	string str;
	cin >> str;
	for (int i = 0; i < str.length(); ++i) {
		if (i && !(i % 10)) printf("\n");
		printf("%c", str[i]);
	}
}