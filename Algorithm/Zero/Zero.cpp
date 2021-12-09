#include "Zero.h"
#include <iostream>
#include <stack>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	stack<int> data;
	int k;
	int num;
	int result = 0;
	
	
	//정수가 0이 입력될경우 바로 앞에숫자 삭제.
	//ex) (5)  4 3 0 2 0 일경우 4, 7, 4, 6, 4 가되므로 4가 출력되야함

	cin >> k;  //k입력 k번만큼 반복

	for (int i = 0; i < k; ++i) { //k만큼 반복 num을 입력되야함 num은 
		cin >> num;
		if (num == 0) {
			data.pop(); //마지막 데이터 빼냄
		}
		else {
			data.push(num); //num의 데이터를 마지막에 삽입
		}
	}

	// 이제 스택에 남아있는것들을 더해줘야 함.

	for (int i = 0; !data.empty(); ++i) { //data가 비어있지않다면 -> 데이터가 비면 반복 종료
		result += data.top(); //top = 제일 최상위 데이터 반환 해서 result에 더해줌.
		data.pop(); //그리고 빼냄;
	}

	cout << result;

	return 0;
}