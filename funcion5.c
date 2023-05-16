#include <stdio.h>

int asciiValue(char character) {
    return character;
}

int main() {
    char input;
    printf("Ingresa un caracter: ");
    scanf("%c", &input);

    int value = asciiValue(input);
    printf("El valor ASCII de '%c' es %d\n", input, value);

    return 0;
}
