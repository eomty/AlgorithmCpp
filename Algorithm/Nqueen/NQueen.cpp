#include "NQueen.h"
#include <iostream>
#define MAX 15
using namespace std;

int col[MAX];
int N;  //NxN크기의 체스판 퀸 N개를 공격할수 없게 놓는 문제 15까지 MAX
int result = 0;

//대각선의 위치한 좌표는 A,B에서 X-A = Y-B를 만족함.



void nqueen(int x)
{
    if (x == N)
        result ++;
    else
    {
        for (int i = 0; i < N; i++)
        {
            col[x] = i; // 해당 위치에 퀸을 배치

            if (check(x)) // 유효하다면 다음행의 퀸 배치, 유효하지않다면 다른 위치로 퀸 배치 변경
                nqueen(x + 1);
        }
    }
}

bool check(int level) //확인해보자
{
    for (int i = 0; i < level; i++)
        if (col[i] == col[level] || //같은라인
            abs(col[level] - col[i]) == level - i)//대각선의 위치한 좌표는 A,B에서 X-A = Y-B를 만족
            //대각선           //abs:절댓값
            return false;

    return true;
}

int main() {
    cin >> N;
    nqueen(0);
    cout << result;
}