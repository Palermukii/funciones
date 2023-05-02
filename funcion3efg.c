#include <stdio.h>
int suma(int x,int y, int z) {
    return 2 * x + 3 * y + 4 * z;
}
int sumacuadrado(int x) {
    return 9 * (x*x) + 3 * x - 12;
}
int division(int n){
    return (n * (n + 1)) / 2;
}
int main(int argc, char *argv[]){
    printf("La sumacuadrado es %d\n", sumacuadrado(2));
    printf("La suma es %d\n", suma(2, 4, 6));
    printf("La division es %d\n", division(4));
    return 0;
}