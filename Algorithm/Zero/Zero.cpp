#include "Zero.h"
#include <iostream>
#include <stack>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	stack<int> data;
	int k;
	int num;
	int result = 0;
	
	
	//������ 0�� �Էµɰ�� �ٷ� �տ����� ����.
	//ex) (5)  4 3 0 2 0 �ϰ�� 4, 7, 4, 6, 4 ���ǹǷ� 4�� ��µǾ���

	cin >> k;  //k�Է� k����ŭ �ݺ�

	for (int i = 0; i < k; ++i) { //k��ŭ �ݺ� num�� �ԷµǾ��� num�� 
		cin >> num;
		if (num == 0) {
			data.pop(); //������ ������ ����
		}
		else {
			data.push(num); //num�� �����͸� �������� ����
		}
	}

	// ���� ���ÿ� �����ִ°͵��� ������� ��.

	for (int i = 0; !data.empty(); ++i) { //data�� ��������ʴٸ� -> �����Ͱ� ��� �ݺ� ����
		result += data.top(); //top = ���� �ֻ��� ������ ��ȯ �ؼ� result�� ������.
		data.pop(); //�׸��� ����;
	}

	cout << result;

	return 0;
}