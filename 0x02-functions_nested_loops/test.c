#include <stdio.h>

int main() {
    for (int i = 1; i <= 9; i++) {
        for (int j = 0; j <= 9; j++) {
            printf("%d", i * j);

            if (j != 9 || i != 9) {
                printf(", "); // Print comma and space only if it's not the last number
            }
        }

    putchar('\n'); // Print a newline character after the sequence
    }

    putchar('\n'); // Print a newline character after the sequence

    return 0;
}
