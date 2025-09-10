#include <stdio.h>
#include <stdlib.h>

int main(){
    float vet[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    float *f; // ponteiro para float
    int i; // variavel de controle do loop
    f = vet; // f recebe o endereço do primeiro elemento do array vet
    printf("Contador/valot/valor/endereco/endereco+1\n"); 
    
    for(int i=0;i<=4;i++){ // loop que vai inicia em 0 e vai até 4 incrementando de 1 em 1
        printf("i = %d",i); // imprime o valor das posicoes do array 0 a 4
        printf( " vet[%d] = %.1f",i, vet[i]); // imprime os valores que estao em cada posicao do array vet que são 1.1, 2.2, 3.3, 4.4 e 5.5 
        printf( " *(f + %d) = %.1f",i, *(f+i)); // ele vai imprimir os valores do array mas como é feito essa impressão, a operação f + i 
        // em que f é o endereço de memoria do primeiro elemento do array e como i é int ele vai somando esse elemento com o tamanho do tipo float que é 4 bytes 
        // ou seja, na primeira iteração f + 0 = 1.1, na segunda f + 1 = 2.2, na terceira f + 2 = 3.3 e assim por diante mas como tem o * ele acessa
        // o valor que está nesse endereço de memoria e imprime
        printf( " &vet[%d] = %X",i, &vet[i]); // com o operador & imprime o endereço de memoria de cada elemento do array vet
        printf( " (f + %d) = %X",i, f+i); // ele imprime o endereço de memoria do ponteiro f mais o valor de i, 
        // ou seja, na primeira iteração f + 0 = endereço do primeiro elemento do array
        // na segunda iteração f + 1 = endereço do segundo elemento do array e assim por diante
        printf("\n");

    }

    return 0;
}