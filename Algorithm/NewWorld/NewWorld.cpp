#include "NewWorld.h"
#include <bits/stdc++.h>
#include <iostream> 


using namespace std; //ǥ�� ���ӽ����̽� ���


int main() {

    string str;
    getline(cin, str); //c++ ���� ���ڿ� �Է¹ޱ�� getline() �Լ��� ���� �Է¹����� str�� �ִ´�.
    int count = 1; //�ϴ� �� �����ұ� .. ������ ������ ��������.


    for (int i = 0; i < str.length(); i++) //���ڿ� ���̸� ŭ �ݺ��Ѵ�.
    {
        if (str[i] == ' ') { //������ ������
            count++; //ī��Ʈ�� �ø���.
        }
    }
    // �ݺ����� ������� �Ǿտ� ������ ������ �����Ѵ�.
    if (str[0] == ' ') { //
        count--;
        //cout <<("�� �� ���� ������");
    }

    // �ݺ����� ������� �� �ڿ� ������ ������ �����Ѵ�
    if (str[str.length() - 1] == ' ') {
        count--;
        //cout << ("�� �� ���� ������");
    }

    cout << count;
    return 0;
}