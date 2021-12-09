#include "fsfs.h"
#include <bits/stdc++.h> //bits 폴더안에 stdc++.h 헤더파일을 사용
#include <iostream> //c++ 기본 입출력 헤더

using namespace std; //표준 네임스페이스 사용


	//나이트의 이동가능 방향
	int x[] = { -2, -1, 1, 2, 2, 1, -1, -2 };
	int y[] = { -1, -2, -2, -1, 1, 2, 2, 1 };
	int result2;

	string position;

	int main(void) {
		cin >> position;
		//a1, b5등으로 입력하므로, 문자열을 숫자열로 변환해줘서 계산해야함.

			int row = position[1] -'0';   //입력된 현재 행

			//파이썬과달리 문자열을 아스키코드로 변환해주는 ord함수가 없거나,
			//미처 찾지 못했으므로, 문자열을 정수형으로 변환해주는 법을 찾아서 사용
			//ex)
			//char c = '4';
			//int i = c - '0';       // 정수형 4

			int column = position[0] -'a'+ 1; //입력된 현재 열
			//문자열로 변환해주고 배열은 1부터 시작하니까 1을 더해줘야한다. 


			for (int i = 0; i < 8; i++) {
				// 다음에 이동시켜야하는 좌표
				int nextRow = row + x[i];
				int nextColumn = column + y[i];

				// 이동 가능하다면 result 1씩 증가. next가 1이상 8이하일시.
				if (nextRow >= 1 && nextRow <= 8 && nextColumn >= 1 && nextColumn <= 8) {
					result2 += 1;
				}
			 }
			//반복문 끝 결과 출력!
			cout << result2;
			return 0;


}