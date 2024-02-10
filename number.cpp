#include "number.h"

namespace number {
	void get_primes(int max_integer, vector<int> &container) {
		if (max_integer < 2) {
			return;
		}

		vector<bool> primes(max_integer + 1, true);
		int sqrt_n = sqrt(max_integer);

		for (int i = 2; i <= sqrt_n; ++i) {
			if (primes[i]) {
				for (int j = i * i; j <= max_integer; j += i) {
					primes[j] = false;
				}
			}
		}

		for (int i = 2; i <= max_integer; ++i) {
			if (primes[i]) {
				container.push_back(i);
			}
		}
	}

	void get_divisors(int n, vector<int> &container) {
		if (n < 1) {
			return;
		}

		int sqrt_n = sqrt(n);

		for (int i = 1; i <= sqrt_n; ++i) {
			if (!(n % i)) {
				container.push_back(i);

				int other_divisor = n / i;

				if (i != other_divisor) {
					container.push_back(other_divisor);
				}
			}
		}
	}

	double get_power(long long base, long long exponent, long long modulo) {
		long long result = 1;
		bool is_fraction = exponent < 0;

		if (exponent < 0) {
			exponent *= -1;
		}

		base %= modulo;
		while (exponent) {
			if (exponent & 1) {
				result = (result * base) % modulo;
			}
			base = (base * base) % modulo;
			exponent >>= 1;
		}

		if (is_fraction) {
			return 1 / (double)result;
		}

		return (double)result;
	}

	bool miller_rabin_primality_test(long long n, long long a) {
		if (n < 2 || a < 2) {
			return false;
		}
		if (!(a % n)) {
			return true;
		}

		long long k = n - 1;

		while (1) {
			long long temp = get_power(a, k, n);

			if (temp == n - 1) {
				return true;
			}
			if (k & 1) {
				return (temp == 1 || temp == n - 1);
			}

			k >>= 1;
		}
	}

	bool is_maybe_prime(int n) {
		for (int i = 0; i < 3; ++i) {
			if (!miller_rabin_primality_test(n, base[i])) {
				return false;
			}
		}

		return true;
	}

	bool is_prime(int n) {
		if (n < 2) {
			return false;
		}

		int sqrt_n = sqrt(n);

		for (int i = 2; i <= sqrt_n; ++i) {
			if (!(n % i)) {
				return false;
			}
		}

		return true;
	}
}