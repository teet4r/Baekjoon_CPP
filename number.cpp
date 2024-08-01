#include "number.h"

namespace number {
	void get_primes(int max_integer, vector<int> &container) {
		if (max_integer < 2)
			return;

		vector<bool> primes(max_integer + 1, true);
		int sqrt_n = sqrt(max_integer);

		for (int i = 2; i <= sqrt_n; ++i)
			if (primes[i])
				for (int j = i * i; j <= max_integer; j += i)
					primes[j] = false;

		for (int i = 2; i <= max_integer; ++i)
			if (primes[i])
				container.push_back(i);
	}

	void get_divisors(int n, vector<int> &container) {
		if (n < 1)
			return;

		int sqrt_n = sqrt(n);

		for (int i = 1; i <= sqrt_n; ++i)
			if (!(n % i)) {
				container.push_back(i);
				container.push_back(n / i);
			}

		if (sqrt_n * sqrt_n == n)
			container.pop_back();
	}

	int power(int base, int exp) {
		int r = 1;

		while (exp--)
			r *= base;

		return r;
	}

	int fast_power(int base, int exp) {
		int r = 1;

		while (exp) {
			if (exp & 1)
				r *= base;
			exp >>= 1;
			base *= base;
		}

		return r;
	}

	long long fast_power(long long base, int exp) {
		long long r = 1;

		while (exp) {
			if (exp & 1)
				r *= base;
			exp >>= 1;
			base *= base;
		}

		return r;
	}

	int fast_power(int base, int exp, int modulo) {
		int r = 1;

		while (exp) {
			if (exp & 1)
				r *= base % modulo;
			exp >>= 1;
			base *= base % modulo;
		}

		return r;
	}

	long long fast_power(long long base, int exp, int modulo) {
		long long r = 1;

		while (exp) {
			if (exp & 1)
				r *= base % modulo;
			exp >>= 1;
			base *= base % modulo;
		}

		return r;
	}

	bool miller_rabin_primality_test(long long n, long long a) {
		if (n < 2 || a < 2)
			return false;
		if (!(a % n))
			return true;

		long long k = n - 1;

		while (1) {
			long long temp = fast_power(a, k, n);

			if (temp == n - 1)
				return true;
			if (k & 1)
				return (temp == 1 || temp == n - 1);

			k >>= 1;
		}
	}

	bool is_maybe_prime(int n) {
		for (int i = 0; i < 3; ++i)
			if (!miller_rabin_primality_test(n, base[i]))
				return false;

		return true;
	}

	bool is_prime(int n) {
		if (n < 2)
			return false;

		int sqrt_n = sqrt(n);

		for (int i = 2; i <= sqrt_n; ++i)
			if (!(n % i))
				return false;

		return true;
	}

	int arithmetical_sequence_sum(int n, int a, int d) {
		return (n * ((a << 1) + (n - 1) * d)) >> 1;
	}

	int arithmetical_sequence_sum(int n, int a, int l, int _) {
		return (n * (a + l)) >> 1;
	}
}