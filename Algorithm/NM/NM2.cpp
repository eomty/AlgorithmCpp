#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>
#include <vector>
#include "NM2.h"
using namespace std;

int n, m;
int arr[10];
vector<int> v;

void DFS(int x)
{
	v.push_back(x);

	if (v.size() == m) {
		for (int i = 0; i < v.size(); ++i) {
			printf("%d ", v[i]);
		}
		printf("\n");
		v.pop_back();
		return;
	}

	for (int i = x; i <= n; ++i) {
		DFS(i);
	}
	v.pop_back();
}

int main(int argc, char* argv[])
{
	scanf("%d", &n);
	scanf("%d", &m);

	for (int i = 1; i <= n; ++i) {
		arr[i] = i;
	}

	for (int i = 1; i <= n; ++i) {
		DFS(i);
	}

	return 0;
}