

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


// Função de comparação para inteiros
void crescente(int *v, int n){ // função que ordena o vetor em ordem crescente
    int  aux;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(v[i]>v[j]){
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
    }
    
}

int comparar_int(const void *a, const void *b) {
    int ia = *(const int*)a;  // Converte o ponteiro 'a' para o tipo correto e desreferencia
    int ib = *(const int*)b;  // Converte o ponteiro 'b' da mesma forma
    return (ia > ib) - (ia < ib);  // Retorna 1, 0 ou -1 para determinar a ordem
    
    // ou seja essa função compara dois elementos do meu vetor.
}



int main() {
    int n; // número de elementos do vetor  
    int *v; // ponteiro para o vetor de inteiros
    clock_t t; // variável para medir o tempo de execução

    // Solicita ao usuário o número de elementos
    printf("Digite o numero de elementos do vetor: ");
    scanf("%d", &n);

    // Aloca memória para o vetor de inteiros
    v = (int*) malloc(n * sizeof(int));

    // Leitura dos elementos do vetor
    for (int i = 0; i < n; i++) {
        printf("Digite o %d elemento: ", i + 1);
        scanf("%d", &v[i]);
    }
    
    t = clock(); // marca o tempo inicial 
    crescente(v, n); // chamada da função crescente para ordenar o vetor
    t = clock() - t; // tempo final;
    printf("Tempo de execucao Usando a função ordem crescente: %lf\n", ((double)t)/((CLOCKS_PER_SEC/1000)));

    printf("Vetor em ordem crescente: \n");
    for(int i=0;i<n;i++){
        printf("%d ", v[i]);
    } // print do vetor em ordem crescente

    printf("\n");
    
    // Chama a função qsort() para ordenar o vetor
    t = clock(); // tempo inicial
    qsort(v, n, sizeof(int), comparar_int);  // Passa o ponteiro da função de comparação
    t = clock() - t; // tempo final 
    printf("Tempo de execucao pelo Qsort: %lf\n", ((double)t)/((CLOCKS_PER_SEC/1000)));
    
    // mais rápida e eficiente pois é implementada com algoritmos rapido,implementada com algoritmos otimizados.
    // Impressão do vetor ordenado
    printf("Vetor em ordem crescente: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");

    // Libera a memória alocada
    free(v);

    return 0;
}
