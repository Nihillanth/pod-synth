#include <stdio.h>
#include <stdlib.h>

int main() {
    double *data;
    int n;

    scanf("%d", &n);
    data = malloc(n * sizeof(double));

    printf("LOAD DATA...\n");
    input(data, n);

    printf("RAW DATA:\n\t");
    output(data, n);

    printf("\nNORMALIZED DATA:\n\t");
    normalization(data, n);
    output(data, n);
    
    printf("\nSORTED NORMALIZED DATA:\n\t");
    sort(data, n);
    output(data, n);
    
    printf("\nFINAL DECISION:\n\t");
    make_decision(data, n);
    output(data, n);

    return 0;
}
