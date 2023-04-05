#include "main.h"

/// @brief 
/// @param n 
/// @param i 
/// @return 
int actual_sqrt_recursion(int n, int i);

/// @brief 
/// @param n 
/// @return 
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/// @brief 
/// @param n 
/// @param i 
/// @return 
int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}
