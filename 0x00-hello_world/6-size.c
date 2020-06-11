#include <stdio.h>

/**
 * main - 6-Sizeof
 * Description: Print the size of multi vars
 * Return: 0
 */
int main(void)
{
	printf("Size of a char: %li byte(s)\n", sizeof(char));
	printf("Size of a int: %li byte(s)\n", sizeof(int));
	printf("Size of a long: %li byte(s)\n", sizeof(long));
	printf("Size of a long int: %li byte(s)\n", sizeof(long int));
	printf("Size of a long long: %li byte(s)\n", sizeof(long long));
	printf("Size of a float: %li byte(s)\n", sizeof(float));

	return (0);
}
