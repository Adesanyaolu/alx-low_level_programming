#include <stdio.h>
#include <stdlib.h>

/*
 * main - a program that print its name
 * followed by a new line
 * return 0
 */

#include <stdio.h>

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
