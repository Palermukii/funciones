#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>


bool iguales(int a, int b) { 
    bool equals = a == b;
    printf("Los numeros son %s\n", equals ? "iguales" : "diferentes"); 
    }

int main(int argc, char *argv[]) {
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);
    iguales(a, b);
    return 0;
}
