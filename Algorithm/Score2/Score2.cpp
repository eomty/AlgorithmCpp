#include "Score2.h"
#include <bits/stdc++.h>
#include <iostream> 

using namespace std; //ǥ�� ���ӽ����̽� ���

int n;
int _n;
int main() {
	//cin >> n;

	//	if(n >= 90 && n <101) {
	//		cout << "A";
	//	}
	//	else if (n >= 80 && n < 90) {
	//		cout << "B";
	//	}else if (n >= 70 && n < 80) {
	//		cout << "C";
	//	} else if (n >= 60 && n < 70) {
	//		cout << "D";
	//	} else {
	//		cout << "F";
	//	}

	cin >>n; //�̰� ���輺���̰� �̰� ������ ..?
	//������� ���� �̿��϶�..
	_n = n / 10;
	switch (_n){
	case 9:
		cout << "A";
		break;
	case 8:
		cout << "B";
		break;
	case 7:
		cout << "C";
		break;
	case 6:
		cout << "D";
		break;
	case 10:
		cout << "A";
		break;
	default:
		cout << "F";
		break;
	}
}