#include "util.h"
#include "logic.h"

void init_random(int matrix[N][N],int a,int b) {
	

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			matrix[i][j] = rand() % (b-a+1)+a;
		}
	}
}

string convert(int matrix[N][N]) {
	string s = " ";

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			s += to_string(matrix[i][j]) + " ";
		}
		s += "\n";
	}

	return s;
}