#include <stdio.h>

int factorial(int n) {
    if (n == 1) return 1; // 中止條件 (Base Case)
    return n * factorial(n - 1); // 遞迴呼叫 (Recursive Step)
}

int main() {
    int n = 5;
    int m = factorial(n);
    printf("factorial %d = %d\n", n, m);
    return 0;
}
