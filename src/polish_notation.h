#ifndef POLISH_NOTATION_H
#define POLISH_NOTATION_H

#include <stdio.h>

char *infix_to_rpn(const char *exp);

double evaluate_rpn_x(const char *rpn, double x);

#endif
