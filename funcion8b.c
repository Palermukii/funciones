#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int dadito() {
    srand(time(NULL));
    int dado = rand() % 8 + 1;
    return dado > 5 ? 6 : dado;
}
int main(){
    printf("El dado es %d\n", dadito());
    return 0;
}