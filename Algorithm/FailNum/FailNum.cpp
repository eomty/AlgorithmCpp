#include "FailNum.h"
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <map>

using namespace std;

//1.������������ ����� �ִ��� �и�
//2.�� ���������� �ο����� �и��� ���Ŀ� �������� ���
//3.�� ������������ ������ �ο� / ���罺���������� �ö�Դ� �ο��� �������� ���
//4.���� �������� �ο��� �����ο� - ���罺�������� �����ο�
//5.���������� ���������� ���Ҵµ� �ο��� ���ų� ���� �ο��� ���°�� �������� 0���� ó���߽��ϴ�.

bool comp(pair<int, double>& a, pair<int, double>& b) { //�������� ���Ͽ� ��ȯ
    if (a.second == b.second)
        return a.first < b.first;
    return a.second > b.second;
}

vector<int> solution(int N, vector<int> stages) {
    vector<int> answer;
    sort(stages.begin(), stages.end()); //3��°����X = �������� �������� ��������

    vector<pair<int, double>> percent;    //�� ���������� �������� ������percent
    map<int, int> stagesClearPlayer;    //���� �ο� 
    int pCount = stages.size();    //�� �ο� pCount

    for (int j = 0; j < stages.size(); j++)    //�������� Ŭ���� �ο��� ��ŭ �ϴ� �и�
        stagesClearPlayer[stages[j]]++;

    for (int i = 1; i <= N; i++) {        //ó������ N������������ ����
        if (!pCount || !stagesClearPlayer[i])
            percent.push_back({ i, 0 }); //������ 0
        else
            percent.push_back({ i, (double)stagesClearPlayer[i] / pCount });//�����ο�/�� �ο����� ������ ������ up
        pCount -= stagesClearPlayer[i];        //�������� �ο��鸸ŭ ���� �̾ �ݺ�������..
    }

    sort(percent.begin(), percent.end(), comp);// 3��° ���ڷ� comp�Լ��������� ���缭 �������� ���� ������������ ����
    for (auto p : percent)        //���信 �ű��
        answer.push_back(p.first);
    return answer;
}

//���� ��
void print(int N, vector<int> stages, vector<int> answer) { //���ڵ��� �޾ƿ�
    vector<int> t = solution(N, stages);
    if (answer == t) //�� Ȯ��
        cout << "����" << endl;
    else
        cout << "Ʋ��" << endl;
}

int main() {

    print(4, { 4,4,4,4,4 }, { 4,1,2,3 });
    print(5, { 2,1,2,6,2,4,3,3 }, { 3,4,2,1,5 });
    return 0;
}