#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>


bool iguales(int a, int b) { 
    bool equals = a == b;
    return equals ? 1 : 0;
    }
int main(int argc, char *argv[]) {
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);
    printf("Los numeros son %d\n", iguales(a, b)); 
    return 0;
}
