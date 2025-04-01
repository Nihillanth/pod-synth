#include <stdio.h>
#include <stdlib.h>

#include "../data_libs/data_io.h"
#include "../data_module/data_process.h"
#include "decision.h"

int main() {
    double *data;
    int n;

    scanf("%d", &n);

    data = malloc(n * sizeof(double));

    input(data, n);
    if (make_decision(data, n))
        printf("YES");
    else
        printf("NO");

    return 0;
}
