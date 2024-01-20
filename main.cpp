#include <iostream>
#include <string>

using namespace std;

#define fast_io (ios::sync_with_stdio(false), std::cin.tie(NULL), cout.tie(NULL))
#define nl '\n'

//#include "number.h"

class problem {
public:
	void solve() {
		string board;

		cin >> board;

		board.push_back('.');

		int start_X_index = 0;
		int board_size = board.size();

		for (int i = 0; i < board_size; ++i) {
			if (board[i] == '.') {
				int X_length = i - start_X_index;

				if (X_length & 1) {
					cout << -1;
					return;
				}

				int AAAA_count = X_length / 4;
				int BB_count = (X_length - AAAA_count * 4) / 2;
				string polyomino = "";
				
				for (int j = 0; j < AAAA_count; ++j) {
					polyomino += "AAAA";
				}
				for (int j = 0; j < BB_count; ++j) {
					polyomino += "BB";
				}

				board.replace(start_X_index, polyomino.size(), polyomino);

				start_X_index = i + 1;
			}
		}

		board.pop_back();

		cout << board;
	}
};

int main() {
	fast_io;

	problem problem;

	problem.solve();

	return 0;
}