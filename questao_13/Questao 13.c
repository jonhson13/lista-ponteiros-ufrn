#include <stdio.h>
#include <stdlib.h>

void ordenar (float x[], int n){
    int i, j;
    float aux;
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            if(x[i] < x[j]){
                aux = x[i];
                x[i] = x[j];
                x[j] = aux;
            }
        }
    }
}

int main() {
    int n, i;
    float *x;
    printf("Digite a quantidade de elementos do vetor\n");
    scanf("%i", &n);
    x = malloc(n * sizeof(float));
    printf("Digite os elementos do vetor\n");
    for(i=0; i<n; i++){
        scanf("%f", &x[i]);
    }
    printf("Vetor:\n");
    for(i=0; i<n; i++){
        printf("%.2f ", x[i]);
    }
    ordenar(x, n);
    printf("\nVetor Ordenado:\n");
    for(i=0; i<n; i++){
        printf("%.2f ", x[i]);
    }
    free(x);

    return 0;
}