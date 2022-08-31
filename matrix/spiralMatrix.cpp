#include <iostream>
#include <stdio.h>
#include <cmath>
#include <bits/stdc++.h>
#include <climits>
#include <deque>
using namespace std;

const int R=4, C=4;

void spiralMatrix(int mat[R][C]) {
	int top = 0, left = 0, right = C-1, bottom = R-1;
	while(top <= bottom && left <= right) {
		for(int i=left;i<=right;i++) {
			cout << mat[top][i] << "\n";
		}
		top++;
		for(int i=top;i<=bottom;i++) {
			cout << mat[i][right] << "\n";
		}
		right--;
		if(top<=bottom) {
			for(int i=right; i >= left; i--) {
				cout << mat[bottom][i] << "\n";
			}
			bottom--;
		} 
		if(left<=right) {
			for(int i = bottom;i>=top;i--) {
				cout << mat[i][left] << "\n";
			}
			left++;
		}
	}
}
int main(){
	int arr[R][C] = {{1, 2, 3, 4},
				   {5, 6, 7, 8},
				   {9, 10, 11, 12},
				   {13, 14, 15, 16}};
   	spiralMatrix(arr);
   	return 0;
}

