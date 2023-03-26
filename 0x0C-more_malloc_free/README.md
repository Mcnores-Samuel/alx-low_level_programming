0x0C-more_malloc_free tasks
## 1-string_nconcat.c
* string_nconcat - concatenates two strings
* @s1: pointer to the first string to concatenate
* @s2: pointer to the second string
* @n: n bytes of the second string
*
* Return: pointer to the concatenated string.
*/
## 101-mul.c
* find_len - Finds the length of a string.
* @str: The string to be measured.
*
* Return: The length of the string.
*/
* create_xarray - Creates an array of chars and initializes it with
*                 the character 'x'. Adds a terminating null byte.
* @size: The size of the array to be initialized.
*
* Description: If there is insufficient space, the
*              function exits with a status of 98.
* Return: A pointer to the array.
*/
* iterate_zeroes - Iterates through a string of numbers containing
*                  leading zeroes until it hits a non-zero number.
* @str: The string of numbers to be iterate through.
*
* Return: A pointer to the next non-zero element.
*/
* get_digit - Converts a digit character to a corresponding int.
* @c: The character to be converted.
*
* Description: If c is a non-digit, the function
*              exits with a status of 98.
* Return: The converted int.
*/
* get_prod - Multiplies a string of numbers by a single digit.
* @prod: The buffer to store the result.
* @mult: The string of numbers.
* @digit: The single digit.
* @zeroes: The necessary number of leading zeroes.
*
* Description: If mult contains a non-digit, the function
*              exits with a status value of 98.
*/
*prod = 'x';
*prod = '0';
*prod = (num % 10) + '0';
*prod = (tens % 10) + '0';
* add_nums - Adds the numbers stored in two strings.
* @final_prod: The buffer storing the running final product.
* @next_prod: The next product to be added.
* @next_len: The length of next_prod.
*/
*final_prod = (num % 10) + '0';
*final_prod = (num % 10) + '0';
*final_prod = (tens % 10) + '0';
* main - Multiplies two positive numbers.
* @argv: The number of arguments passed to the program.
* @argc: An array of pointers to the arguments.
*
* Description: If the number of arguments is incorrect or one number
*              contains non-digits, the function exits with a status of 98.
* Return: Always 0.
*/
## 100-realloc.c
*_realloc - reallocates a memory block using malloc and free
*@ptr: pointer to the allocated memory
*@old_size: old memory size in bytes
*@new_size: new memory size in bytes
*Return: pointer to the newly allocated memory
*/
## 3-array_range.c
* array_range - creates an array of integers
* @min: mimimum number element of the array
* @max: maxmum number element of the array
* Return: pointer to the newly created array.
## 2-calloc.c
* _calloc - allocates memory for an array.
* @nmemb: number of memory bytes
* @size: size of elements
* Return: Pointer to the allocated memory.
