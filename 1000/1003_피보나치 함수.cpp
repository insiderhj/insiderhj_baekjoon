#include <stdio.h>

int fibonacci(int n) {
	switch (n) {
	case 0:
		return 0;
	case 1:
		return 1;
	default:
		int a = 0, b = 1, c;
		for (int i = 1; i < n; ++i) {
			c = a + b;
			a = b;
			b = c;
		}
		return c;
	}
}

int main() {
	int t;
	scanf("%d", &t);

	for (int i = 0; i < t; ++i) {
		int n;
		scanf("%d", &n);
		switch (n) {
		case 0:
			printf("1 0\n");
			break;
		default:
			printf("%d %d\n", fibonacci(n - 1), fibonacci(n));
		}
	}
	return 0;
}