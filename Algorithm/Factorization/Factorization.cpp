#include "Factorization.h"
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >>n;
    int factor = 2;  // �μ�
    if (n != 1) // �Է°��� 1�� �ƴҶ�, 
    {
        while (n > 1) //�Է°��� 2�̻��̸�
        {
            if (n % factor == 0)  // �������� �μ��� ���
            {
                cout << factor <<'\n';
                n /= factor; //n = n/factor;
            }
            else  // �������� ������ ������ �μ��� ���� �� �ݺ�
            {
                factor++;
            }
        }
    }
}