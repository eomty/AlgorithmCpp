#include "Weigth.h"
#include <iostream>
#include <cmath>
#include <stdio.h>
#include <utility> //pair ��� �Ϸ���

using namespace std;


int main() {
	int n; //�Է°�
	cin >> n;
	int count = 1;

	//pair �迭�� Ű, ������ ����
	pair<int, int> array[50];

	for (int i = 0; i < n; i++) { // n�� �Է°� ��ŭ 
		
		cin >> array[i].first >> array[i].second; //first�� ������ second�� Ű
	}

	for (int i = 0; i < n; i++) {

		for (int j = 0; j < n; j++) {

			// Ű���� ũ�� & �����Ե� ũ�ٸ�? ī��Ʈ ����
			if (array[i].first < array[j].first && array[i].second < array[j].second)
				//count ����
				count++;
		}
		cout << count << " ";

		//rank �ٽ� 1�� �ʱ�ȭ
		count = 1;
	}
}