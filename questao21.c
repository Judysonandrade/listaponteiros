
#include <stdio.h>
#include <stdlib.h>

// Função de comparação para inteiros
int comparar_int(const void *a, const void *b) {
    int ia = *(const int*)a;  // converte o ponteiro 'a' para um ponteiro de inteiro e desreferencia
    // de forma que eu pego o valor que está no endereço apontado por 'a'
    int ib = *(const int*)b;  // Converte o ponteiro 'b' da mesma forma
    return (ia > ib) - (ia < ib);  // Retorna 1, 0 ou -1 para determinar a ordem
    
    // ou seja essa função compara dois elementos do meu vetor.
}

int main() {
    int n; // número de elementos do vetor
    int *v; // ponteiro para o vetor de inteiros

    // Solicita ao usuário o número de elementos
    printf("Digite o numero de elementos do vetor: ");
    scanf("%d", &n);

    // Aloca memória para o vetor de inteiros
    v = (int*) malloc(n * sizeof(int)); // aloca memória para n inteiros em que sizeof(int) é o tamanho de um inteiro na máquina
    // ou seja ele vai alocar n vezes o tamanho de um inteiro na máquina
    // e o malloc retorna um ponteiro do tipo void, ou seja um ponteiro genérico, por isso eu faço o cast para int*

    // Leitura dos elementos do vetor
    for (int i = 0; i < n; i++) {
        printf("Digite o %d elemento: ", i + 1);
        scanf("%d", &v[i]);
    }

    // Chama a função qsort() para ordenar o vetor
    qsort(v, n, sizeof(int), comparar_int);  // Passa o ponteiro da função de comparação

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
