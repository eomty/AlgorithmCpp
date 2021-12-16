#include "Josepus.h"
#include "JosepusLinkedList.h"
#include <iostream>
#include <bits/stdc++.h>
#include <list>

using namespace std;

/*

1번부터 N번까지 N명의 사람이 원을 이루면서 앉아있고, 양의 정수 K(≤ N)가 주어진다.
이제 순서대로 K번째 사람을 제거한다.
한 사람이 제거되면 남은 사람들로 이루어진 원을 따라 이 과정을 계속해 나간다.
이 과정은 N명의 사람이 모두 제거될 때까지 계속된다.
원에서 사람들이 제거되는 순서를 (N, K)-요세푸스 순열이라고 한다.
예를 들어 (7, 3)-요세푸스 순열은 <3, 6, 2, 7, 5, 1, 4>이다.

N과 K가 주어지면 (N, K)-요세푸스 순열을 구하는 프로그램을 작성하시오.

입력
첫째 줄에 N과 K가 빈 칸을 사이에 두고 순서대로 주어진다. (1 ≤ K ≤ N ≤ 5,000)

출력
예제와 같이 요세푸스 순열을 출력한다.

예제 입력
7 3

예제 출력
<3, 6, 2, 7, 5, 1, 4>

*/

/*
1번부터 N번까지 스택에 넣는다.
K번째 사람을 제거한다,
한 사람이 제거 되면 남은사람들로 이어서 반복
모든 사람이 제거되고 원에서 사람들이 제거된 순서를 요세푸스 순열 이라한다.
1 2 3 4 5 6 7 에서 K가 3 이면 처음에 3 제거
1 2 4 5 6 7 /6제거
1 2 4 5 7 /2제거
1 4 5 7 /7제거
1 4 5 /5제거
1 4 /1제거
4 /4제거

result =  3 6 2 7 5 1 4

*/

int main() {
    // iterator 인터페이스.
	list<int>::iterator itr; //반복자 선언
	list<int> lst; //리스트 선언
	int N, K, count;  //N 사람수 K번째 사람제거
	cin >> N >> K;

	for (int i = 1; i <= N; i++) {
		lst.push_back(i); //큐에 사람값을 모두 넣고;
	}

    cout << "<";
    count = 1;

    itr = lst.begin();

    while (lst.size() != 0) { //리스트에 값이 남아있다면

        if (itr == lst.end())   //이미 한반퀴를 돌았다면
            itr = lst.begin();  //처음으로.

        if (count == K) {  // :번째 요소라면
            cout << *itr;   //제거될 숫자 출력

            count = 1;
            
            
            itr = lst.erase(itr); //erase 함수의 반환값이 삭제 원소 다음에 있는 원소의 반복자 https://blossoming-man.tistory.com/entry/cstdlisterase-%ED%95%A8%EC%88%98-%EC%82%AC%EC%9A%A9-%EC%8B%9C-%EB%B0%98%ED%99%98-%EA%B0%92%EC%9D%84-%EC%82%AC%EC%9A%A9%ED%95%98%EC%9E%90
            
            if (itr == lst.end())
                itr = lst.begin();

            if (lst.size() != 1) { //리스트가 0일떄, 하면 마지막에 ,가 출력되서 안됌.
                cout << ", ";
            }
            else {  //삭제했더니 원소가 하나밖에 안 남으면
                itr = lst.begin();
                cout << ", " << *itr;
                break;
            }
        } // :번째 요소라면
        count++;
        itr++;
    } //리스트 값이 없으면 빠져나옴
    cout << ">";
}