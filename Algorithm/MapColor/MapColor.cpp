#include "MapColor.h"
#include <bits/stdc++.h>
#include <stdio.h>
#include <iostream>

using namespace std;

int vcolor[10];
int n,m ;
int result = 0;

bool promising(int i, bool W[][4]) {
	int j = 0;

	while (j < i) {
		if (W[i][j] && vcolor[i] == vcolor[j])
			return false;
		j++;
	}
	return true;
}

void m_coloring(int i, bool W[][4]) {
	if (i == n)
		result++;
	else {
		for (int color = 1; color <= m; color++) {
			vcolor[i] = color;

			if (promising(i, W))
				m_coloring(i + 1, W);
		}
	}
}

int main() {
	cin >> n >> m;

bool Map[4][4] = { {2, 3, 4, 6},
						{1, 5, 6, 0},
						{1, 6, 0, 0},
						{1, 0, 1, 0} };

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << Map[i][j] << " ";
		}
	}

	m_coloring(0, Map);

	cout << result;

	return 0;
}