#include <stdio.h>

// 注意：這個函式在技術上應該回傳一個 int，
// 但在所有非中止條件的路徑上都沒有回傳值。
// 雖然在某些編譯器下能執行，但這不是一個好的寫法。
// 為了教學目的，我們先維持原樣，稍後再討論如何改進。
int recursion(int n) {
    if (n == 0) return 0; // 中止條件 (Base Case)
    printf("%d\n", n);
    recursion(n - 1);    // 遞迴呼叫 (Recursive Step)
}

int main() {
    recursion(5);
    return 0;
}
