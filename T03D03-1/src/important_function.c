#include <math.h>
#include <stdio.h>

int main() {
    double x;
    int items_read = scanf("%lf", &x);

    if (items_read != 1) {
        printf("n/a");
        return 0;
    }

    double result = sin(x) * exp(-x);

    double rounded = (double) ((int) (result * 10 + (result >= 0 ? 0.5 : -0.5))) / 10;

    printf("%.1f", rounded);

    return 0;
}