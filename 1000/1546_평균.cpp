#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	vector<double> v;
	int n;
	double mx, sum = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; ++i) {
		double x;
		scanf("%lf", &x);
		v.push_back(x);
		sum += x;
	}
	mx = *max_element(v.begin(), v.end());
	printf("%lf\n", sum / mx * 100 / n);
	return 0;
}