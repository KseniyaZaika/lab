#pragma once
#define N 100
#define M 100

namespace tatata
{

	void read(int& n, int& m, int matrix[N][M]);

	bool task(int n, int m, int matrix[N][M]);

	int maxInMatrix(int n, int m, int matrix[N][M]);

	void write(int n, int m, int matrix[N][M]);
}
