#include <stdio.h>

int main() {
    int i, j;

    for(i = 1; i <= 4; i++) {
        if (i % 2 != 0) {
            printf("    ");
        }
        for(j = 1; j <= 5; j++) {
            printf("%d  ", j);
        }
        printf("\n");
    }

    return 0;
}

