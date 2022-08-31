#include <iostream>
#include <cmath>
#include <bits/stdc++.h>
#include <climits>
#include <deque>
using namespace std;

const int R = 4, C = 4;

int main() {
	int arr[R][C] = {};
	transpose(arr);
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			cout << arr[i][j] << " ";
		}

		cout << endl;
	}	
	return 0;
}

void transpose(int mat[R][C]) {
	for(int i = 0; i < n; i++)
		for(int j = i + 1; j < n; j++)
			swap(mat[i][j], mat[j][i]);
}