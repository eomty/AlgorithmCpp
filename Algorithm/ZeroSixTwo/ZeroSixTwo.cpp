#include "ZeroSixTwo.h"
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>

//1. 주어진 집들의 좌표 정렬
//2. 최소 거리는 1, 최대 거리는 처음 집과 마지막 집 사이의 거리
//3. 이분 탐색을 진행
//4. 3번에서 조건을 충족하는 거리 중 최대를 출력합니다.

//첫째줄에 가장 인접한 두 공유기 사이의 최대 거리 출력


//이 문제는 균모 교수님이랑 같이 풀었던 문제같은데?
//이 문제는 가장 인접한 두 공유기 사이의 거리의 최댓값을 gap으로 두고 탐색해야 하는 문제였던걸로 기억.
//이진 탐색으로 거리를 바꿔가며 매순간 공유기를 설치하여 C보다 많은 개수로 공유기를 설치할수있는지 체크
//그러니까 두 공유기 사이의 거리를 gap으로 잡고 gap=1 , 2 , 3 ,4 ... 등이 있고
//gap=? 일때 공유기를 3개 설치할 수 있는지 확인하면 됨.
//그러니까 .. 그림판 부탁해요!

using namespace std;

const int MAX = 200000;

int N, C; //집의수 N 공유기수 C
int house[MAX]; //최대거리

bool possible(int dist) //dist는 mid 중간점을 받아올거임 뒤에서

{
    int cnt = 1; //최소거리
    int prev = house[0];

    //조건 충족하는지 확인
    for (int i = 1; i < N; i++)
        if (house[i] - prev >= dist)
        {
            cnt++; //최소거리 증가
            prev = house[i]; 
        }

    //조건 충족
    if (cnt >= C) //최소거리가 공유기수 보다 많거나 같으면 반환
        return true;
    return false;
}



int main(void)

{
   // ios_base::sync_with_stdio(0);
    //cin.tie(0);
    cin >> N >> C;

    for (int i = 0; i < N; i++)
        cin >> house[i]; //집의 좌표를 나타내는 i가 한줄에 하나씩

    sort(house, house + N); //3번째 인자가없으면 오름차순 정렬

    //최소거리, 최대 거리
    int low = 1, high = house[N - 1] - house[0];
    int result = 0;

    while (low <= high) //저점이 고점과 겹치면!
    {
        int mid = (low + high) / 2; //중간점 찾기

        if (possible(mid)) //조건이 충족되면
        {
            result = max(result, mid);
            low = mid + 1; //저점은 점점 중간점에서 +1 씩
        }
        else
            high = mid - 1; //고점은 점점 중간점에서 -1 씩
    }

    cout << result << "\n";

    return 0;

}