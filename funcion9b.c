#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int dado() {
    return rand() % 6 + 1;
}

int dadodos() {
    return rand() % 6 + 1;
}
int suma(){
    srand(time(NULL));
 return dado() + dadodos();
}


int main() {
    srand(time(NULL));
    printf("El dado uno es de %d\n", dado());
    printf("El dado dos es de %d\n", dadodos());
    printf("La suma de los dados es de %d\n", suma());
    return 0;
}
