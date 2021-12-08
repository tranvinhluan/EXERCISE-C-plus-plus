/*
Ex8 : Tìm giá trị nhỏ nhất trên hàng chứa nó và lớn nhất trên cột chứa nó trong ma
trận cấp MxN.
*/

#include <iostream>
using namespace std;
#define M 4
#define N 4

template<class T> T maxElementInCol(T arr[M][N], size_t col) {
	T max = arr[0][col];
	for (size_t i = 1; i < M; i++)
	{
		if (max < arr[i][col])
		{
			max = arr[i][col];
		}
	}

	return max;
}

template<class T> T minElementInRow(T arr[M][N], size_t row) {
	T min = arr[row][0];
	for (size_t i = 0; i < N; i++)
	{
		if (arr[row][i] < min) {
			min = arr[row][i];
		}
	}
	return min;
}

template<class T> T tim(T arr[M][N], int &m, int &n, size_t x) {
	for (size_t i = 0; i < M; i++) {
		for (size_t j = 0; j < N; j++) {
			if (arr[i][j] == x)
			{
				m = i;
				n = j;
				return 0;
			}
		}
	}
}



int main() {
	int arr[M][N] = { // M[1]N[2]
		{1, 2, 3, 4},
		{6, 6, 7, 8},
		{6, 4, 1, 3},
		{6, 0, 5, 4}
	};

	int x, m, n;
	cout << "Nhap gia tri x can tim MinRow, MaxCol:	";
	cin >> x;
	
	tim<int>(arr, m, n, x);

	cout << "Gia tri nho nhat chua " << x << " tren hang " << m
		<< " la: " << minElementInRow<int>(arr, m) << endl;

	cout << "Gia tri lon nhat chua " << x << " tren cot " << n
		<< " la: " << maxElementInCol<int>(arr, n) << endl;

	return 0;
}