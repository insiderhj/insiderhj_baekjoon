#include <stdio.h>

int main() {
	int n, x;
	scanf("%d %d", &n, &x);

	for (int i = 0; i < n; ++i) {
		int number;
		scanf("%d", &number);
		if (number < x) printf("%d ", number);
	}
	return 0;
}