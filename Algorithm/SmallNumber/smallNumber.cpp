#include <bits/stdc++.h>
#include <iostream> 
#include "smallNumber.h"

using namespace std; //ǥ�� ���ӽ����̽� ���

int N, X;
int smallN;
int i;
int main() {
	//���� N���� �̷���� ���� A�� ���� X�� �־�����.
	//�̶�, A���� X���� ���� ���� ��� ����϶�
	cin >> N >>X; //�ϴ� N�� X�� �Է�, �׸��� ����N��ŭ for���� ��������
	for (i; i < N; i++) {
		//���⼭ ���� �ؾ��ұ� �� ...
		//���� A�� ���� Ű����� ���� �Է��ϰ�. ���� X�� �Է�������,
	//���� ���� �� X �������� ���� ���� ����ϸ� �׸��̳�.
		cin >> smallN; //�ݺ����� ���� ���� �Է��� ���� smallN�� ��

		//smallN �Էµ����� ���⼭ X�� ���ϰ� ����ϸ� ��.
		if (smallN < X) { //smallN�� X ���� ������
			cout << smallN << " "; //���� ��
		}
	}

}