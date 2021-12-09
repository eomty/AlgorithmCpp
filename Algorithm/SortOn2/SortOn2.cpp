#include "SortOn2.h"
#include <iostream>
#include <vector>
#include <algorithm> //sort 사용

using namespace std;

int n; //수의 개수
vector<int> v;


int main(void)

{
    cin >> n; //입력값 수의개수

    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num; //주어질 수 오름차순  되야함
        v.push_back(num); //벡터의 마지막부터 하나하나 넣어줌
    }

    sort(v.begin(), v.end()); //오름차순해주고 

    //출력
    for (int i = 0; i < n; i++)
        cout << v[i] << endl;



    return 0;

}