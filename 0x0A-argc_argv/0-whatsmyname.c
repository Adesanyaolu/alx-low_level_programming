#include <stdio.h>


/**
 * main - a program that print its name
 * @argc: size of argv array
 * @argv: pointer to arrays contained in argc
 *
 * Return 0(success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
