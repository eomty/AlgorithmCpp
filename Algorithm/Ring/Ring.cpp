#include "Ring.h"
#include<iostream>

using namespace std;

int N;
int ring[101];

//https://luv-n-interest.tistory.com/959
//유클리드의 호제법
//두 정수 a, b(a > b) 에 대하여 gcd(a, b) = gcd(b, r)//
								//a = bq+r (0<=r<b)라 가정하면
										// a,b의 최대공약수는 b,r의 최대공약수와 같다

//a를 b로 나누고 나눠지면 b가 최대공약수 그렇지 않으면 r이 남음
//b는 호제법 식의 a가 되고 r은 호제법 식의 b가 되어 다시 a를b로 나눈다.
//r=0이 되면 그때 b가 최대공약수가 됨.



	//ex) int gcd(int a, int b){
	//        if (b == 0) return a; //b가 0이면 a를 리턴
//				else return gcd(b, a % b);

//int GCD(int a, int b){
//int c;
//b ==0 이 되는 순간은 c가 0일때 즉, 당시에 나눴던 값이 최대공약수
//while(b!=0){
//	c = a % b;
//	a = b;
//	b = c;
//}
////b는 a에 할당 되었으므로 a반환
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