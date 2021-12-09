#include "HeapSort.h"
#include <bits/stdc++.h>
#include <iostream> 

#define parent(x) (x-1)/2
using namespace std; //표준 네임스페이스 사용


void HeapSort(int* data, int num) {
	for (int i = 1; i < num; i++) { //최대 num만큼 반복
		int child = i; //int child를  i로 초기화ㅗ
		while (child > 0) { //child가 0을 넘기면
			int root = parent(child);
			// 변환
			if (data[root] < data[child]) { //부모가 자식보다 작으면
				int temp = data[root]; //temp를root로 초기화하고
				data[root] = data[child]; //root를 다시 child 초기화하고
				data[child] = temp; //thild를 다시 템프로 초기화한다.
			}
			child = root;
		}
	}
}

	
	int main(void) {
		int num = 9;
		int data[] = { 15, 4, 8, 11, 6, 3, 1, 6, 5 };
		HeapSort(data, num); //힙을 만든다.

		for (int i = num - 1; i >= 0; i--) {
			//가장큰 숫자 root를 맨 마지막 원소와 스왑
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





