#include <stdio.h>

int main() {
	int t;
	scanf("%d", t);

	for (int i = 0; i < t; ++i) {
		int x1, y1, x2, y2, count, asdf = 0;
		scanf("%d %d %d %d %d", &x1, &y1, &x2, &y2, &count);
		for (int j = 0; j < count; ++j) {
			int cx, cy, r;
			scanf("%d %d %d", &cx, &cy, &r);
			int dist1, dist2;
			dist1 = (cx - x1) * (cx - x1) + (cy - y1) * (cy - y1);
			dist2 = (cx - x2) * (cx - x2) + (cy - y2) * (cy - y2);
			if (dist1 < r * r && dist2 > r * r) ++asdf;
			if (dist1 > r * r && dist2 < r * r) ++asdf;
		}
		printf("%d\n", asdf);
	}
	return 0;
}