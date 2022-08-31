#include <iostream>
#include <cmath>
#include <bits/stdc++.h>
#include <climits>
#include <deque>
using namespace std;

const int R = 4, C = 4;

void printBoundary(int mat[R][C]) {
	if(R==1) {
		for(int i=0;i<R;i++) {
			cout << mat[i][0] << "\n";
		}
	} else if(C==1) {
		for(int i=0;i<C;i++) {
			cout << mat[0][i] << "\n";
		}
	} else {
		for(int i=0;i<C;i++) {
			cout << mat[0][i] << "\n";
		}
		for(int i=1;i<C;i++) {
			cout << mat[i][C-1] << "\n";
		}
		for(int i=C-2;i>=0;i--) {
			cout << mat[R-1][i] << "\n";
		}
		for(int i=R-2;i>=1;i--) {
			cout << mat[i][0] << "\n";
		}
	}
}

int main() {
	int arr[R][C] = {{1, 2, 3, 4},
				   {5, 6, 7, 8},
				   {9, 10, 11, 12},
				   {13, 14, 15, 16}};

	printBoundary(arr);
	return 0;
}
