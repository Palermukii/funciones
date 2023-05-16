#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>


int dado() {
     int probabilidad[8] = {6,6,6,1,2,3,4,5};
    int dadito = rand() % 7;
    return probabilidad[dadito];
}
int main(){
    srand(time(NULL));
    printf("El dado es %d\n", dado());
    return 0;
}