#include <stdio.h>

int main() {
    int a, b;
    int items_read = scanf("%d %d", &a, &b);

    if (items_read != 2) {
        printf("n/a");
        return 0;
    }

    int sum = a + b;
    int diff = a - b;
    int prod = a * b;

    if (b == 0) {
        printf("%d %d %d n/a", sum, diff, prod);
    } else {
        int quot = a / b;
        printf("%d %d %d %d", sum, diff, prod, quot);
    }

    return 0;
}