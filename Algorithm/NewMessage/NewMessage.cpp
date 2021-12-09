#include "NewMessage.h"
#include <bits/stdc++.h>
#define INF 1e9 // 무한을 의미하는 값으로 10억을 설정

using namespace std;

int n, m, start; //노드의개수n 간선의개수 m 시작노드start

vector<pair<int, int> > graph[30001];// 노드 정보 배열
int d[30001]; //distance는 최단거리 테이블

void dijkstra(int start) {

    priority_queue<pair<int, int> > pq;

    pq.push({ 0, start });//시작 노드에서 출발해야하므로 최단 경로 0으로 설정 후 큐에 삽임
    d[start] = 0;//최단거리 0

    while (!pq.empty()) { // 큐가 비어있지 않다면
        // 가장 최단 거리가 짧은 노드에 대한 정보 꺼내기

        int dist = -pq.top().first; // 현재 노드까지의 비용 
        int now = pq.top().second; // 현재 노드
        pq.pop();

        // 만약 현재 노드가 예전에 처리된 노드라면 무시 continue~
        if (d[now] < dist) continue;

        //  처리된 적이 없다면??

        // 현재 노드와 연결된 다른 인접한 노드들을 확인
        for (int i = 0; i < graph[now].size(); i++) {
          int cost = dist + graph[now][i].second; //인접한 노드를 확인후 현재노드비용의 cost를 초기화

            // 현재 노드를 거쳐서, 다른 노드로 이동하는 거리가 더 짧은 경우? = 최 단 거 리
            if (cost < d[graph[now][i].first]) {

                d[graph[now][i].first] = cost; //현재 노드의 비용을 cost로 새로 갱신 = 최단거리 갱신
                pq.push(make_pair(-cost, graph[now][i].first));
            }
        }
    }
}

int main(void) {
    cin >> n >> m >> start; //입력: 노드의개수n 간선의개수 m 시작노드start

    // 모든 간선 정보를 입력  X번 노드에서 Y번 노드로 가는 비용이 Z
    for (int i = 0; i < m; i++) {
        int x, y, z;
        cin >> x >> y >> z;
        
        graph[x].push_back({ y, z });
    }

    // 최단 거리 테이블을 모두 무한으로 초기화
    fill(d, d + 30001, INF);

    dijkstra(start);
    
    int count = 0; // 도달할 수 있는 노드의 개수

    // 도달할 수 있는 노드 중에서, 가장 멀리 있는 노드와의 최단 거리
    int maxDistance = 0;
    for (int i = 1; i <= n; i++) {
        // 도달할 수 있는 노드인 경우
        if (d[i] != INF) {
            count += 1;
            maxDistance = max(maxDistance, d[i]);
        }
    }

    // 시작 노드는 제외해야 하므로 count - 1
    cout << count - 1 << ' ' << maxDistance << '\n';
}