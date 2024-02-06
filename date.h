#pragma once

#include <iostream>

using namespace std;

#ifndef nl
#define nl '\n'
#endif

namespace date {
	class date {
	public:
		int y, m, d;
	private:
		static int day_sum_in_a_year[12];
	public:
		date();
		date(int y, int m, int d);
		bool is_leapyear();
		int get_total_days();
	private:
		friend istream &operator>>(istream &istream, date &date);
	};
}