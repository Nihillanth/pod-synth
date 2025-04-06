#include <math.h>
#include <string.h>
#include "utils.h"

int is_operator(char c) {
    return c == '+' || c == '-' || c =='*' || c == '/';
}

int precession(char op) {
    if (op == '+' || op == '-') return 1;
    if (op == '*' || op == '/') return 2;
    return 0;
}

int is_digit(char c) {
    return c >= '0' & c <= '9';
}

int is_space(char c) {
    return c == ' ';
}

int is_function(const char *str) {
    return strncmp(str, "sin", 3) == 0 ||
	   strncmp(str, "cos", 3) == 0 ||
	   strncmp(str, "sqrt", 4) == 0;
}

double evaluate_function(const char *func, double arg) {
    if (strncmp(func, "sin", 3) == 0) return sin(arg);
    if (strncmp(func, "cos", 3) == 0) return cos(arg);
    if (strncmp(func, "sqrt", 4) == 0) return sqrt(arg);
    return 0;
}
