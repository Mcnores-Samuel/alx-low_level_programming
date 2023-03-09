# 0x08-recursion tasks
## 3-factorial.c
* factorial - returns the factorial of the given number.
* @n: the number to perform factorial calculations on.
* Return: The factorial of a given number.
## 4-pow_recursion.c
* _pow_recursion - returns the value of x raised to the power of y.
* @x: base number.
* @y: exponent number.
* Return: the value of x raised to the power of y.
## 100-is_palindrome.c
* check_palindrome - checks whether a given string is a palindrome or not.
* @str_len: length of the string.
* @offset: the current position being compared.
* @str: pointer to the string being checked.
* Return: 1 if the string is palindrome otherwise 0.
*/
* is_palindrome -  checks whether a given string is a palindrome or not.
* @str: pointer to the string being checked.
* Return: 1 if the string is palindrome otherwise 0.
*/
## 101-wildcmp.c
* strlen_no_wilds - Returns the length of a string,
*                   ignoring wildcard characters.
* @str: The string to be measured.
*
* Return: The length.
*/
* iterate_wild - Iterates through a string located at a wildcard
*                until it points to a non-wildcard character.
* @wildstr: The string to be iterated through.
*/
* postfix_match - Checks if a string str matches the postfix of
*                 another string potentially containing wildcards.
* @str: The string to be matched.
* @postfix: The postfix.
*
* Return: If str and postfix are identical - a pointer to the null byte
*                                            located at the end of postfix.
*         Otherwise - a pointer to the first unmatched character in postfix.
*/
* wildcmp - Compares two strings, considering wildcard characters.
* @s1: The first string to be compared.
* @s2: The second string to be compared - may contain wildcards.
*
* Return: If the strings can be considered identical - 1.
*         Otherwise - 0.
*/
## 2-strlen_recursion.c
* _strlen_recursion - returns the length of the string.
* @str: a pointer to the string to calculate the length.
* Return: the length of the str.
## 1-print_rev_recursion.c
* _print_rev_recursion -  prints a string in reverse using recursion.
* @str: pointer to the string to print.
* Return: void;
## 6-is_prime_number.c
* isPrime -  checks if a given number "n" is a prime number.
* @divisor: the divisor being tested
* @n: the number being tested for primality.
* Return: 0 if n is not a prime or 1 if true.
*/
* is_prime_number - check for prime numbers
* @n: the number being tested
* Return: 1 if the n is prime or 0 if not a prime number.
*/
## 5-sqrt_recursion.c
* sqrt_recursion_helper - that takes three integer arguments: n, the number
*                         whose square root we want to find; x, the lowest
*                         possible value for the square root; and y,
*                         the highest possible value for the square root.
*                         The helper function uses a binary search algorithm
*                         to find the natural square root of n by dividing
*                         the search range in half at each step and comparing
*                         the square of the midpoint to n.
* @n: the number whose square root we want to find.
* @x: the lowest possible value for the square root.
* @y: the highest possible value for the square root.
* Return:  If the square is equal to n, the function returns the midpoint.
*         If the square is less than n, the function searches the upper half
*         of the range. If the square is greater than n, the function searches
*         the lower half of the range. If the search range becomes empty,
*         the function returns -1 to indicate that n does not have
*         a natural square root.
*/
* _sqrt_recursion - returns the natural square root of a number.
* @n: the number whose square root we want to find.
* Return: If n does not have a natural square root,
*         the function should return -1.
*/
