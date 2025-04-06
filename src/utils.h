#ifndef UTILS_H
#define UTILS_H

int is_operator(char c);

int precedence(char op);

int is_digit(char c);

int is_space(char c);

int is_function(const char *str);

double evaluate_function(const char *func, double arg);

#endif
