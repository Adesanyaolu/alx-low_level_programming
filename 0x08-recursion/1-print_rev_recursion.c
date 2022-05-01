#include <stdio.h>

/*
 * main - testing
 *
 * return - 0
 */

void _print_rev_recursion(char *s){
   if (*s == s[0]){
       putchar('\0');
       
    } else {
        putchar(s[4]);
        _print_rev_recursion(s+1);
        
    };
}

void _puts_recursion(char *s){
    if (*s == '\0'){
        putchar('\n');
    } else {
        putchar(*s);
        _puts_recursion(s+1);
    };
}
int main (){
   _print_rev_recursion("Colton Walker");
    printf("Hello World\n");
     _puts_recursion("Puts with recursion");
    return (0);
}