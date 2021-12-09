#include "LowScoreStudent2.h"
#include <bits/stdc++.h>
#include <iostream> 

using namespace std;

//표준 네임스페이스 사용
 //학생의 이름과 성적정보가 주어졌을때 성적이 낮은 순서대로 학생의 이름을 출력하라
// 
// 1. 학생 이름과 성적이 담겨있는 학생 class 생성 //오름차순으로 되있어야함.
// 2. 학생의 이름과 성적을 묶을수있는 vector 필요.
// 3. main함수에서 for문을 통해 출력

//첫번째 줄에 학생의수 N이 입력
//N+1번째 줄에는 학생의 이름을 나타내는 문자열 A와 학생의 성적을 나타내는 정수 B 공백으로 구분되어 입력 ex) 엄태현 97
//모든 학생의 이름을 성적이 낮은 순서대로 출력한다.



class Student { //성적 정보가 담긴 student클래스 생성
public: //이후 main함수에서 쓸거임
    string s_name;
    int s_score;
    Student(string name, int score) {
        this->s_name = name;
        this->s_score = score;

    }

    bool operator <(Student& other) { // public선언된 Student클래스를 가져온다
        return this->s_score < other.s_score; // 낮은 순서대로 정렬 되 있으면 리턴.
    }
};

int n; //정수N만큼 학생의 수
vector<Student> v; //Student 클래스의 벡터 v

int main(void) {
    // N을 입력받기
    cin >> n; //첫째줄 입력 정수N만큼 학생의 수

    // N명의 학생 정보를 입력받아 리스트에 저장
    for (int i = 0; i < n; i++) {
        string name;
        int score;
        cin >> name >> score;
        v.push_back(Student(name, score)); //v벡터 끝에서부터 원소 추가
    }



    sort(v.begin(), v.end()); //벡터의 첨부터 끝까지 오름차순 정렬

    // 정렬이 수행된 결과를 출력
    for (int i = 0; i < n; i++) {
        cout << v[i].s_name << ' '; //i횟수만 큼 공백으로 구분해서 결과 출력
    }
}