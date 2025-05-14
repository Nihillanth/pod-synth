#include <stdio.h>

int max(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int a, b, result;
    int items_read = scanf("%d %d", &a, &b);

    if (items_read != 2) {
        printf("n/a");
        return 0;
    }

    result = max(a, b);
    printf("%d", result);

    return 0;
}
