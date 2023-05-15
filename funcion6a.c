#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>

int divisible(int a, int b) {
    bool dividir = a % b == 0;
    printf("a %s por b\n", dividir ? "es divisible" : "no es divisible");

}

int main(int argc, char *argv[]) {
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);
    divisible(a, b);
    return 0;
}