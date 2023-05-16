#include <stdio.h>
#include <math.h>

double calcularFuncion(double theta) {
    double cos2 = pow(cos(theta), 2);
    double sin2 = pow(sin(theta), 2);
    double resultado = cos2 + sin2;
    return resultado;
}

int main() {
    double theta;
    printf("Ingrese el valor de theta en radianes: ");
    scanf("%lf", &theta);

    double resultado = calcularFuncion(theta);
    printf("El resultado de f(theta) es: %.2lf\n", resultado);

    return 0;
}
