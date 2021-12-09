#include "FightVirus.h"
#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;
//1. Virus 구조체 작성
//2. 바이러스가 퍼져나가는 4가지 위치
//3. 비교 정렬 기준
//4. main작성, 정렬시키기
//5. BFS 시행, 결과 출력


int arr[200][200]; //200크기의 배열
int dx[4] = { 0, 0, 1, -1 }; //바이러스가 퍼져나가는 4가지 위치
int dy[4] = { 1, -1, 0, 0 }; //바이러스가 퍼져나가는 4가지 위치


struct Virus { //Virus 명의 구조체 선언
	int virus;
	int x;
	int y;
};


bool compVirusNumber(const Virus& v1, const Virus& v2) { //번호가낮은 바이러스와 높은 바이러스로 비교
	return v1.virus < v2.virus;
}


int main() {
	vector<Virus> vec;
	int N, K, S, X, Y;

	cin >> N >> K; //첫째줄 N K 입력값= NxN크기의 시험관, k가지의 바이러스 수

	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) {
			cin >> arr[i][j];

			if (arr[i][j] >= 1 && arr[i][j] <= K) { //바이러스 가지수가 넘으면 못넣게!
				vec.push_back({ arr[i][j], i, j }); //vec벡터에 넣어줌
			}
		}
	}

	cin >> S >> X >> Y; //직접 바이러스 입력값 ex)3 0 2

	int s = 0;
	sort(vec.begin(), vec.end(), compVirusNumber);//sort함수의 3번째인자 값을 넣으면
	//함수의 반환값에 맞게 정렬 !

	while (s < S) {
		int len = vec.size();

		for (int j = 0; j < len; j++) {
			Virus v = vec[j];
			for (int i = 0; i < 4; i++) {
				//현재 노드에서 주변 4가지 위치 확인
				int nx = v.x + dx[i];
				int ny = v.y + dy[i];
				// 해당 위치로 이동할수 있을경우
				if (nx <= 0 || ny <= 0 || nx > N || ny > N)	continue;
				// 아직 방문 하지 않았다면!
				if (!arr[nx][ny]) {
					arr[nx][ny] = v.virus;
					vec.push_back({ arr[nx][ny], nx, ny }); //벡터에 값 넣어준다.
				}
			}
		}
		if (arr[X][Y] > 0)	break;
		s++;
	}
	cout << arr[X][Y];
	return 0;
}