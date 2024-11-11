#include <stdio.h>

int main() {
    int n = 5;  // Half size of the diamond
    int i, j;

    // Loop for each row
    for (i = 0; i < 2 * n - 1; i++) {
        for (j = 0; j < 2 * n - 1; j++) {
            if (i <= n - 1) {  // Upper half including the middle row
                if (j < n - i || j >= n + i) {
                    printf("* ");
                } else {
                    printf("  ");
                }
            } else {  // Lower half
                if (j < i - n + 2 || j >= 3 * n - i - 3) {
                    printf("* ");
                } else {
                    printf("  ");
                }
            }
        }
        printf("\n");
    }

    return 0;
}
