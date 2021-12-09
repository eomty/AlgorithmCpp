#include "BigNumber.h"
#include <bits/stdc++.h>
#include <iostream> 

using namespace std; //표준 네임스페이스 사용

int arr[9]; //길이9의 배열
int big_Num = 0; //최대값.
int result = 0; //몇 번째 수인지 호출

int main() {
// 9개의 서로 다른 자연수가 주어질 때, 최댓 값을 찾고 몇번째 수인지를 구하라.

	//일단 9개의 숫자를 입력받는다
	for (int i = 0; i < 9; i++) {
		cin >> arr[i];
		//만약 입력된 수가 최대값을 넘으면 최대값을 초기화한다.  최대값을 넘긴 만큼 몇번째 수 인지 알 수 있다.
		if (big_Num <= arr[i]) {
			big_Num = arr[i];

			result = i; //반복문을 i번 돌만큼 최대값이 초기화 된경우 그만큼 i가 증가한다.
		}
	}
	cout << big_Num << "\n" << result+1;
}

