#include "BigNumber.h"
#include <bits/stdc++.h>
#include <iostream> 

using namespace std; //ǥ�� ���ӽ����̽� ���

int arr[9]; //����9�� �迭
int big_Num = 0; //�ִ밪.
int result = 0; //�� ��° ������ ȣ��

int main() {
// 9���� ���� �ٸ� �ڿ����� �־��� ��, �ִ� ���� ã�� ���° �������� ���϶�.

	//�ϴ� 9���� ���ڸ� �Է¹޴´�
	for (int i = 0; i < 9; i++) {
		cin >> arr[i];
		//���� �Էµ� ���� �ִ밪�� ������ �ִ밪�� �ʱ�ȭ�Ѵ�.  �ִ밪�� �ѱ� ��ŭ ���° �� ���� �� �� �ִ�.
		if (big_Num <= arr[i]) {
			big_Num = arr[i];

			result = i; //�ݺ����� i�� ����ŭ �ִ밪�� �ʱ�ȭ �Ȱ�� �׸�ŭ i�� �����Ѵ�.
		}
	}
	cout << big_Num << "\n" << result+1;
}

