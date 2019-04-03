#include <iostream>
#include <vector>
#include <set>
#include <queue>
#include <string>
using namespace std;

class Node {
public:
	bool visit;
	set<int> link;
	Node() : visit(false) {}
};

void DFS(vector<Node*>&, int);

int main() {
	vector<Node*> nodes;
	queue<int> q;
	int n, k, src;
	scanf("%d %d %d", &n, &k, &src);
	for (int i = 0; i < n; ++i) {
		nodes.push_back(new Node());
	}
	for (int i = 0; i < k; ++i) {
		int a, b;
		scanf("%d %d", &a, &b);
		--a, --b;
		nodes[a]->link.insert(b);
		nodes[b]->link.insert(a);
	}
	--src;
	DFS(nodes, src);
	printf("\n");

	for (Node* node : nodes) node->visit = false;

	nodes[src]->visit = true;
	q.push(src);
	while (!q.empty()) {
		printf("%d ", q.front() + 1);
		for (int dst : nodes[q.front()]->link) {
			if (!nodes[dst]->visit) {
				nodes[dst]->visit = true;
				q.push(dst);
			}
		}
		q.pop();
	}
	return 0;
}

void DFS(vector<Node*>& nodes, int src) {
	nodes[src]->visit = true;
	printf("%d ", src + 1);
	for (int dst : nodes[src]->link) {
		if (!nodes[dst]->visit) DFS(nodes, dst);
	}
}