#include <bits/stdc++.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable : 6031)
#pragma warning(disable : 4996)


using namespace std;

int n, m;
int graph[201][201];

// 이동할 상 하 좌 우 4가지 방향 
int dx[] = { -1, 1, 0, 0 };
int dy[] = { 0, 0, -1, 1 };

int bfs(int x, int y) { //DFS를 이용하면 도착지에 도착못할시 무한루프...

    queue<pair<int, int> > q; 
    q.push({ x, y });
    // 큐가 빌 때까지 반복하기 first,와second로 정의
    while (!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();//큐의 프론트 데이터 삭제.

        // 현재 위치에서 4가지 방향으로의 위치 확인
        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            // 미로 찾기 공간을 벗어난 경우 무시
            if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
            // 벽인 경우 무시
            if (graph[nx][ny] == 0) continue;
            // 해당 노드를 처음 방문하는 경우에만 최단 거리 기록
            if (graph[nx][ny] == 1) {
                graph[nx][ny] = graph[x][y] + 1;
                q.push({ nx, ny });// 데이터 추가
            }
        }
    }
    // 가장 오른쪽 아래까지의 최단 거리 반환
    return graph[n - 1][m - 1];
}

int main(void) {
    //n, m 입력받기
    cin >> n >> m;
    // 맵 정보 입력받기
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%1d", &graph[i][j]); //%1d 연속된 숫자열을 문자열처럼 한번에 입력받아 배열에 할당하기
        }
    }
    // BFS를 수행한 결과 출력
    cout << bfs(0, 0) << '\n';

    //vector<pair<int, int>> q2 에다가 q1 내용을 넣으면 좋을텐데 음 ;;
    
    vector<pair<int, int>> q2;

    //경로를 출력하라... 실패!
    for (int i = q2.size() - 1; i >= 0; i--) {
        printf("(%d, %d)\n", q2[i].first, q2[i].second);
    }
      
    return 0;
}
// https://kgh940525.tistory.com/entry/%EC%95%8C%EA%B3%A0%EB%A6%AC%EC%A6%98-Queue%EC%9D%98-Pair%EC%9D%84-%EC%82%AC%EC%9A%A9%ED%95%98%EB%8A%94-%EC%9D%B4%EC%9C%A0
