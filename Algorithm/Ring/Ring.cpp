#include "Ring.h"
#include<iostream>

using namespace std;

int N;
int ring[101];

//https://luv-n-interest.tistory.com/959
//��Ŭ������ ȣ����
//�� ���� a, b(a > b) �� ���Ͽ� gcd(a, b) = gcd(b, r)//
								//a = bq+r (0<=r<b)�� �����ϸ�
										// a,b�� �ִ������� b,r�� �ִ������� ����

//a�� b�� ������ �������� b�� �ִ����� �׷��� ������ r�� ����
//b�� ȣ���� ���� a�� �ǰ� r�� ȣ���� ���� b�� �Ǿ� �ٽ� a��b�� ������.
//r=0�� �Ǹ� �׶� b�� �ִ������� ��.



	//ex) int gcd(int a, int b){
	//        if (b == 0) return a; //b�� 0�̸� a�� ����
//				else return gcd(b, a % b);

//int GCD(int a, int b){
//int c;
//b ==0 �� �Ǵ� ������ c�� 0�϶� ��, ��ÿ� ������ ���� �ִ�����
//while(b!=0){
//	c = a % b;
//	a = b;
//	b = c;
//}
////b�� a�� �Ҵ� �Ǿ����Ƿ� a��ȯ
//return a;
//}


int gcd(int a, int b) {
	int c;
	while (b != 0) {
		c = a % b;
		a = b;
		b = c;
	}
	return a;
}

int main() {
	cin >> N;
	for (int i = 1; i <= N; i++) {
		cin >> ring[i];
	}
	int std = ring[1];
	for (int i = 2; i <= N; i++) {
		int a = gcd(std, ring[i]);
		cout << std / a << '/' << ring[i] / a << '\n';
	}
}