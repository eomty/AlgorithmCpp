#include "Factorial.h"
#include <iostream>

using namespace std;
//1!=1
//2!=2
//3!=6
//4!=24
//5!=120
//6! = 6x5x4x3x2x1  ��. n * n-1
int factorial(int n) { 
	if (n == 0) return 1; //�Է°��� 0�̸� 1 ����
	else return n * factorial(n - 1); //�Է°��� 0�� �ƴϸ�, ���丮�� ���
}

int main(void) {
	int n;
	int a;
	cin >> n;
	a = factorial(n);
	cout << a;
}
