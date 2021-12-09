#include "DivisionCity.h"
#include <bits/stdc++.h>

using namespace std;

// ����� ����v�� ������ ����e
int v, e;
int parent[100001]; // �θ� ���̺�

// ��� ������ ���� ����Ʈ��, ���� ����� ���� ����
vector<pair<int, pair<int, int> > > edges;

int result = 0;

// Ư�� ���Ұ� ���� ������ ã��
int findParent(int x) {
    // ��Ʈ ��尡 �ƴ϶��, ��Ʈ ��带 ã�� ������ ��������� ȣ��
    if (x == parent[x]) return x;
    return parent[x] = findParent(parent[x]);
}

// �� ���Ұ� ���� ������ ��ġ��
void unionParent(int a, int b) {
    a = findParent(a);
    b = findParent(b);
    if (a < b) parent[b] = a;
    else parent[a] = b;
}

int main(void) {
    cin >> v >> e;

    // �θ� ���̺�󿡼�, �θ� �ڱ� �ڽ����� �ʱ�ȭ
    for (int i = 1; i <= v; i++) {
        parent[i] = i;
    }

    // ��� ������ ���� ������ �Է� �ޱ�
    for (int i = 0; i < e; i++) {
        int a, b, cost;
        cin >> a >> b >> cost;
        // �������� �����ϱ� ���ؼ� Ʃ���� ù ��° ���Ҹ� ������� ����
        edges.push_back({ cost, {a, b} });
    }

    // ������ �������� ����
    sort(edges.begin(), edges.end());
    int last = 0; // �ּ� ���� Ʈ���� ���ԵǴ� ���� �߿��� ���� ����� ū ����

    // ������ �ϳ��� Ȯ���ϸ�
    for (int i = 0; i < edges.size(); i++) {
        int cost = edges[i].first;
        int a = edges[i].second.first;
        int b = edges[i].second.second;

        // ����Ŭ�� �߻����� �ʴ� ��쿡�� ���տ� ����
        if (findParent(a) != findParent(b)) {
            unionParent(a, b);
            result += cost;
            last = cost;
        }
    }

    cout << result - last << '\n';
}