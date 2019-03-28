#include <stdio.h>

int main() {
	int t, x1, y1, r1, x2, y2, r2;
	scanf("%d", &t);

	for (int i = 0; i < t; i++) {
		scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);
		int dist = (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
		int hap = (r1 + r2) * (r1 + r2), cha = (r1 - r2) * (r1 - r2);
		if (!dist) printf("%d", r1 == r2 ? -1 : 0);
		else if (dist == hap) printf("1");
		else if (dist > hap) printf("0");
		else {
			if (dist < cha) printf("0");
			else if (dist == cha) printf("1");
			else printf("2");
		}
		printf("\n");
	}
	return 0;
}