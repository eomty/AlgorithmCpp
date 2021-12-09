#include "NewWorld.h"
#include <bits/stdc++.h>
#include <iostream> 


using namespace std; //표준 네임스페이스 사용


int main() {

    string str;
    getline(cin, str); //c++ 여러 문자열 입력받기는 getline() 함수가 좋음 입력받으면 str에 넣는다.
    int count = 1; //일단 뭘 세야할까 .. 공백의 갯수를 세워보자.


    for (int i = 0; i < str.length(); i++) //문자열 길이만 큼 반복한다.
    {
        if (str[i] == ' ') { //공백이 있으면
            count++; //카운트를 올린다.
        }
    }
    // 반복문에 상관없이 맨앞에 공백이 있으면 제거한다.
    if (str[0] == ' ') { //
        count--;
        //cout <<("맨 앞 공백 지웠다");
    }

    // 반복문에 상관없이 맨 뒤에 공백이 있으면 제거한다
    if (str[str.length() - 1] == ' ') {
        count--;
        //cout << ("맨 뒤 공백 지웠다");
    }

    cout << count;
    return 0;
}