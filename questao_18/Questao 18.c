#include <stdio.h>
#include <stdlib.h>

void multiplicacaoMatricial(int **x, int **y, int **z, int nlx, int ncx, int ncy){
    int i, j, k, soma = 0;
    for(i=0; i<nlx; i++){
        for(j=0; j<ncy; j++){
            for(k=0; k<ncx; k++){
                soma = soma + x[i][k] * y[k][j];
            }
            z[i][j] = soma;
            soma = 0;
        }        
    }      
}

int main() {
    int i, j, **x, **y, **z, nlx, ncx, ncy;    
    printf("Digite o numero de linhas da matriz 1\n");
    scanf("%i", &nlx);
    printf("Digite o numero de colunas da matriz 1\n");
    scanf("%i", &ncx);
    printf("Digite o numero de colunas da matriz 2\n");
    scanf("%i", &ncy);
    x = malloc(nlx * sizeof(int*));
    for(i=0; i<nlx; i++){
        x[i] = malloc(ncx * sizeof(int));
    }
    y = malloc(ncx * sizeof(int*));
    for(i=0; i<ncx; i++){
        y[i] = malloc(ncy * sizeof(int));
    }
    z = malloc(nlx * sizeof(int*));
    for(i=0; i<nlx; i++){
        z[i] = malloc(ncy * sizeof(int));
    }
    printf("Digite os elementos da matriz 1\n");
    for(i=0; i<nlx; i++){
        for(j=0; j<ncx; j++){
            scanf("%i", &x[i][j]);
        }
    }
    printf("Digite os elementos da matriz 2\n");
    for(i=0; i<ncx; i++){
        for(j=0; j<ncy; j++){
            scanf("%i", &y[i][j]);
        }
    }
    printf("Matriz 1:\n");
    for(i=0; i<nlx; i++){
        for(j=0; j<ncx; j++){
            printf("%i ", x[i][j]);
        }
        printf("\n");
    }
    printf("Matriz 2:\n");
    for(i=0; i<ncx; i++){
        for(j=0; j<ncy; j++){
            printf("%i ", y[i][j]);
        }
        printf("\n");
    }
    multiplicacaoMatricial(x, y, z, nlx, ncx, ncy);
    printf("Matriz 3:\n");
    for(i=0; i<nlx; i++){
        for(j=0; j<ncy; j++){
            printf("%i ", z[i][j]);
        }
        printf("\n");
    }

    return 0;
}