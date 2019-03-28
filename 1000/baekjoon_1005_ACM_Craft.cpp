#include <stdio.h>
#include <vector>
#include <queue>

using namespace std;

class Node {
public:
	int parent_time;
	int time;
	vector<int> children;
	int count;

	Node(int time) : parent_time(0), time(time), count(0) {};
};

int main() {
	int t;
	scanf("%d", &t);

	for (int i = 0; i < t; ++i) {
		queue<int> qu;
		int n, k;
		scanf("%d %d", &n, &k);
		vector<Node*> nodes;

		for (int j = 0; j < n; ++j) {
			int time;
			scanf("%d", &time);
			nodes.push_back(new Node(time));
		}

		for (int j = 0; j < k; ++j) {
			int first, second;
			scanf("%d %d", &first, &second);
			first--, second--;
			nodes[first]->children.push_back(second);
			nodes[second]->count++;
		}

		for (int j = 0; j < n; ++j) {
			if (nodes[j]->count == 0) {
				qu.push(j);
				for (int a : nodes[j]->children) {
					nodes[a]->count--;
				}
				nodes[j]->count = -1;
				j = -1;
			}
		}

		int want;
		scanf("%d", &want);
		want--;

		while (!qu.empty()) {
			if (qu.front() == want) {
				printf("%d\n", nodes[qu.front()]->time + nodes[qu.front()]->parent_time);
				break;
			}
			for (int a : nodes[qu.front()]->children) {
				if (nodes[a]->parent_time > nodes[qu.front()]->time + nodes[qu.front()]->parent_time) continue;
				nodes[a]->parent_time = nodes[qu.front()]->time + nodes[qu.front()]->parent_time;
			}
			qu.pop();
		}
	}
	return 0;
}
