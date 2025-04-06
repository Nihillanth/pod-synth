#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "polish_notation.h"

#define WIDTH 60
#define HEIGHT 25
#define X_MIN 0
#define X_MAX (4 * M_PI)
#define Y_MIN -1
#define Y_MAX 1

void draw_graph(const char *exp) {
    char field[HEIGHT][WIDTH];
    double x_step = (X_MAX - X_MIN) / (WIDTH - 1);
    double y_step = (Y_MAX - Y_MIN) / (HEIGHT - 1);

    for (int i = 0; i < HEIGHT; i++) {
       for (int k = 0; k < WIDTH; k++) {
           field[i][k] = '.';
       }
    }

    char *rpn = infix_to_rpn(exp);
    if (!rpn) {
        fprintf(stderr, "Error exp.\n");
	return;
    }

    for (int j = 0; j < WIDTH; j++) {
        double x = X_MIN + j * x_step;
	double y = evaluate_rpn_x(rpn, x);

	int row = round((Y_MAX - y) / y_step);
	if (row >= 0 && row < HEIGHT) {
	    field[row][j] = '*';
	}
    }

    free(rpn);

     for (int i = 0; i < HEIGHT; i++) {
       for (int k = 0; k < WIDTH; k++) {
           putchar(field[i][k]);
       }
       putchar('\n');
    }
}

int main() {
     char exp[256];

     printf("Input exp >>> ");
     if (fgets(exp, sizeof(exp), stdin) == NULL) {
         fprintf(stderr, "Error input.\n");
	 return 1;
     }

     draw_graph(exp);

     return  0;
}

