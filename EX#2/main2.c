/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    char a = 5 ;
    printf("\t%d\n", a^1);
    // 0000 0101 ^ 0000 0001 XOR = 0000 0100
    printf("\t%d\n", ~a);
    // 0000 0101 ~ NOT =111 1010
    printf("\t%d\n", a>>1);
    // 0000 0101 >> 1 = 0000 0010
    printf("\t%d\n", a<<1);
    // 0000 0101 << 1 = 0000 1010
    return 0;
}
