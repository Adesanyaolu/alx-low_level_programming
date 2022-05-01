#include <stdio.h>

/* main - practise file
 *
 * Return 0 always
 * 
 */

void swap_int(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

int main (void)
{
    printf("Hello World\n");
    /* int a = 56;
    int b = 73;
     printf("Value of a :%i\n", a);
    printf("Value of b :%i\n", b);
    int *m = &a;
    int *n = &b;
    printf("Address of a :%p\n", m);
    printf("Address of b :%p\n", n);
    *m = b;
    *n = a; 
    printf("Value of a after swap :%i\n", a);
    printf("Value of b after swap :%i\n", b);
    */
    int a;
    int b;

    a = 98;
    b = 42;
    printf("a=%d, b=%d\n", a, b);
    swap_int(&a, &b);
    printf("a=%d, b=%d\n", a, b);
    return (0);

}