#include "one.h"
#include <bits/stdc++.h> //bits �����ȿ� stdc++.h ��������� ���
#include <iostream> //c++ �⺻ ����� ���
#include <vector>

using namespace std; //ǥ�� ���ӽ����̽� ���

int n, m, k;   // �Է¹ޱ�
int m2; //����
vector<int> a; //�ڵ����� �޸� �Ҵ�Ǵ� �迭
int i;
int j;
int b;

int main() {
	cin >> n >> m >> k; //n m k �Է¹޴´� (5, 8, 3)
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		a.push_back(x); //push_back = ������ ���� ���ʿ� ���� �ִ°�.
	}

	sort(a.begin(), a.end()); //�������� ����
	int firstN = a[n - 1]; //���� ū ��
	int secoundN = a[n - 2]; //���� ���� ��
	int result = 0;
	/*
	while (true) {
		for (i; i < k; i++) { //k����ŭ ���Ѵ�. �ִ� m����ŭ,
			//f (m = 0) { break; }
			result += firstN;

			cout << "ū �� ���� \n";
			m -= 1;
			j = m;  //������ m�� j�̴�.
		}

		//������ �ѹ� �����ش�.
		result += secoundN;
		j -= 1;
		cout << "���� �� ���� \n";

		if (j <= 0)
			break;

		for (b; b < k; b++) { //k����ŭ ���Ѵ�. �ִ� m����ŭ,
	//f (m = 0) { break; }
			result += firstN;

			cout << "ū �� ���� \n";
			j -= 1;
		}

		//������ �ѹ� �����ش�.
		if(j>0)
		result += secoundN;
		j -= 1;
		cout << "���� �� ���� \n";


		if(j<=0)
		break;
	}
	cout << result<< "\n";
	cout<< "j��: " << j;

}*/
// ���� ū ���� �������� Ƚ�� ���
	int cnt = (m / (k + 1)) * k;
	cnt += m % (k + 1);

	result += cnt * firstN; // ���� ū �� ���ϱ�
	result += (m - cnt) * secoundN; // �� ��°�� ū �� ���ϱ�

	cout << result << '\n'; // ���� ��� ���

}
//https://coding-factory.tistory.com/595
//https://hwan-shell.tistory.com/119