#include "Josepus.h"
#include <iostream>
#include <bits/stdc++.h>

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
     큐가 원형인것처럼 구현 하려면 값을 맨뒤로 넣은다음 빼야할거 빼주고 다음에 이어서 해야할듯?
result =  3 6 2 7 5 1 4

*/

int main() {

	int N, K;  //N 사람수 K번째 사람제거
	cin >> N >> K;

	queue<int> q;
	for (int i = 1; i <= N; i++) {
		q.push(i); //큐에 사람값을 모두 넣고;
	}

	cout << "<";

	while (q.size() != 0) //큐가 비어있지않다면!
	{
		for (int i = 1; i < K; i++) // K번째 전 만큼 반복한다..
		{
			q.push(q.front()); //k번 까지의 값을 맨뒤로 넣는다 why? 큐는 원형이 아니기에 원형인것처럼 이어줌.
			q.pop();// k번째를 제거해준다
		}

		cout << q.front();// 그리고 곧 제거 되는 수를 출력해주고

		if (q.size() != 1) cout << ", "; //만약 큐가 남아 있으면 , 를 써준다.

		q.pop(); //제거한후 반복; 링크드리스트이용
	}
	cout << ">";
}