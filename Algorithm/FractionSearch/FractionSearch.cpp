#include "FractionSearch.h"
#include <iostream>

using namespace std;
//n번째 위치에 올 분수를 출력하라.

int main(int array, char* arr[])
{
	int n; //번째 올 분수
	//대각선을 보면 1번째는 k=2, 2번째는 =3 3번째는 =4 인것을 알 수 있다 이를 이용하여 문제를 풀어보자.
	//대각선이 짝수일경우 위에서 내려오고 홀수일경우 아래에서 올라온다 (지그재그)
	//숫자가 14일 경우1 + 2 + 3 + 4 + 5=15의
	//k=2 (1)1/1  1개 1+=[1]
	//k=3 (2)1/2 (3)2/1  2개 1+2=[3]
	//k=4 (4)3/1 (5)2/2 (6)1/3   3개 1+2+3=[6]
	//k=5 (7)1/4 (8)2/3 (9)3/2 (10)4/1  4개 1+2+3+4=[10]
	//k=6 (11)5/1 (12)4/2 (13)3/3 (14)2/4 (15)1/5  5개 1+2+3+4+5=[15]
	//


	cin >> n; //입력

	int k = 1; //k는 대각선위치
	int num = 0; 

	while (true) { //n번째 값이 num을 넘어가면 반복 종료

		num += k; //처음엔0이었으니 반복시작하면 1번째 대각선 다음 2번째 대각선 다음 3번째 대각선.
		//대각선마다 +1씩을 더해줘야함 ex)1 (+2) 3 (+3) 6 (+4) 10 (+5) 15
		if (n <= num) { //입력(몇번째)값이 num이랑 같거나 아래면 반복문 종료
			break;
		}
		++k;// k는 계속 1씩 올려준다.  1 2 3 4 5
	}

	int a;
	int b;
	if (k % 2) { //짝수일때. ㅁ/ㅇ 에서 ㅁ증가 ㅇ감소
		a = k + 1;
		b = 0;
		for (int i = 1; i <= n - num + k; i++) {
			a -= 1;
			b += 1;
		}
	}
	else { //홀수일때 ㅁ/ㅇ 에서 ㅇ증가 ㅁ감소
		a = 0;
		b = k + 1;
		for (int i = 1; i <= n - num + k; i++) { //n번째- num+k
			a += 1;
			b -= 1;
		}
	}
	cout << a << "/" << b << endl;

	return 0;
}