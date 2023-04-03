0x0F-function_pointers Tasks
## 0-print_name.c
* print_name - prints a name.
* @name: the name to print.
* @f: pointer to the function to print name.
* Return: void.
## 3-main.c
* main - takes commandline arguments and pass the to
* a pointer function and print the result.
* @argc: argument count.
* @argv: array of arguments
* Return: 0 on success or 98 otherwise.
## 3-op_functions.c
* op_add - adds two integers
* @a: integer
* @b: integer
* Return: the sum of a and b.
*/
* op_sub - subtructs two integers
* @a: integer
* @b: integer
* Return: the difference between a and b.
*/
* op_mul - multiplies two integers
* @a: integer
* @b: integer
* Return: the product of a and b.
*/
* op_div - division of two integers
* @a: integer
* @b: integer
* Return: the division of a and b.
*/
* op_mod - calculats the remainder.
* @a: integer
* @b: integer
* Return: remainder after division of a and b.
*/
## 1-array_iterator.c
* array_iterator - executes a function given as a
*                parameter on each element of an array.
* @array: pointer to an array to iterate.
* @size: size of array.
* @action: pointer to the function to execute array elements.
* Return: void.
## 3-get_op_func.c
*get_op_func - selects the operation to perform
*@s: operation to perform
*
*Return: pointer to the operation function
*/
## 100-main_opcodes.c
* main - Prints the opcodes of itself.
* @argc: The number of arguments supplied to the program.
* @argv: An array of pointers to the arguments.
*
* Return: Always 0.
