#include <iostream>
#include <algorithm>
using namespace std;

int a[1000001];
int main()
{
	int N;

	cin >> N;

	a[1] = 0;
	for (int n = 2; n <= N; n++) {
		a[n] = a[n - 1] + 1;
		if (n % 3 == 0) a[n] = min(a[n], a[n / 3] + 1);
		else if (n % 2 == 0) a[n] = min(a[n], a[n / 2] + 1);
	}

	cout << a[N] << endl;

	return 0;
}