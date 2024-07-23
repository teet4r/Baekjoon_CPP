#include "date.h"

namespace date {
	int date::day_sum_in_a_year[12] = { 0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334 };

	date::date() {
		y = m = d = 1;
	}

	date::date(int y, int m, int d) {
		this->y = y;
		this->m = m;
		this->d = d;
	}

	bool date::is_leapyear() {
		if (!(y % 400))
			return true;
		if (!(y % 100))
			return false;
		return !(y % 4);
	}

	int date::get_total_days() {
		int days = (y - 1) * 365 + day_sum_in_a_year[m - 1] + d + (y - 1) / 4 - (y - 1) / 100 + (y - 1) / 400;

		if (is_leapyear() && m >= 3)
			++days;

		return days;
	}

	istream &operator>>(istream &istream, date &date) {
		istream >> date.y >> date.m >> date.d;

		return istream;
	}
}