#include "main.h"

/// @brief 
/// @param n 
/// @param i 
/// @return 
int actual_prime(int n, int i);

/// @brief 
/// @param n 
/// @return 
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/// @brief 
/// @param n 
/// @param i 
/// @return 
int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
