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
		size_t row_size;
		size_t colum_size;
		vector<vector<int>> elements;
	public:
		matrix(size_t row_size, size_t column_size, int value = 0);

		friend istream &operator>>(istream &istream, matrix &matrix);
		friend ostream &operator<<(ostream &ostream, const matrix &matrix);

		matrix operator*(matrix &other);
	};
}