/*
Ex6 : Tìm giá trị lớn nhất trên cột cho trước của một ma trận cấp MxN.

*/

#include <iostream>
using namespace std;
#define M 4
#define N 4

template<class T> T maxElementInCol(T arr[M][N], size_t col) { // Column
	T max = arr[0][col]; // giữ nguyên cột, tăng hàng => gán giả sử hàng đầu tiên arr[0][col].
	for (size_t i = 1; i < M; i++)
	{
		if (max < arr[i][col]) 
		{
			max = arr[i][col];
		}
	}

	return max;
}

int main() {
	int arr[M][N] = { //  4 hàng, 4 cột => ma trận 4x4.
		{1, 2, 3, 4}, // 
		{6, 6, 7, 8},
		{6, 4, 1, 3},
		{6, 0, 5, 4}
	};

	cout << "Gia tri lon nhat tren cot chi so 1: "
		<< maxElementInCol<int>(arr, 1) << endl;

	return 0;
}