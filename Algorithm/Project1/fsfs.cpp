#include "fsfs.h"
#include <bits/stdc++.h> //bits 폴더안에 stdc++.h 헤더파일을 사용
#include <iostream> //c++ 기본 입출력 헤더

using namespace std; //표준 네임스페이스 사용

int n, m;   // n행 m렬 선언
int result; // 결과
int i;

//int main() {             //메인함수
//    //cout << n;  //행 출력
//    //cout << m;  //열 출력
//    // N, M을 공백을 기준으로 구분하여 입력 받기
//    cout << "행 번호와 열 번호를 입력해주십시오. ex) 3 3\n";
//    cin >> n >> m; // n행 m열;
//
//    cout << n << "행" << m << "열 \n";
//    // 한 줄씩 입력 받아 확인하기
//    cout << i+1 << "행 \n";
//    for (i = 0; i < n; i++) {
//        // 현재 줄에서 '가장 작은 수' 찾기
//        int min_value = 10001; //10000이하 숫자만 가능하도록.
//        
//        for (int j = 0; j < m; j++) {
//            cout << "0~9 까지의 숫자를 입력하시오..";
//            int x;
//            cin >> x; //숫자를 입력하면 int x에 등록.
//            min_value = min(min_value, x); // 최소값을 min_value에 저장
//        }
//        cout << i+2 << "행\n";
//        // '가장 작은 수'들 중에서 가장 큰 수 찾기
//        result = max(result, min_value);
//    }
//    cout << "당신은 " << result << "카드를 선택하면 유리합니다. \n 프로그램이 종료되었습니다.\n\n\n"; // 최종 답안 출력
//}

int main() {             //메인함수
    //cout << n;  //행 출력
    //cout << m;  //열 출력
    // N, M을 공백을 기준으로 구분하여 입력 받기
    cout << "행 번호와 열 번호를 입력해주십시오. ex) 3 3\n";
    cin >> n >> m; // n행 m열;

    cout << n << "행" << m << "열 \n";
    // 한 줄씩 입력 받아 확인하기
    cout << i + 1 << "행 \n";
    for (i = 0; i < n; i++) {
        // 현재 줄에서 '가장 작은 수' 찾기
        int min_value = 10000; //10000이하 숫자만 가능하도록.


        for (int j = 0; j < m; j++) {

            cout << "0~9 까지의 숫자를 입력하시오..";

            int x;
            cin >> x; //숫자를 입력하면 int x에 등록.
            min_value = min(min_value, x); // 최소값을 min_value에 저장

        }
        cout << i + 2 << "행\n";
        
        // '가장 작은 수'들 중에서 가장 큰 수 찾기
        result = min_value;
    }

    cout << "당신은 " << n <<"행의 "<< result <<" 카드를 뽑으면 유리합니다. \n";
}