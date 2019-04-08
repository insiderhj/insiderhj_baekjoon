#include <stdio.h>

int main() {
	int first, curr, hap, count;
	scanf("%d", &first);
	curr = first;
	for (count = 1; ; ++count) {
		hap = curr / 10 + curr % 10;
		curr = curr % 10 * 10 + hap % 10;

		if (curr == first) break;
	}
	printf("%d\n", count);
	return 0;
}