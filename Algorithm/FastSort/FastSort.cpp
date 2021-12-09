#include "FastSort.h"
#include <bits/stdc++.h>
#include <iostream> 

using namespace std; //표준 네임스페이스 사용

int arr[10] = { 5, 7, 9, 0, 3, 1, 6, 2, 4, 8 };

void quickSort(int* arr, int p, int r)
{
	if (p < r)
	{
		q= partition(arr,p,r)
		quickSort(arr, p, q - 1);
		quickSort(arr, q + 1, r);
	}

	}

void partition(int* arr, int p, int r) {
	pivot = p;
	left = p + 1;
	right = r;
}

int main() {
	
}

