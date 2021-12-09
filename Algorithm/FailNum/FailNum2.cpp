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

    double failRate;//실패율
    double tryUser; //도전자
    double failUser;//실패자

    //실패율 구하는 로직
    for (int i = 0; i < N; i++) {
        failUser = 0;
        tryUser = 0;

        for (int j = 0; j < stages.size(); j++) { //스테이지 길이만큼
            if (stages[j] >= i + 1) {
                tryUser++; //도전자 증가
                if (stages[j] == i + 1) {
                    failUser++; //실패자 증가
                }
            }
        }
        //오류가 뜰경우!! 0으로 나눌때 예외처리 방법

        failRate = failUser / tryUser; //실패율= 실패자 % 도전자
        failRateVector.push_back(make_pair(failRate, i + 1));
    } //for문 종료



    sort(failRateVector.begin(), failRateVector.end(), comp); //3번째인자를 comp함수로 적었으니 실패율 비교해서 정렬
    for (int i = 0; i < N; i++) {
        answer.push_back(failRateVector[i].second);
    }
    return answer;
}


