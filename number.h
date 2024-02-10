#pragma once

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

#ifndef nl
#define nl '\n'
#endif

namespace number {
	/*
	* using Sieve of Eratosthenes, O(N(log(logN)))
	*/
	void get_primes(int max_integer, vector<int> &container);

	/*
	* O(N^(0.5))
	*/
	void get_divisors(int n, vector<int> &container);

	/*
	* using Divide-and-Conquer, O(logN)
	*/
	double get_power(long long base, long long exponent, long long modulo);

	const int base[3] = { 2, 7, 61 };
	/*
	* if passed the test, return true(maybe it's a prime), or false
	* O((logN)^3)
	*/
	bool miller_rabin_primality_test(long long n, long long a);

	/*
	* using Miller - Rabin primality test
	* O(K(logN)^3), K is iteration count of a
	*/
	bool is_maybe_prime(int n);

	/*
	* O(N^(0.5))
	*/
	bool is_prime(int n);
}