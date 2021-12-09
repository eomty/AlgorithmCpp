#include "one.h"
#include <bits/stdc++.h> //bits 폴더안에 stdc++.h 헤더파일을 사용
#include <iostream> //c++ 기본 입출력 헤더
#include <vector>

using namespace std; //표준 네임스페이스 사용

int n, m, k;   // 입력받기
int m2; //보조
vector<int> a; //자동으로 메모리 할당되는 배열
int i;
int j;
int b;

int main() {
	cin >> n >> m >> k; //n m k 입력받는다 (5, 8, 3)
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		a.push_back(x); //push_back = 벡터의 제일 뒤쪽에 값을 넣는것.
	}

	sort(a.begin(), a.end()); //오름차순 정렬
	int firstN = a[n - 1]; //가장 큰 수
	int secoundN = a[n - 2]; //가장 작은 수
	int result = 0;
	/*
	while (true) {
		for (i; i < k; i++) { //k번만큼 더한다. 최대 m번만큼,
			//f (m = 0) { break; }
			result += firstN;

			cout << "큰 수 더함 \n";
			m -= 1;
			j = m;  //차감된 m은 j이다.
		}

		//작은수 한번 더해준다.
		result += secoundN;
		j -= 1;
		cout << "작은 수 더함 \n";

		if (j <= 0)
			break;

		for (b; b < k; b++) { //k번만큼 더한다. 최대 m번만큼,
	//f (m = 0) { break; }
			result += firstN;

			cout << "큰 수 더함 \n";
			j -= 1;
		}

		//작은수 한번 더해준다.
		if(j>0)
		result += secoundN;
		j -= 1;
		cout << "작은 수 더함 \n";


		if(j<=0)
		break;
	}
	cout << result<< "\n";
	cout<< "j는: " << j;

}*/
// 가장 큰 수가 더해지는 횟수 계산
	int cnt = (m / (k + 1)) * k;
	cnt += m % (k + 1);

	result += cnt * firstN; // 가장 큰 수 더하기
	result += (m - cnt) * secoundN; // 두 번째로 큰 수 더하기

	cout << result << '\n'; // 최종 답안 출력

}
//https://coding-factory.tistory.com/595
//https://hwan-shell.tistory.com/119