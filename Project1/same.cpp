#include "util.h"
bool result(int matrix[N][N]) {
	
	
	bool res = true;
	for (int i = 0; i < N; i++) {
		
		int first = matrix[i][0];
		for (int j = 1; j < N; j++) {


			if (matrix[i][j] >= first || matrix[i][j] <= first) {
				res = false;
				break;
			}
			first = matrix[i][j];
			if (res == true) {
				return true;
			}
		}
	}

	return res;
}