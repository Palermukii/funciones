#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int fx(int O){
return (cos(O)) * (cos(O)) + (sen(O)) * (sen(O)) ; 

}

int main(int argc, char argv[]){

int O = atoi(argv[1]); 


printf("F(O) = (cos(O)) (cos(O)) + (sen(O)) * (sen(O)) = %d\n", fx(O));

}
