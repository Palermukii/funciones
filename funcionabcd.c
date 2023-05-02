#include <stdio.h>
int suma(int x,int y) {
    return x + y;
}int resta(int x,int y) {
    return x - y;
}int mult (int x,int y) {
    return x * y;
}
int div (int x,int y) {
    return x / y;
}
int main(int argc, char *argv[]){
    printf("La suma es %d\n", suma(7, 5));
    printf("La resta es %d\n", resta(7, 5));
    printf("La multiplicacion es %d\n", mult(7, 5));
    printf("La division es %d\n", div(7, 5));
    return 0;
}