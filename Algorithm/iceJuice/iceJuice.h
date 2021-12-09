#include <bits/stdc++.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable : 6031)
#pragma warning(disable : 4996)


using namespace std;

int n, m;
int graph[201][201];

// �̵��� �� �� �� �� 4���� ���� 
int dx[] = { -1, 1, 0, 0 };
int dy[] = { 0, 0, -1, 1 };

int bfs(int x, int y) { //DFS�� �̿��ϸ� �������� �������ҽ� ���ѷ���...

    queue<pair<int, int> > q; 
    q.push({ x, y });
    // ť�� �� ������ �ݺ��ϱ� first,��second�� ����
    while (!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();//ť�� ����Ʈ ������ ����.

        // ���� ��ġ���� 4���� ���������� ��ġ Ȯ��
        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            // �̷� ã�� ������ ��� ��� ����
            if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
            // ���� ��� ����
            if (graph[nx][ny] == 0) continue;
            // �ش� ��带 ó�� �湮�ϴ� ��쿡�� �ִ� �Ÿ� ���
            if (graph[nx][ny] == 1) {
                graph[nx][ny] = graph[x][y] + 1;
                q.push({ nx, ny });// ������ �߰�
            }
        }
    }
    // ���� ������ �Ʒ������� �ִ� �Ÿ� ��ȯ
    return graph[n - 1][m - 1];
}

int main(void) {
    //n, m �Է¹ޱ�
    cin >> n >> m;
    // �� ���� �Է¹ޱ�
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%1d", &graph[i][j]); //%1d ���ӵ� ���ڿ��� ���ڿ�ó�� �ѹ��� �Է¹޾� �迭�� �Ҵ��ϱ�
        }
    }
    // BFS�� ������ ��� ���
    cout << bfs(0, 0) << '\n';

    //vector<pair<int, int>> q2 ���ٰ� q1 ������ ������ �����ٵ� �� ;;
    
    vector<pair<int, int>> q2;

    //��θ� ����϶�... ����!
    for (int i = q2.size() - 1; i >= 0; i--) {
        printf("(%d, %d)\n", q2[i].first, q2[i].second);
    }
      
    return 0;
}
// https://kgh940525.tistory.com/entry/%EC%95%8C%EA%B3%A0%EB%A6%AC%EC%A6%98-Queue%EC%9D%98-Pair%EC%9D%84-%EC%82%AC%EC%9A%A9%ED%95%98%EB%8A%94-%EC%9D%B4%EC%9C%A0
