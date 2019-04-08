#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	int words = 0;
	getline(cin, str);
	for (int i = 0; i < str.length(); ++i) {
		if (str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z') {
			if (i == 0 || str[i - 1] == ' ') ++words;
		}
	}
	cout << words << endl;
	return 0;
}