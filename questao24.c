#include <stdio.h>
#include <stdlib.h>


void multiplica_matrizes(int **a, int **b, int **c, int linhaA , int colunaA, int colunaC ){ // a função tem como objetivo multiplicar duas matrizes A e B
// e armazenar o resultado na matriz C, em que **a, **b e **c são ponteiros para ponteiros que representam as matrizes A, B e C respectivamente.   
// em que no laço for, ta percorrendo as linhas de A e colunas de C
// e inicializando c[i][j] com 0, depois tem um laço for interno que percorre as colunas de A (ou linhas de B) 
// e realiza a multiplicação e soma dos elementos correspondentes
    for(int i = 0; i < linhaA; i++){
        for(int j = 0; j < colunaC; j++){ 
            c[i][j] = 0;
            for(int k = 0; k < colunaA; k++){ 
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

int main(){
    int **a, **b, **c; // declaração de ponteiros para ponteiros que vão representar as matrizes A, B e C
    int linhaA = 2; // número de linhas da matriz A
    int colunaA = 3; // número de colunas da matriz A e linhas da matriz B
    int colunaC = 4; // número de colunas da matriz C e linhas da matriz B
    
    
    a = (int**)malloc(linhaA * sizeof(int*)); // alocação dinâmica da matriz A, essa alocação funciona como um array de ponteiros
    // que cada ponteiro aponta para uma linha da matriz

    for(int i = 0; i < linhaA; i++){
        a[i] = (int*)malloc(colunaA * sizeof(int)); // alocação dinâmica de cada linha da matriz A, que cada linha é um array de inteiros
    }

    b = (int**)malloc(colunaA * sizeof(int*)); // alocação dinâmica da matriz B, que cada ponteiro aponta para uma linha da matriz
    for(int i = 0; i < colunaA; i++){ 
        b[i] = (int*)malloc(colunaC * sizeof(int)); // alocação dinâmica de cada linha da matriz B, que cada linha é um array de inteiros
    }

    
    c = (int**)malloc(linhaA * sizeof(int*)); // alocação dinâmica da matriz C, que cada ponteiro aponta para uma linha da matriz
    for(int i = 0; i < linhaA; i++){
        c[i] = (int*)malloc(colunaC * sizeof(int)); // alocação dinâmica de cada linha da matriz C, que cada linha é um array de inteiros
    }

    // Leitura da matriz A
    printf("Digite os elementos da matriz A (2x3):\n");
    for(int i = 0; i < linhaA; i++){
        for(int j = 0; j < colunaA; j++){
            scanf("%d", &a[i][j]);
        }
    }

    // Leitura da matriz B
    printf("Digite os elementos da matriz B (3x4):\n");
    for(int i = 0; i < colunaA; i++){
        for(int j = 0; j < colunaC; j++){
            scanf("%d", &b[i][j]);
        }
    }

    // Multiplicação
    multiplica_matrizes(a, b, c, linhaA, colunaA, colunaC); // chamada da função para multiplicar as matrizes A e B, e armazenar o resultado em C
    // em que a, b e c são ponteiros para ponteiros que representam as matrizes A, B e C respectivamente, e função eles acessam o endereço de memória dessas matrizes
    // e linhaA, colunaA e colunaC são os tamanhos das matrizes, e essa memoria é passada por valor, ou seja, uma cópia dos valores é passada para a função



    // Impressão da matriz C
    printf("\nMatriz resultante C (2x4):\n");
    for(int i = 0; i < linhaA; i++){
        for(int j = 0; j < colunaC; j++){
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    // Liberação da memória
    for(int i = 0; i < linhaA; i++){ // esse laço for libera cada linha da matriz A
        free(a[i]); // esse free libera a memoria alocada para cada linha da matriz A
    }
    for(int i = 0; i < colunaA; i++){ // esse laço for libera cada linha da matriz B
        free(b[i]); // esse free libera a memoria alocada para cada linha da matriz B
    }
    for(int i = 0; i < linhaA; i++){ // esse laço for libera cada linha da matriz C
        free(c[i]); // esse free libera a memoria alocada para cada linha da matriz C
    }


    free(a); // a diferente dos outros frees, esse free libera a memoria alocada para o array de ponteiros que representa a matriz A
    free(b); // esse free libera a memoria alocada para o array de ponteiros que representa a matriz B
    free(c); // esse free libera a memoria alocada para o array de ponteiros que representa a matriz C 

    return 0;
}
