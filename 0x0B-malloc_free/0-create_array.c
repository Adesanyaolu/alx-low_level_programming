#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char.
 * @size: the character to print
 * @c: the character to print
 * Return: pointer to array or null
 * 
 */
char *create_array(unsigned int size, char c);
char *create_array(unsigned int size, char c)
{
    char *q;
    unsigned int i;

    if (size == 0)
    {
        return (NULL);
    }
    q = malloc(sizeof (char) * size);

    if (q == NULL)
    {
        return (NULL);
    }
    else
    {
        for (i = 0; i < size; i++)
        {
            q[i] = c;
        }
    }
    return q;
}
