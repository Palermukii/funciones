#include <stdio.h>
#include <stdbool.h>

bool equals(int a, int b){
return a == b ? true : false;
}
int main(void){
    printf("%d\n", equals(1, 1));
}