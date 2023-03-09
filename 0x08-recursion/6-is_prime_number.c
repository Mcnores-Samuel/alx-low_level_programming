#include "main.h"
/**
 * isPrime -  checks if a given number "n" is a prime number.
 * @divisor: the divisor being tested
 * @n: the number being tested for primality.
 * Return: 0 if n is not a prime or 1 if true.
 */

int isPrime(int divisor, int n)
{
	if (n < 2 || !(n % divisor))
		return (0);
	else if (divisor > n / 2)
		return (1);
	else
		return (isPrime(divisor + 1, n));
}

/**
 * is_prime_number - check for prime numbers
 * @n: the number being tested
 * Return: 1 if the n is prime or 0 if not a prime number.
 */

int is_prime_number(int n)
{
	return (isPrime(2, n));
}
