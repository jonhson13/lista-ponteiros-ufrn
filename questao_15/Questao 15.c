#include <stdio.h>
#include <stdlib.h>

int compare (const void * a, const void * b){
    return (*(int*)a - *(int*)b);
}

void ordenar (float x[], int n ,int (*f) (const void * a, const void b)){
    qsort(x, n, sizeof(float), f);
}

int main() {
    int n, i;
    float *x;
    int (*p) (int, int) = compare;
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
    ordenar(x, n, p);
    printf("\nVetor Ordenado:\n");
    for(i=0; i<n; i++){
        printf("%.2f ", x[i]);
    }
    free(x);


    return 0;
}