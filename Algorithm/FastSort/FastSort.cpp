#include "FastSort.h"
#include <bits/stdc++.h>
#include <iostream> 

using namespace std; //ǥ�� ���ӽ����̽� ���

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

