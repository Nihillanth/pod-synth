#include "data_process.h"

#include <math.h>

#include "../data_libs/data_stat.h"

int normalization(double *data, int n) {
    int result = 1;
    double max_value = max(data, n);
    double min_value = min(data, n);
    double size = max_value - min_value;

    if (fabs(size) > EPS) {
        for (int i = 0; i < n; i++) {
            data[i] = data[i] / size - min_value / size;
        }
    } else {
        result = 0;
    }

    return result;
}

void swap(int *i, int *j) {
    int temp = *i;
    *i = *j;
    *j = temp;
}

void sort(int *data, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (data[j] > data[j + 1]) {
                swap(data + j, data + j + 1);
            }
        }
    }
}
