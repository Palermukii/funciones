#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
int divisible(int r, int b) {
    bool dividir = r == b;
    printf("r es %d\n", r);
    printf("r %s que b\n", dividir ? "es igual" : "no es igual");

}
int main(int argc, char *argv[]) {
    srand(time(NULL));
    int r = rand() % 37;
    int b = atoi(argv[1]);
    divisible(r, b);
    return 0;
}
