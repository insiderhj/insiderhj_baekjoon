#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	vector<int> v;
	int n;
	for (int i = 0; i < 3; ++i) {
		scanf("%d", &n);
		v.push_back(n);
	}
	sort(v.begin(), v.end());
	printf("%d\n", v[1]);
	return 0;
}