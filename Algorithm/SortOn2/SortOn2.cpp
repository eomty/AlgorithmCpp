#include "SortOn2.h"
#include <iostream>
#include <vector>
#include <algorithm> //sort ���

using namespace std;

int n; //���� ����
vector<int> v;


int main(void)

{
    cin >> n; //�Է°� ���ǰ���

    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num; //�־��� �� ��������  �Ǿ���
        v.push_back(num); //������ ���������� �ϳ��ϳ� �־���
    }

    sort(v.begin(), v.end()); //�����������ְ� 

    //���
    for (int i = 0; i < n; i++)
        cout << v[i] << endl;



    return 0;

}