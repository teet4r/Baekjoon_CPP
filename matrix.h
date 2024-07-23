#pragma once

#include <iostream>
#include <vector>

using namespace std;

#ifndef nl
#define nl '\n'
#endif

namespace matrix {
	class matrix {
	private:
		int row_size;
		int colum_size;
		vector<vector<int>> elements;
	public:
		matrix(int row_size, int column_size, int value);
		matrix operator+(matrix &other);
		matrix operator*(matrix &other);
	private:
		friend istream &operator>>(istream &istream, matrix &matrix);
		friend ostream &operator<<(ostream &ostream, const matrix &matrix);
	};
}