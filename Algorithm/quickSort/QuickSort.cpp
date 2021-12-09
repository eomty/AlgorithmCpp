#include "QuickSort.h"
#include <bits/stdc++.h>
#include <iostream> 

using namespace std; //표준 네임스페이스 사용




void QuickSort(int*data, int start,int end) {

	int pivot = start;
	int i = pivot + 1; //int i= 왼쪽 출발
	int j = end; //int j = 오른쪽 출발
	int temp;

	while (i <= j) {
		//포인터가 엇갈릴때 까지 반복 

		//i는 end에 도달하고, data[i]도 선택한 pibot에 닿을대까지 반복
		while (i <= end && data[i] <= data[pivot]) {
			i++;
		}
		// i가 start에 도달하고, data[j]가 pivot에 닿을때까지 반복
		while (i >= start && data[j] <= data[pivot]) {
			i--;
		}

		//엇갈렸다!
		if (i > j) {
			temp = data[j]; //템프를 data[j]로 초기화하고
			data[j] = data[pivot]; //data[j]를 피봇으로 초기화하고
			data[pivot] = temp; //다시 그 피봇을 temp로 초기화한다.
		}
		//엇갈렸다!
		else {
			temp = data[i];
			data[i] = data[j];
			data[j] = temp;
		}
	}

	//분할 정렬
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

