#include "logic.h"

void test01() {
	int matrix[][N]{
		{1,2,3,4,5},
		{2,3,4,5,6},
		{3,4,5,6,7},
		{4,5,6,7,8},
		{5,6,7,8,9},
	};

	string expected = "";

	string actual = is_exist_zero_element(matrix);
	string msg = expected == actual ? "PASS" : "FAIL";

	cout << msg << endl;
	cout << "-------------------------------------------";
}

void test02() {
	int matrix[][N]{
		{1,2,3,4,5},
		{2,3,0,5,6},
		{3,4,5,6,7},
		{4,5,6,0,8},
		{5,6,7,8,9},
	};

	string expected = "2 4 ";

	string actual = is_exist_zero_element(matrix);
	string msg = expected == actual ? "PASS" : "FAIL";

	cout << msg << endl;
	cout << "-------------------------------------------";
}

void test03() {
	int matrix[][N]{
		{1,0,3,4,5},
		{2,3,0,5,6},
		{3,4,0,6,7},
		{4,5,6,0,8},
		{0,6,7,8,9},
	};

	string expected = "1 2 3 4 5 ";

	string actual = is_exist_zero_element(matrix);
	string msg = expected == actual ? "PASS" : "FAIL";

	cout << msg << endl;
	cout << "-------------------------------------------";
}