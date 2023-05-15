#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>

void absoluted(int x) {
    int absoluto = abs(x);
    printf("El valor absoluto es %d\n", absoluto);
}
int main(int argc, char *argv[]) {
    int x = atoi(argv[1]);
    absoluted(x);
    return 0;
}