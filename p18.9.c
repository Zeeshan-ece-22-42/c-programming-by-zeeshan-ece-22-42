#include <stdio.h>

int main() {
    int n, i, j;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        // Print the pattern for each row
        for (j = 1; j <= i; j++) {
            // To alternate between 0 and 1, we use the condition (i+j)%2
            printf("%d", (i + j) % 2);
        }
        printf("\n");
    }

    return 0;
}
