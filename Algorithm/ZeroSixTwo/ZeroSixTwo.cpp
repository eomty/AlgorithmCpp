#include "ZeroSixTwo.h"
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>

//1. �־��� ������ ��ǥ ����
//2. �ּ� �Ÿ��� 1, �ִ� �Ÿ��� ó�� ���� ������ �� ������ �Ÿ�
//3. �̺� Ž���� ����
//4. 3������ ������ �����ϴ� �Ÿ� �� �ִ븦 ����մϴ�.

//ù°�ٿ� ���� ������ �� ������ ������ �ִ� �Ÿ� ���


//�� ������ �ո� �������̶� ���� Ǯ���� ����������?
//�� ������ ���� ������ �� ������ ������ �Ÿ��� �ִ��� gap���� �ΰ� Ž���ؾ� �ϴ� ���������ɷ� ���.
//���� Ž������ �Ÿ��� �ٲ㰡�� �ż��� �����⸦ ��ġ�Ͽ� C���� ���� ������ �����⸦ ��ġ�Ҽ��ִ��� üũ
//�׷��ϱ� �� ������ ������ �Ÿ��� gap���� ��� gap=1 , 2 , 3 ,4 ... ���� �ְ�
//gap=? �϶� �����⸦ 3�� ��ġ�� �� �ִ��� Ȯ���ϸ� ��.
//�׷��ϱ� .. �׸��� ��Ź�ؿ�!

using namespace std;

const int MAX = 200000;

int N, C; //���Ǽ� N ������� C
int house[MAX]; //�ִ�Ÿ�

bool possible(int dist) //dist�� mid �߰����� �޾ƿð��� �ڿ���

{
    int cnt = 1; //�ּҰŸ�
    int prev = house[0];

    //���� �����ϴ��� Ȯ��
    for (int i = 1; i < N; i++)
        if (house[i] - prev >= dist)
        {
            cnt++; //�ּҰŸ� ����
            prev = house[i]; 
        }

    //���� ����
    if (cnt >= C) //�ּҰŸ��� ������� ���� ���ų� ������ ��ȯ
        return true;
    return false;
}



int main(void)

{
   // ios_base::sync_with_stdio(0);
    //cin.tie(0);
    cin >> N >> C;

    for (int i = 0; i < N; i++)
        cin >> house[i]; //���� ��ǥ�� ��Ÿ���� i�� ���ٿ� �ϳ���

    sort(house, house + N); //3��° ���ڰ������� �������� ����

    //�ּҰŸ�, �ִ� �Ÿ�
    int low = 1, high = house[N - 1] - house[0];
    int result = 0;

    while (low <= high) //������ ������ ��ġ��!
    {
        int mid = (low + high) / 2; //�߰��� ã��

        if (possible(mid)) //������ �����Ǹ�
        {
            result = max(result, mid);
            low = mid + 1; //������ ���� �߰������� +1 ��
        }
        else
            high = mid - 1; //������ ���� �߰������� -1 ��
    }

    cout << result << "\n";

    return 0;

}