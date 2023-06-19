#include <stdio.h>
/**
 * main - Starting point for main
 *
 * Return: Will always return to 0
 */
int main(void)
{
	printf("Size of int is : %lu byte(s).\n", sizeof(int));
	printf("Size of char is : %lu byte(s).\n", sizeof(char));
	printf("Size of float is : %lu byte(s).\n", sizeof(float));
	printf("Size of long int is : %lu byte(s).\n", sizeof(long int));
	return (0);
}
