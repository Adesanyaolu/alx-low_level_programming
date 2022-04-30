#include <unistd.h>
#include "main.h"

/**
 * main - print recursion
 *
 * Return: Always 0.
 */


void _puts_recursion(char *s){
    if (*s == '\0'){
        _putchar('\n');
    } else {
        _putchar(*s);
        _puts_recursion(s+1);
    };
}

