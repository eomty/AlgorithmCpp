#include "QuickSort.h"
#include <bits/stdc++.h>
#include <iostream> 

using namespace std; //ǥ�� ���ӽ����̽� ���




void QuickSort(int*data, int start,int end) {

	int pivot = start;
	int i = pivot + 1; //int i= ���� ���
	int j = end; //int j = ������ ���
	int temp;

	while (i <= j) {
		//�����Ͱ� �������� ���� �ݺ� 

		//i�� end�� �����ϰ�, data[i]�� ������ pibot�� ��������� �ݺ�
		while (i <= end && data[i] <= data[pivot]) {
			i++;
		}
		// i�� start�� �����ϰ�, data[j]�� pivot�� ���������� �ݺ�
		while (i >= start && data[j] <= data[pivot]) {
			i--;
		}

		//�����ȴ�!
		if (i > j) {
			temp = data[j]; //������ data[j]�� �ʱ�ȭ�ϰ�
			data[j] = data[pivot]; //data[j]�� �Ǻ����� �ʱ�ȭ�ϰ�
			data[pivot] = temp; //�ٽ� �� �Ǻ��� temp�� �ʱ�ȭ�Ѵ�.
		}
		//�����ȴ�!
		else {
			temp = data[i];
			data[i] = data[j];
			data[j] = temp;
		}
	}

	//���� ����
	QuickSort(data, start, j - 1);
	QuickSort(data, j + 1, end);
}


int main(void) {
	int data[10] = { 4, 1, 2, 3, 9, 7, 8, 6, 10, 5 };
	QuickSort(data, 0, 9);

	for (int i = 0; i < 10; i++) {
		printf("%d", data[i]);
	}
	return 0;
}

