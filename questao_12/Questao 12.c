#include <stdio.h>
/*
O ponteiro para função recebe o endereço de memória de uma função,
fazendo com que a função seja executada ao chamar o ponteiro.
*/

int soma(int a, int b){
    return a + b;
}

int main(){
    int (*p) (int, int) = soma;
    int x, y;
    printf("Digite 2 numeros inteiros\n");
    scanf("%i", &x);
    scanf("%i", &y);
    printf("Soma: %d", p(x, y));

    return 0;
}