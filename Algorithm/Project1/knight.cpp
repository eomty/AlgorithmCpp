#include "fsfs.h"
#include <bits/stdc++.h> //bits �����ȿ� stdc++.h ��������� ���
#include <iostream> //c++ �⺻ ����� ���

using namespace std; //ǥ�� ���ӽ����̽� ���


	//����Ʈ�� �̵����� ����
	int x[] = { -2, -1, 1, 2, 2, 1, -1, -2 };
	int y[] = { -1, -2, -2, -1, 1, 2, 2, 1 };
	int result2;

	string position;

	int main(void) {
		cin >> position;
		//a1, b5������ �Է��ϹǷ�, ���ڿ��� ���ڿ��� ��ȯ���༭ ����ؾ���.

			int row = position[1] -'0';   //�Էµ� ���� ��

			//���̽���޸� ���ڿ��� �ƽ�Ű�ڵ�� ��ȯ���ִ� ord�Լ��� ���ų�,
			//��ó ã�� �������Ƿ�, ���ڿ��� ���������� ��ȯ���ִ� ���� ã�Ƽ� ���
			//ex)
			//char c = '4';
			//int i = c - '0';       // ������ 4

			int column = position[0] -'a'+ 1; //�Էµ� ���� ��
			//���ڿ��� ��ȯ���ְ� �迭�� 1���� �����ϴϱ� 1�� ��������Ѵ�. 


			for (int i = 0; i < 8; i++) {
				// ������ �̵����Ѿ��ϴ� ��ǥ
				int nextRow = row + x[i];
				int nextColumn = column + y[i];

				// �̵� �����ϴٸ� result 1�� ����. next�� 1�̻� 8�����Ͻ�.
				if (nextRow >= 1 && nextRow <= 8 && nextColumn >= 1 && nextColumn <= 8) {
					result2 += 1;
				}
			 }
			//�ݺ��� �� ��� ���!
			cout << result2;
			return 0;


}