#include "FailNum.h"
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <map>

using namespace std;

//1.스테이지별로 몇명이 있는지 분리
//2.각 스테이지별 인원으로 분리를 한후에 실패율을 계산
//3.각 스테이지에서 못깨는 인원 / 현재스테이지까지 올라왔던 인원로 실패율을 계산
//4.다음 스테이지 인원은 현재인원 - 현재스테이지를 못깬인원
//5.예외적으로 스테이지가 남았는데 인원이 없거나 현재 인원이 없는경우 실패율을 0으로 처리했습니다.

bool comp(pair<int, double>& a, pair<int, double>& b) { //실패율을 비교하여 반환
    if (a.second == b.second)
        return a.first < b.first;
    return a.second > b.second;
}

vector<int> solution(int N, vector<int> stages) {
    vector<int> answer;
    sort(stages.begin(), stages.end()); //3번째인자X = 스테이지 오름차순 기초정렬

    vector<pair<int, double>> percent;    //각 스테이지와 스테이지 실패율percent
    map<int, int> stagesClearPlayer;    //못깬 인원 
    int pCount = stages.size();    //총 인원 pCount

    for (int j = 0; j < stages.size(); j++)    //스테이지 클리어 인원수 만큼 일단 분리
        stagesClearPlayer[stages[j]]++;

    for (int i = 1; i <= N; i++) {        //처음부터 N스테이지까지 루프
        if (!pCount || !stagesClearPlayer[i])
            percent.push_back({ i, 0 }); //실패율 0
        else
            percent.push_back({ i, (double)stagesClearPlayer[i] / pCount });//못깬인원/총 인원으로 나눠서 실패율 up
        pCount -= stagesClearPlayer[i];        //깨지못한 인원들만큼 빼고 이어서 반복문으로..
    }

    sort(percent.begin(), percent.end(), comp);// 3번째 인자로 comp함수를섰으니 맞춰서 실패율이 높은 내림차순으로 정렬
    for (auto p : percent)        //정답에 옮기기
        answer.push_back(p.first);
    return answer;
}

//정답 비교
void print(int N, vector<int> stages, vector<int> answer) { //인자들을 받아옴
    vector<int> t = solution(N, stages);
    if (answer == t) //답 확인
        cout << "정답" << endl;
    else
        cout << "틀림" << endl;
}

int main() {

    print(4, { 4,4,4,4,4 }, { 4,1,2,3 });
    print(5, { 2,1,2,6,2,4,3,3 }, { 3,4,2,1,5 });
    return 0;
}