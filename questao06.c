#include <stdio.h>

void funcao(char **p){ // *p aponta para o primeiro elemento do array de ponteiros e o segundo * é para acessar o valor apontado que pode ser alterado
    char *t; // ponteiro para char
    t = (p += sizeof(int))[-1]; // t faz uma operação em que p é incrementado em sizeof(int) que é 4 bytes, ou seja, o tamanho da array
    //  de ponteiros, e depois acessa o elemento anterior a esse novo endereço, que é o segundo elemento do array original 
    // e tudo isso é atribuído a t
    printf("%s\n", t); // imprime o valor apontado por t
}

int main(){

    char *a[] = {"ab", "cd", "ef", "gh", "ij", "kl"}; // array de ponteiros para char
    funcao(a); // chama a função passando o array de ponteiros a
    // a saida vai ser "gh" porque t que está atribuito na função faz a operação de receber p que é o primeiro valor do array
    // incrementa em 4 bytes, ou seja ele vai pra cd, ef, gh, ij mas logo em seguida o [-1] faz ele voltar um elemento, ou seja
    // ele volta para gh e é isso que é impresso
    return 0; 
}
