#include "Weigth.h"
#include <iostream>
#include <cmath>
#include <stdio.h>
#include <utility> //pair 사용 하려면

using namespace std;


int main() {
	int n; //입력값
	cin >> n;
	int count = 1;

	//pair 배열로 키, 몸무게 저장
	pair<int, int> array[50];

	for (int i = 0; i < n; i++) { // n의 입력값 만큼 
		
		cin >> array[i].first >> array[i].second; //first는 몸무게 second는 키
	}

	for (int i = 0; i < n; i++) {

		for (int j = 0; j < n; j++) {

			// 키가더 크고 & 몸무게도 크다면? 카운트 증가
			if (array[i].first < array[j].first && array[i].second < array[j].second)
				//count 증가
				count++;
		}
		cout << count << " ";

		//rank 다시 1로 초기화
		count = 1;
	}
}