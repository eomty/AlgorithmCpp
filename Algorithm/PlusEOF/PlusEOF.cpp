#include "PlusEOF.h"
#include <bits/stdc++.h>
#include <iostream> 

using namespace std; //ǥ�� ���ӽ����̽� ���


int N, X;
int main() {
	//���� �Է��� ���������� A + B�� ����϶�.
	//EOF�� ����϶� ?
	//EOF�� EndOfFile ������ ���̴�. ��� ������ ������ EOF��� ǥ�ð� �پ��ִ�.
	//��, EOF�� False�ϰ�� While���� ��� ���� if) ������ ���� �����ϸ� ��, EndOfFile=true�� �ݺ����� �����ϸ� �ɰŰ���.
	//���� A�� B�� �Է� �ް� �� �� ���� ����غ���.

	
	while (true) { //��� ���� EOF�̸� �������;��Ѵ�
		cin >> N >> X; //�ϴ� N�� X�� �Է�
		if (cin.eof() == true) { //������ ���� �����ϸ� ��������
			break;
		}
		//������ ���� �ƴϸ� �̰� ���� �ݺ�.
		cout << N + X <<"\n";
	}
	}

