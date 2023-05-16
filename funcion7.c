#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// A
int randomA(){
    return rand();
}
// B
int randomB(){
    return rand() % 100;
}
// C
int randomC(){
    return rand() % 11;
}
// D
int randomD(){
    return rand() - 1;
}
// E
int randomE(int a, int b){
    int rango = b - a;
    return rand() % rango + a;
}
// F
int randomF(int a, int b){
    int rango = b - a;
    return rand() % (rango + 1) + a;
}
// MAIN
int main(int argc, char *argv[]) {
    srand(time(NULL));
    // Variables
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);
    //Llamada a funciones
    int A1 = randomA();
    int B2 = randomB();
    int C3 = randomC();
    int D4 = randomD();
    int E5 = randomE(a, b);
    int F6 = randomF(a,b);
    // Printf
    printf("El numero random es %d\n", A1);
    printf("El numero random es %d\n", B2);
    printf("El numero random es %d\n", C3);
    printf("El numero random es %d\n", D4);
    printf("El numero random es %d\n", E5);
    printf("El numero random es %d\n", F6);
}