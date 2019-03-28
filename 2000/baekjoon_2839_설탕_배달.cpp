#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	switch (n % 5) {
	case 0:
		printf("%d\n", n / 5);
		break;
	case 1:
		printf("%d\n", n / 5 + 1);
		break;
	case 2:
		if (n == 7) printf("-1\n");
		else printf("%d\n", n / 5 + 2);
		break;
	case 3:
		printf("%d\n", n / 5 + 1);
		break;
	case 4:
		if (n == 4) printf("-1\n");
		else printf("%d\n", n / 5 + 2);
		break;
	}
	return 0;
}