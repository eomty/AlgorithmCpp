#include "virus.h"
#include <bits/stdc++.h> //bits �����ȿ� stdc++.h ��������� ���
#include <iostream> //c++ �⺻ ����� ���

using namespace std; //ǥ�� ���ӽ����̽� ���

int result; //���
bool visited[100]; //�湮�ߴ�? bool��!
int n, m;// n 100���� 
int _map[100][100]; //map�����ϸ� ��ȣ�մϴ� ����

int main() { //�����Լ�
	cin >> n >> m;   //"n:��ǻ�� ��"�� "m:����Ǵ� ��ǻ�� ���� ��"�� �Է¹޴´�.
	for (int i = 0; i < m; i++) {//��ǻ���� ������ŭ �ݺ�
		int x, y;
		cin >> x >> y;
		_map[x][y] = 1;
		_map[y][x] = 1;
	}
	cout << "������ " << result << " ��ŭ ������.";
	}


void DFS(int v) { //DFS(��?)
	visited[v] = true;
	result++;

	for (int i = 1; i <= v; i++) {
		if (visited[v] == 0 &&  _map[v][i]==1) {
			//�ִ� v����ŭ ����������� �湮�����̾���? �׷� i��ŭ DFS �����ش�.
			DFS(i);
		}
	}

	
}