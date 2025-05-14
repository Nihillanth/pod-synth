#include <stdio.h>
#include "hello.h"

void say_hello(char *name);

void ask_name(char *name) {
    scanf("%s", name);
}

int main() {
    char name[256];
    ask_name(name);
    say_hello(name);
    return 0;
}