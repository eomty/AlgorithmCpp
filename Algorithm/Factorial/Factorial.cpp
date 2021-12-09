#include "Factorial.h"
#include <iostream>

using namespace std;
//1!=1
//2!=2
//3!=6
//4!=24
//5!=120
//6! = 6x5x4x3x2x1  즉. n * n-1
int factorial(int n) { 
	if (n == 0) return 1; //입력값이 0이면 1 리턴
	else return n * factorial(n - 1); //입력값이 0이 아니면, 팩토리얼 계산
}

int main(void) {
	int n;
	int a;
	cin >> n;
	a = factorial(n);
	cout << a;
}
