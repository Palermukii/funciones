#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

void dado() {
    srand(time(NULL));
    int dadouno = rand() % 6 + 1;
    int dadodos = rand() % 6 + 1;
    printf("El dado uno es %d\n", dadouno);
    printf("El dado dos es %d\n", dadodos);
    printf("La suma de los dados es %d\n", dadouno + dadodos);
}
int main() {
    dado();
    return 0;
}