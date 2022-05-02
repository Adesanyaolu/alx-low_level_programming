#include <stdio.h>

/**
 * main - derefencing pointers
 *
 * Return: Always 0.
 */

unsigned int sumNum (unsigned int n){
    if (n == 0){
        return 0;
    }
    return (n % 10 + (sumNum(n / 10)));
}

int print (int nb){
    nb ++;
    if (nb < 10){
        print (nb);
    }
    
}


unsigned int main(void)
{
    unsigned int n;
 printf ("%d \n", sumNum(451));  

 printf ("%d \n", print(4));
}

