#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	printf("Size of a char: %li byte($)\n", sizeof(char));
	printf("Size of an int: %li byte($)\n", sizeof(int));
	printf("Size of a long int: %li byte($)\n", sizeof(long int));
	printf("Size of a long long int: %li byte($)\n", sizeof(long long int));
	printf("Size of a float: %li byte($)\n", sizeof(float));
	return (0);
	
}	
