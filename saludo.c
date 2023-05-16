#include <stdio.h>
#include <stdlib.h>

void saludo(char name) {
    printf("Hola %s\n", name);
}
int main(int argc, char *argv[]) {
    char name = atoi(argv[1]);
    saludo(name);
}
