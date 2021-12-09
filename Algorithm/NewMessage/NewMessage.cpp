#include "NewMessage.h"
#include <bits/stdc++.h>
#define INF 1e9 // ������ �ǹ��ϴ� ������ 10���� ����

using namespace std;

int n, m, start; //����ǰ���n �����ǰ��� m ���۳��start

vector<pair<int, int> > graph[30001];// ��� ���� �迭
int d[30001]; //distance�� �ִܰŸ� ���̺�

void dijkstra(int start) {

    priority_queue<pair<int, int> > pq;

    pq.push({ 0, start });//���� ��忡�� ����ؾ��ϹǷ� �ִ� ��� 0���� ���� �� ť�� ����
    d[start] = 0;//�ִܰŸ� 0

    while (!pq.empty()) { // ť�� ������� �ʴٸ�
        // ���� �ִ� �Ÿ��� ª�� ��忡 ���� ���� ������

        int dist = -pq.top().first; // ���� �������� ��� 
        int now = pq.top().second; // ���� ���
        pq.pop();

        // ���� ���� ��尡 ������ ó���� ����� ���� continue~
        if (d[now] < dist) continue;

        //  ó���� ���� ���ٸ�??

        // ���� ���� ����� �ٸ� ������ ������ Ȯ��
        for (int i = 0; i < graph[now].size(); i++) {
          int cost = dist + graph[now][i].second; //������ ��带 Ȯ���� ���������� cost�� �ʱ�ȭ

            // ���� ��带 ���ļ�, �ٸ� ���� �̵��ϴ� �Ÿ��� �� ª�� ���? = �� �� �� ��
            if (cost < d[graph[now][i].first]) {

                d[graph[now][i].first] = cost; //���� ����� ����� cost�� ���� ���� = �ִܰŸ� ����
                pq.push(make_pair(-cost, graph[now][i].first));
            }
        }
    }
}

int main(void) {
    cin >> n >> m >> start; //�Է�: ����ǰ���n �����ǰ��� m ���۳��start

    // ��� ���� ������ �Է�  X�� ��忡�� Y�� ���� ���� ����� Z
    for (int i = 0; i < m; i++) {
        int x, y, z;
        cin >> x >> y >> z;
        
        graph[x].push_back({ y, z });
    }

    // �ִ� �Ÿ� ���̺��� ��� �������� �ʱ�ȭ
    fill(d, d + 30001, INF);

    dijkstra(start);
    
    int count = 0; // ������ �� �ִ� ����� ����

    // ������ �� �ִ� ��� �߿���, ���� �ָ� �ִ� ������ �ִ� �Ÿ�
    int maxDistance = 0;
    for (int i = 1; i <= n; i++) {
        // ������ �� �ִ� ����� ���
        if (d[i] != INF) {
            count += 1;
            maxDistance = max(maxDistance, d[i]);
        }
    }

    // ���� ���� �����ؾ� �ϹǷ� count - 1
    cout << count - 1 << ' ' << maxDistance << '\n';
}