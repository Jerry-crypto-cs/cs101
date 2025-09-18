/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    char a =5 ;
    printf("\t%d\n", a&1);
    // 0101 & 0001 = 0001
    printf("\t%d\n", a&2);
    // 0101 & 0010 = 0000 
    printf("\t%d\n", a|2);
    // 0101 | 0010 = 0111
    return 0;
}
