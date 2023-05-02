#include <stdio.h>

void saludar(char *name) {
    printf("Hola, %s!\n", name);
}
int main(int argc, char *argv[]) {
    saludar("Papu");
    return 0;
}