#include <bits/stdc++.h>
#include <iostream> 
#include "smallNumber.h"

using namespace std; //표준 네임스페이스 사용

int N, X;
int smallN;
int i;
int main() {
	//정수 N개로 이루어진 수열 A와 정수 X가 주어진다.
	//이때, A에서 X보다 작은 수를 모두 출력하라
	cin >> N >>X; //일단 N과 X를 입력, 그리고 정수N만큼 for문을 돌려보면
	for (i; i < N; i++) {
		//여기서 뭐를 해야할까 음 ...
		//수열 A를 내가 키보드로 직접 입력하고. 정수 X도 입력했으니,
	//내가 적은 이 X 정수보다 작은 수를 출력하면 그만이네.
		cin >> smallN; //반복문을 통해 내가 입력한 값이 smallN에 들어감

		//smallN 입력됐으니 여기서 X랑 비교하고 출력하면 끝.
		if (smallN < X) { //smallN이 X 보다 작으면
			cout << smallN << " "; //공백 줌
		}
	}

}