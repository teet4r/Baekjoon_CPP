#include "matrix.h"

namespace matrix {
	matrix::matrix(int row_size, int column_size, int value = 0) {
		this->row_size = row_size;
		this->colum_size = column_size;
		elements.assign(row_size, vector<int>(column_size, value));
	}

	matrix matrix::operator+(matrix &other) {
		matrix new_matrix(this->row_size, this->colum_size);

		for (int i = 0; i < this->row_size; ++i)
			for (int j = 0; j < this->colum_size; ++j)
				new_matrix.elements[i][j] += this->elements[i][j] + other.elements[i][j];

		return new_matrix;
	}

	matrix matrix::operator*(matrix &other) {
		matrix new_matrix(this->row_size, other.colum_size);

		for (int i = 0; i < this->row_size; ++i)
			for (int j = 0; j < other.colum_size; ++j)
				for (int k = 0; k < this->colum_size; ++k)
					new_matrix.elements[i][j] += this->elements[i][k] * other.elements[k][j];

		return new_matrix;
	}

	istream &operator>>(istream &istream, matrix &matrix) {
		for (int i = 0; i < matrix.row_size; ++i)
			for (int j = 0; j < matrix.colum_size; ++j)
				istream >> matrix.elements[i][j];

		return istream;
	}

	ostream &operator<<(ostream &ostream, const matrix &matrix) {
		for (int i = 0; i < matrix.row_size; ++i) {
			for (int j = 0; j < matrix.colum_size; ++j)
				ostream << matrix.elements[i][j] << ' ';
			ostream << nl;
		}

		return ostream;
	}
}