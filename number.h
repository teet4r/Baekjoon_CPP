#pragma once

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

#ifndef nl
#define nl '\n'
#endif

namespace number {
	/// <summary>
	/// 에라토스테네스의 체를 사용하여 소수들을 container에 추가합니다.
	/// O(N(log(logN)))에 수행됩니다.
	/// </summary>
	/// <param name="max_integer">구하려는 소수의 범위</param>
	/// <param name="container">구한 소수들을 담을 컨테이너</param>
	void get_primes(int max_integer, vector<int> &container);



	/// <summary>
	/// n의 약수들을 container에 추가합니다.
	/// O(N^(0.5))에 수행됩니다.
	/// </summary>
	/// <param name="n">구하려는 약수의 범위</param>
	/// <param name="container">구한 약수들을 담을 컨테이너</param>
	void get_divisors(int n, vector<int> &container);



	/// <summary>
	/// 거듭제곱 연산입니다.
	/// O(n)에 수행됩니다.
	/// </summary>
	/// <param name="base">밑</param>
	/// <param name="exp">지수</param>
	/// <returns>거듭제곱 값을 반환합니다.</returns>
	int power(int base, int exp);



	/// <summary>
	/// 분할-정복을 이용한 빠른 거듭제곱 연산입니다.
	/// O(logN)에 수행됩니다.
	/// </summary>
	/// <param name="base">밑</param>
	/// <param name="exp">지수</param>
	/// <returns>거듭제곱 값을 반환합니다.</returns>
	int fast_power(int base, int exp);
	long long fast_power(long long base, int exp);



	/// <summary>
	/// 분할-정복을 이용한 빠른 거듭제곱 연산입니다.
	/// O(logN)에 수행됩니다.
	/// </summary>
	/// <param name="base">밑</param>
	/// <param name="exp">지수</param>
	/// <param name="modulo">모듈로 연산 지원</param>
	/// <returns>모듈로 연산이 적용된 거듭제곱 값을 반환합니다.</returns>
	int fast_power(int base, int exp, int modulo);
	long long fast_power(long long base, int exp, int modulo);



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

	/// <summary>
	/// n이 소수인지 아닌지 판정합니다.
	/// </summary>
	/// <param name="n">소수인지 판정할 수</param>
	/// <returns>n이 소수라면 true, 아니라면 false를 반환합니다.</returns>
	bool is_prime(int n);



	/// <summary>
	/// 등차수열의 합
	/// </summary>
	/// <param name="n">항의 개수</param>
	/// <param name="a">초항</param>
	/// <param name="d">공차</param>
	/// <returns>등차수열의 합을 반환합니다.</returns>
	int arithmetical_sequence_sum(int n, int a, int d);



	/// <summary>
	/// 등차수열의 합
	/// </summary>
	/// <param name="n">항의 개수</param>
	/// <param name="a">초항</param>
	/// <param name="l">마지막 항</param>
	/// <param name="_">함수 구별자</param>
	/// <returns>등차수열의 합을 반환합니다.</returns>
	int arithmetical_sequence_sum(int n, int a, int l, int _);
}