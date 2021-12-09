#include "FightVirus.h"
#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;
//1. Virus ����ü �ۼ�
//2. ���̷����� ���������� 4���� ��ġ
//3. �� ���� ����
//4. main�ۼ�, ���Ľ�Ű��
//5. BFS ����, ��� ���


int arr[200][200]; //200ũ���� �迭
int dx[4] = { 0, 0, 1, -1 }; //���̷����� ���������� 4���� ��ġ
int dy[4] = { 1, -1, 0, 0 }; //���̷����� ���������� 4���� ��ġ


struct Virus { //Virus ���� ����ü ����
	int virus;
	int x;
	int y;
};


bool compVirusNumber(const Virus& v1, const Virus& v2) { //��ȣ������ ���̷����� ���� ���̷����� ��
	return v1.virus < v2.virus;
}


int main() {
	vector<Virus> vec;
	int N, K, S, X, Y;

	cin >> N >> K; //ù°�� N K �Է°�= NxNũ���� �����, k������ ���̷��� ��

	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) {
			cin >> arr[i][j];

			if (arr[i][j] >= 1 && arr[i][j] <= K) { //���̷��� �������� ������ ���ְ�!
				vec.push_back({ arr[i][j], i, j }); //vec���Ϳ� �־���
			}
		}
	}

	cin >> S >> X >> Y; //���� ���̷��� �Է°� ex)3 0 2

	int s = 0;
	sort(vec.begin(), vec.end(), compVirusNumber);//sort�Լ��� 3��°���� ���� ������
	//�Լ��� ��ȯ���� �°� ���� !

	while (s < S) {
		int len = vec.size();

		for (int j = 0; j < len; j++) {
			Virus v = vec[j];
			for (int i = 0; i < 4; i++) {
				//���� ��忡�� �ֺ� 4���� ��ġ Ȯ��
				int nx = v.x + dx[i];
				int ny = v.y + dy[i];
				// �ش� ��ġ�� �̵��Ҽ� �������
				if (nx <= 0 || ny <= 0 || nx > N || ny > N)	continue;
				// ���� �湮 ���� �ʾҴٸ�!
				if (!arr[nx][ny]) {
					arr[nx][ny] = v.virus;
					vec.push_back({ arr[nx][ny], nx, ny }); //���Ϳ� �� �־��ش�.
				}
			}
		}
		if (arr[X][Y] > 0)	break;
		s++;
	}
	cout << arr[X][Y];
	return 0;
}