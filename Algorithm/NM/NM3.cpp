#include "NM3.h"
#include <iostream>
#define MAX 9
using namespace std;

int n, m; //자연수 n과 m이 주어졌을때 1~8
int arr[MAX] = { 0, }; //중복 없이 m개를 고른 수열을 모두구하라

bool visited[MAX] = { 0, };
// 한줄에 하나씩 문제의 조건을 만족하는 수열을 출력한다. 공백으로 구분.

void dfs(int cnt)
{
    if (cnt == m) //m길이 만큼 반복
    {
        for (int i = 0; i < m; i++)
            cout << arr[i] << ' ';
        cout << '\n';
        return;
    }
    for (int i = 1; i <= n; i++)
    {
        if (!visited[i]) //중복확인
        {
            visited[i] = true;
            arr[cnt] = i;
            dfs(cnt + 1);
            visited[i] = false;
        }
    }
}

int main() {
    cin >> n >> m;
    dfs(0);
}