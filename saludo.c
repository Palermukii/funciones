#include <stdio.h>
#include <stdlib.h>

void saludo(char *nombre) {
    printf("Hola %s\n", nombre);
}
int main(int argc, char *argv[]){
    char *nombre = argv[1];
    saludo(nombre);
}
