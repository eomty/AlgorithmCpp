#include "ant.h"
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n;
int d[100];
vector<int> arr;

int main() {
	cin >> n; //�ķ�â�� �� �� �Է�

	for (int i = 0; i < n; i++) {
		int k;
		cin >> k;
		arr.push_back(k);//������ ���� ����߰�
	}

	d[0] = arr[0];
	d[1] = arr[1];

	for (int i = 2; i < n; i++) {
		d[i] = max(d[i - 1], d[i - 2] + arr[i]);
	}

	cout << d[n - 1];

}