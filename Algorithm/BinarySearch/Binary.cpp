#include "Binary.h"
#include <iostream>

using namespace std;
int n;
//��͸� �̿��� ����Ž���� �̿��Ͽ� Ž��
bool BinarySearch(int* arr, int start, int end, int key) {
    cin >> arr[n];
    if (start > end) 
    {
        cout << "-1";
        return false;
    } //key ���� ���� ��

    int mid = (start + end) / 2;

    if (arr[mid] == key) { // %2�� mid�� key���� ������
        return true; 

    }
    else if (arr[mid] > key) { //key ���� mid �� ������ ������ ��������
        return BinarySearch(arr, start, mid - 1, key);

    }
    else {  //key ���� mid �� ������ ũ�� ����������
        return BinarySearch(arr, mid + 1, end, key);

    }

    
}
int main() {
    cin >> n;


}