#include "virus.h"
#include <bits/stdc++.h> //bits 폴더안에 stdc++.h 헤더파일을 사용
#include <iostream> //c++ 기본 입출력 헤더

using namespace std; //표준 네임스페이스 사용

int result; //결과
bool visited[100]; //방문했니? bool문!
int n, m;// n 100이하 
int _map[100][100]; //map으로하면 모호합니다 오류

int main() { //메인함수
	cin >> n >> m;   //"n:컴퓨터 수"와 "m:연결되는 컴퓨터 쌍의 수"를 입력받는다.
	for (int i = 0; i < m; i++) {//컴퓨터의 개수만큼 반복
		int x, y;
		cin >> x >> y;
		_map[x][y] = 1;
		_map[y][x] = 1;
	}
	cout << "정답은 " << result << " 만큼 감염됨.";
	}


void DFS(int v) { //DFS(몇?)
	visited[v] = true;
	result++;

	for (int i = 1; i <= v; i++) {
		if (visited[v] == 0 &&  _map[v][i]==1) {
			//최대 v번만큼 돌리고싶은데 방문한적이없네? 그럼 i만큼 DFS 돌려준다.
			DFS(i);
		}
	}

	
}