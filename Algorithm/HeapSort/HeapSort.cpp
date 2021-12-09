#include "HeapSort.h"
#include <bits/stdc++.h>
#include <iostream> 

#define parent(x) (x-1)/2
using namespace std; //ǥ�� ���ӽ����̽� ���


void HeapSort(int* data, int num) {
	for (int i = 1; i < num; i++) { //�ִ� num��ŭ �ݺ�
		int child = i; //int child��  i�� �ʱ�ȭ��
		while (child > 0) { //child�� 0�� �ѱ��
			int root = parent(child);
			// ��ȯ
			if (data[root] < data[child]) { //�θ� �ڽĺ��� ������
				int temp = data[root]; //temp��root�� �ʱ�ȭ�ϰ�
				data[root] = data[child]; //root�� �ٽ� child �ʱ�ȭ�ϰ�
				data[child] = temp; //thild�� �ٽ� ������ �ʱ�ȭ�Ѵ�.
			}
			child = root;
		}
	}
}

	
	int main(void) {
		int num = 9;
		int data[] = { 15, 4, 8, 11, 6, 3, 1, 6, 5 };
		HeapSort(data, num); //���� �����.

		for (int i = num - 1; i >= 0; i--) {
			//����ū ���� root�� �� ������ ���ҿ� ����
			int temp = data[i];
			data[i] = data[0];
			data[0] = temp;

			HeapSort(data, i);
		}

		for (int i = 0; i < num; i++) {
			printf("%d", data[i]);
		}
		return 0;
	}





