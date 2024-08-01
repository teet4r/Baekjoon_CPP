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
	/// �����佺�׳׽��� ü�� ����Ͽ� �Ҽ����� container�� �߰��մϴ�.
	/// O(N(log(logN)))�� ����˴ϴ�.
	/// </summary>
	/// <param name="max_integer">���Ϸ��� �Ҽ��� ����</param>
	/// <param name="container">���� �Ҽ����� ���� �����̳�</param>
	void get_primes(int max_integer, vector<int> &container);



	/// <summary>
	/// n�� ������� container�� �߰��մϴ�.
	/// O(N^(0.5))�� ����˴ϴ�.
	/// </summary>
	/// <param name="n">���Ϸ��� ����� ����</param>
	/// <param name="container">���� ������� ���� �����̳�</param>
	void get_divisors(int n, vector<int> &container);



	/// <summary>
	/// �ŵ����� �����Դϴ�.
	/// O(n)�� ����˴ϴ�.
	/// </summary>
	/// <param name="base">��</param>
	/// <param name="exp">����</param>
	/// <returns>�ŵ����� ���� ��ȯ�մϴ�.</returns>
	int power(int base, int exp);



	/// <summary>
	/// ����-������ �̿��� ���� �ŵ����� �����Դϴ�.
	/// O(logN)�� ����˴ϴ�.
	/// </summary>
	/// <param name="base">��</param>
	/// <param name="exp">����</param>
	/// <returns>�ŵ����� ���� ��ȯ�մϴ�.</returns>
	int fast_power(int base, int exp);
	long long fast_power(long long base, int exp);



	/// <summary>
	/// ����-������ �̿��� ���� �ŵ����� �����Դϴ�.
	/// O(logN)�� ����˴ϴ�.
	/// </summary>
	/// <param name="base">��</param>
	/// <param name="exp">����</param>
	/// <param name="modulo">���� ���� ����</param>
	/// <returns>���� ������ ����� �ŵ����� ���� ��ȯ�մϴ�.</returns>
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
	/// n�� �Ҽ����� �ƴ��� �����մϴ�.
	/// </summary>
	/// <param name="n">�Ҽ����� ������ ��</param>
	/// <returns>n�� �Ҽ���� true, �ƴ϶�� false�� ��ȯ�մϴ�.</returns>
	bool is_prime(int n);



	/// <summary>
	/// ���������� ��
	/// </summary>
	/// <param name="n">���� ����</param>
	/// <param name="a">����</param>
	/// <param name="d">����</param>
	/// <returns>���������� ���� ��ȯ�մϴ�.</returns>
	int arithmetical_sequence_sum(int n, int a, int d);



	/// <summary>
	/// ���������� ��
	/// </summary>
	/// <param name="n">���� ����</param>
	/// <param name="a">����</param>
	/// <param name="l">������ ��</param>
	/// <param name="_">�Լ� ������</param>
	/// <returns>���������� ���� ��ȯ�մϴ�.</returns>
	int arithmetical_sequence_sum(int n, int a, int l, int _);
}