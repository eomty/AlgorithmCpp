#include "PlusEOF.h"
#include <bits/stdc++.h>
#include <iostream> 

using namespace std; //표준 네임스페이스 사용


int N, X;
int main() {
	//문제 입력이 끝날때까지 A + B를 출력하라.
	//EOF를 사용하라 ?
	//EOF는 EndOfFile 파일의 끝이다. 모든 파일의 끝에는 EOF라는 표시가 붙어있다.
	//즉, EOF가 False일경우 While문을 계속 돌고 if) 파일의 끝에 도달하면 즉, EndOfFile=true면 반복문을 종료하면 될거같다.
	//정수 A와 B를 입력 받고 그 두 수를 출력해보자.

	
	while (true) { //계속 돌되 EOF이면 빠져나와야한다
		cin >> N >> X; //일단 N과 X를 입력
		if (cin.eof() == true) { //파일의 끝에 도달하면 빠져나와
			break;
		}
		//파일의 끝이 아니면 이거 무한 반복.
		cout << N + X <<"\n";
	}
	}

