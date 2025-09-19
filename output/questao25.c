#include <stdio.h>
#include <stdlib.h>

/*
int main(){

    // A)
    void *s; // declaração de um ponteiro genérico
    s = malloc(50); // alocação de 50 bytes de memória
    free(s); // libera a memória alocada


    return 0;
} 
*/

/*
int f(){
    // B)
    float *a; // declaração de um ponteiro para float 
    return 0; // retorna 0

    // não apresenta vazamento de memória, pois a função não faz nenhuma alocação dinâmica de memória
    // e o ponteiro 'a' é apenas uma variável local que não afeta a memória fora do escopo da função.

}
*/

int *f(int n){
    int num = malloc(sizeof(int) * n); // alocação dinâmica de memória para um array de n inteiros
    return num; // retorna o ponteiro para o array alocado

    // a alocação dinâmica de memória dentro da função
    // o malloc recebe o tamanho em bytes que queremos alocar
    // e retorna um ponteiro para o início do bloco de memória alocado
}

int main(){

    // C)
    int *num; // declaração de um ponteiro para inteiro
    num = f(5); // chama a função f para alocar um array de 5 inteiros
    free(num); // libera a memória alocada para o array e isso faz com que o memory leak seja evitado
    // pq a memória alocada dentro da função f é liberada no main, onde o ponteiro num recebe o endereço retornado por f
    // e assim a memória pode ser reutilizada pelo sistema
    return 0;
}
/*
void f(int n){

    // D)
    char *m = malloc(10);
    char *n = malloc(10);

    free(m);

    m = n;

    free(m);
    free(n);
    // nesse caso o memory leak ocorre pq a memória alocada para o ponteiro n não é liberada
    // e porque ela não é liberada, pq o ponteiro m que antes apontava para a memória alocada por malloc(10)
    // agora aponta para a memória alocada por n, e assim o endereço original de m é perdido
    // e a memória alocada por malloc(10) para m não pode mais ser acessada ou liberada 
}
*/
