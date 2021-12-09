#include "NQueen.h"
#include <iostream>
#define MAX 15
using namespace std;

int col[MAX];
int N;  //NxNũ���� ü���� �� N���� �����Ҽ� ���� ���� ���� 15���� MAX
int result = 0;

//�밢���� ��ġ�� ��ǥ�� A,B���� X-A = Y-B�� ������.



void nqueen(int x)
{
    if (x == N)
        result ++;
    else
    {
        for (int i = 0; i < N; i++)
        {
            col[x] = i; // �ش� ��ġ�� ���� ��ġ

            if (check(x)) // ��ȿ�ϴٸ� �������� �� ��ġ, ��ȿ�����ʴٸ� �ٸ� ��ġ�� �� ��ġ ����
                nqueen(x + 1);
        }
    }
}

bool check(int level) //Ȯ���غ���
{
    for (int i = 0; i < level; i++)
        if (col[i] == col[level] || //��������
            abs(col[level] - col[i]) == level - i)//�밢���� ��ġ�� ��ǥ�� A,B���� X-A = Y-B�� ����
            //�밢��           //abs:����
            return false;

    return true;
}

int main() {
    cin >> N;
    nqueen(0);
    cout << result;
}