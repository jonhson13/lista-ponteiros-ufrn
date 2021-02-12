#include <stdio.h>
#include <stdlib.h>

void somaDeVetores(int x[], int y[], int z[], int n){
    int i;
    for(i=0; i<n; i++){
        z[i] = x[i] + y[i];
    }
    printf("Soma dos vetores:\n");
    for(i=0; i<n; i++){
        printf("%i ", z[i]);
    }
}

int main() {
    int n, i, *x, *y, *z;
    printf("Digite o tamanho dos vetores\n");
    scanf("%i", &n);
    x = malloc(n * sizeof(int));
    y = malloc(n * sizeof(int));
    z = malloc(n * sizeof(int));
    printf("Digite os elementos do vetor 1\n");
    for(i=0; i<n; i++){
        scanf("%i", &x[i]);
    }
    printf("Digite os elementos do vetor 2\n");
    for(i=0; i<n; i++){
        scanf("%i", &y[i]);
    }
    somaDeVetores(x, y, z, n);
    free(z);
    free(y);
    free(x);

    return 0;
}