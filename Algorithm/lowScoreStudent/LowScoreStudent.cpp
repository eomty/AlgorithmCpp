#include "LowScoreStudent.h"
#include <bits/stdc++.h>
#include <iostream> 

using namespace std;

//ǥ�� ���ӽ����̽� ���
 //�л��� �̸��� ���������� �־������� ������ ���� ������� �л��� �̸��� ����϶�
// 1. �л��� �̸��� ������ �������ִ� vector �ʿ�.
// 2. �л� �̸��� ������ ����ִ� �л� class �߰� //������������ ���־����.
// 3. main�Լ����� for���� ���� ���

//ù��° �ٿ� �л��Ǽ� N�� �Է� 10000����
//N+1��° �ٿ��� �л��� �̸��� ��Ÿ���� ���ڿ� A�� �л��� ������ ��Ÿ���� ���� B �������� ���еǾ� �Է� ex) ������ 97
//��� �л��� �̸��� ������ ���� ������� ����Ѵ�.

int n;
vector<Student> v; //Student Ŭ������ ���� v

class Student { //���� ������ ��� studentŬ���� ����
public: //���� main�Լ����� ������
    string s_name;
    int s_score;
    Student(string name, int score) {
        this->s_name = name;
        this->s_score = score;

    }
    // ���� ������ '������ ���� ����'
    bool operator <(Student& other) { // public����� StudentŬ������ �����´�
        return this->s_score < other.s_score; 
    }
};


int main(void) {
    // N�� �Է¹ޱ�
    cin >> n; //ù°�� �Է� ����N��ŭ �л��� ��

    // N���� �л� ������ �Է¹޾� ����Ʈ�� ����
    for (int i = 0; i < n; i++) {
        string name;
        int score;
        cin >> name >> score;
        v.push_back(Student(name, score)); //v���� ���������� ���� �߰�
    }



    sort(v.begin(), v.end()); //������ ÷���� ������ �������� ����

    // ������ ����� ����� ���
    for (int i = 0; i < n; i++) {
        cout << v[i].s_name << " "; //iȽ���� ŭ �������� �����ؼ� ��� ���
    }
}