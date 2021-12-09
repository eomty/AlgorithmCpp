#include "Binary.h"
#include <iostream>

using namespace std;
int n;
//재귀를 이용한 이진탐색을 이용하여 탐색
bool BinarySearch(int* arr, int start, int end, int key) {
    cin >> arr[n];
    if (start > end) 
    {
        cout << "-1";
        return false;
    } //key 값이 없을 때

    int mid = (start + end) / 2;

    if (arr[mid] == key) { // %2한 mid가 key값과 같으면
        return true; 

    }
    else if (arr[mid] > key) { //key 값이 mid 의 값보다 작으면 왼쪽으로
        return BinarySearch(arr, start, mid - 1, key);

    }
    else {  //key 값이 mid 의 값보다 크면 오른쪽으로
        return BinarySearch(arr, mid + 1, end, key);

    }

    
}
int main() {
    cin >> n;


}