#include "NM3.h"
#include <iostream>
#define MAX 9
using namespace std;

int n, m; //�ڿ��� n�� m�� �־������� 1~8
int arr[MAX] = { 0, }; //�ߺ� ���� m���� �� ������ ��α��϶�

bool visited[MAX] = { 0, };
// ���ٿ� �ϳ��� ������ ������ �����ϴ� ������ ����Ѵ�. �������� ����.

void dfs(int cnt)
{
    if (cnt == m) //m���� ��ŭ �ݺ�
    {
        for (int i = 0; i < m; i++)
            cout << arr[i] << ' ';
        cout << '\n';
        return;
    }
    for (int i = 1; i <= n; i++)
    {
        if (!visited[i]) //�ߺ�Ȯ��
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