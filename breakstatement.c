#include <stdio.h>

int main() {
    for (int i = 1; i <= 10; i++) {
        if (i == 3) {
            break;  // Exits the loop when i is 3
        }
        printf("Loop iteration: %d\n", i);
    }

    return 0;
}
