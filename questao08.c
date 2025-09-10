#include <stdio.h>
#include <stdlib.h>

int main(){

    int pulo[] = {1, 2, 3, 4, 5}; // array de inteiros 
    int *p; // ponteiro do tipo inteiro
    p = pulo;  // p recebe o endereço do primeiro elemennto do array pulo

    printf("%d\n", p); // o * acessa o valor que está no endereço de memoria apontado por p, que é o primeiro elemento do array pulo
    printf("%d\n", *(p+2)); // em (p+2) o endereço de memoria de p é acessado e incrementado de 2, o tipo do inteiro é de 4 bytes, então o endereço de p é incrementado em 8 bytes 
    // depois desse alocamento de memoria, o * acessa o valor que está nesse endereço de memoria
    printf("%d\n", *(p+4)); // // em (p+4) o endereço de memoria de p é acessado e incrementado de 2, o tipo do inteiro é de 4 bytes, então o endereço de p é incrementado em 16 bytes 
    // depois desse alocamento de memoria, o * acessa o valor que está nesse endereço de memoria 
    printf("%d\n", p+2); // em p+2 o endereço de memoria de p é acessado e incrementado de 2, o tipo do inteiro é de 4 bytes, então o endereço de p é incrementado em 8 bytes
    printf("%d\n", p+4); // em p+4 o endereço de memoria de p é acessado e incrementado de 4, o tipo do inteiro é de 4 bytes, então o endereço de p é incrementado em 16 bytes

    return 0;

    

}