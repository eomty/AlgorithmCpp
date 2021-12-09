#include "Factorization.h"
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >>n;
    int factor = 2;  // 인수
    if (n != 1) // 입력값이 1이 아닐때, 
    {
        while (n > 1) //입력값이 2이상이면
        {
            if (n % factor == 0)  // 나눠지면 인수를 출력
            {
                cout << factor <<'\n';
                n /= factor; //n = n/factor;
            }
            else  // 나눠지지 않으면 나누는 인수를 증가 후 반복
            {
                factor++;
            }
        }
    }
}