#include <stdio.h>
#include <stdlib.h>

/*
 * main - a program that print its name
 * followed by a new line
 * return 0
 */

int main(int argc, char *argv[])
{
	if (argc >= 1)
		printf("%s\n", argv[0]);
	return (0);
}