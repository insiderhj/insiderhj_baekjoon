#include <stdio.h>

int main() {
	int n, result = 0;
	scanf("%d", &n);

	for (int i = 0; i < n; ++i) {
		char a;
		scanf("%d", &a);
		result += a - '0';
	}
	printf("%d\n", result);
	return 0;
}