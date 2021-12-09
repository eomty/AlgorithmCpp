#include "Score2.h"
#include <bits/stdc++.h>
#include <iostream> 

using namespace std; //표준 네임스페이스 사용

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

	cin >>n; //이게 시험성적이고 이걸 나누면 ..?
	//나누기와 몫을 이용하라..
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