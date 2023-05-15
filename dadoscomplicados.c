#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int dado() {
    srand(time(NULL));
    return rand() % 6 + 1;
}
int dadodos() {
    srand(time(NULL));
    return rand() % 6 + 1;

}
int suma(){
 return dado() + dadodos();
}


int main() {
    printf("El dado uno es de %d\n", dado());
    printf("El dado dos es de %d\n", dadodos());
    printf("La suma de los dados es de %d\n", suma());
    return 0;
}
