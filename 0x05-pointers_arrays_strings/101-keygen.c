#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates random valid passwords for the
 *        program 101-crackme.
 *
 * Return: 0 on success.
 */

/**
 * The program defines an array of
 * characters password with 84 elements
 * an integer variable index initialized to 0,
 * and an integer variable sum initialized to 0.
 * The srand function seeds the random number generator with the current time,
 * so that each time the program is run,
 * the random numbers generated will be different.
 * The program enters a loop where it generates random characters for
 * the password array until the sum of their ASCII values is greater
 * than or equal to 2772.
 * The loop generates a random integer between 33
 * and 126 (inclusive) using rand() % 94 + 33,
 * adds it to the password array at the current index,
 * and increments the index and sum variables.
 * Once the sum of the ASCII values in password
 * is greater than or equal to 2772,
 * the program terminates the loop and sets the last element of password
 * to the null character \0.
 * If the sum of the ASCII values in password is not exactly 2772,
 * the program calculates the difference between the sum and 2772 and
 * divides it by 2 to obtain two half-differences.
 * If the difference between the sum and 2772 is an odd number,
 * one of the half-differences is incremented
 * to make the total difference even.
 * The program then subtracts the first half-difference from the ASCII
 * code of the first character in password that is greater than or equal
 * to 33 + the first half-difference.
 * The program then subtracts the second half-difference from the ASCII
 * code of the first character in password that is greater than or
 * equal to 33 + the second half-difference.
 * Finally, the program prints the password to the console using printf.
 * In summary, this program generates random passwords that meet specific
 * requirements for the 101-crackme program. The program ensures that the
 * sum of the ASCII values in the password is equal to 2772,
 * and adjusts the password to meet this requirement if necessary.
 *
 */

int main(void)
{
	char password[84];
	int index = 0, sum = 0, diff_half1, diff_half2;

	srand(time(0));

	while (sum < 2772)
	{
		password[index] = 33 + rand() % 94;
		sum += password[index++];
	}

	password[index] = '\0';

	if (sum != 2772)
	{
		diff_half1 = (sum - 2772) / 2;
		diff_half2 = (sum - 2772) / 2;
		if ((sum - 2772) % 2 != 0)
			diff_half1++;

		for (index = 0; password[index]; index++)
		{
			if (password[index] >= (33 + diff_half1))
			{
				password[index] -= diff_half1;
				break;
			}
		}
		for (index = 0; password[index]; index++)
		{
			if (password[index] >= (33 + diff_half2))
			{
				password[index] -= diff_half2;
				break;
			}
		}
	}

	printf("%s", password);

	return (0);
}
