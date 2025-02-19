#include "util.h"

string is_exist_zero_element(int matrix[N][N]) {
	string res = "";
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (matrix[i][j] == 0) {
				res += to_string(i + 1)+" ";
				break;
			}
		}
	}
	return res;
}