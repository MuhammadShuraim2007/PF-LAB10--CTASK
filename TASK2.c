#include <stdio.h>

int main() {
    int i, j, k;
    int n;

    printf("Enter the row: ");
    scanf("%d", &n);

    // First half (upper diamond)
    for (i = 0; i < n; i++) {
        for (j = i; j < n - 1; j++) {
            printf(" ");
        }
        for (k = 0; k < i+1; k++) {
            printf("* ");
        }
        printf("\n");
    }

     //Second half (inverted diamond)
    for (i = n - 1; i >= 0; i--) {
        for (j = n - 1; j > i; j--) {
            printf(" ");
        }
        for (k = 0; k < i + 1; k++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
