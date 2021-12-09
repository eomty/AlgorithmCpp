#include "FailNum2.h"

#include <bits/stdc++.h>


using namespace std;



bool comp(pair<double, int> a, pair<double, int> b) {
    if (a.second == b.second)
        return a.first < b.first;
    return a.second > b.second;
}


vector<int> solution(int N, vector<int> stages) {
    vector<int> answer;
    vector<pair<double, int>> failRateVector;

    double failRate;//������
    double tryUser; //������
    double failUser;//������

    //������ ���ϴ� ����
    for (int i = 0; i < N; i++) {
        failUser = 0;
        tryUser = 0;

        for (int j = 0; j < stages.size(); j++) { //�������� ���̸�ŭ
            if (stages[j] >= i + 1) {
                tryUser++; //������ ����
                if (stages[j] == i + 1) {
                    failUser++; //������ ����
                }
            }
        }
        //������ ����!! 0���� ������ ����ó�� ���

        failRate = failUser / tryUser; //������= ������ % ������
        failRateVector.push_back(make_pair(failRate, i + 1));
    } //for�� ����



    sort(failRateVector.begin(), failRateVector.end(), comp); //3��°���ڸ� comp�Լ��� �������� ������ ���ؼ� ����
    for (int i = 0; i < N; i++) {
        answer.push_back(failRateVector[i].second);
    }
    return answer;
}


