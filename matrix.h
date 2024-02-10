#pragma once

#include <iostream>
#include <vector>

using namespace std;

#ifndef nl
#define nl '\n'
#endif

class matrix {
private:
	size_t row_size;
	size_t colum_size;
	vector<vector<int>> elements;
public:
	matrix(size_t row_size, size_t column_size, int value);
	matrix operator+(matrix &other);
	matrix operator*(matrix &other);
private:
	friend istream &operator>>(istream &istream, matrix &matrix);
	friend ostream &operator<<(ostream &ostream, const matrix &matrix);
};