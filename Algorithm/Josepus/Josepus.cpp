#include "Josepus.h"
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

//1번부터 N번까지 스택에 넣는다. 
//K번째 사람을 제거한다,
//한 사람이 제거 되면 남은사람들로 이어서 반복
//모든 사람이 제거되고 원에서 사람들이 제거된 순서를 요세푸스 순열 이라한다.
//1 2 3 4 5 6 7 에서 K가 3 이면 처음에 3 제거
//1 2 4 5 6 7 /6제거
//1 2 4 5 7 /2제거
//1 4 5 7 /7제거
//1 4 5 /5제거
//1 4 /1제거
//4 /4제거
//큐가 원현인것처럼하려면 값을 맨뒤로 넣은다음 빼주고 다음에  이어서 해야할듯?
//result =  3 6 2 7 5 1 4

int main() {

	int N, K;
	cin >> N >> K;

	queue<int> q;
	for (int i = 1; i <= N; i++) {
		q.push(i); //큐에 값을 모두 넣고;
	}

	cout << "<";

	while (q.size() != 0)
	{
		for (int i = 1; i < K; i++) //k만큼 돌려면 k-1해줘야함 아니면 i<k로 해도 될듯?;
		{
			q.push(q.front()); //k번 까지의 값을 맨뒤로 넣는다 why? 큐는 원형이 아니기에 원형인것처럼 이어줌.
			q.pop();// k번째를 제거해준다
		}
		cout << q.front();// 그리고 제거된 수를 출력해주고

		if (q.size() != 1) cout << ", "; //만약 큐가 비어있찌 않다면 , 를 써주고
		q.pop(); //제거한후 반복;
	}
	cout << ">";
}