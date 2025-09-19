#include <stdio.h>

char *a[] =  {"AGOSTINHO", "MEDEIROS", "BRITO", "JUNIOR"};
char **b[] = {a+3, a+2, a+1, a};
char ***c = b; // c é um ponteiro para ponteiro para ponteiro para char, como assim, ***c ele acessa o valor que está em b, que é um vetor de ponteiros para ponteiros para char

// a é um vetor de ponteiros para char
// b é um vetor de ponteiros para ponteiros para char
// em a + 3, ele vai pegar o primeiro elemento do vetor a que é agostinho e vai andar mais 3 posições ou seja que é JUNIOR
// em a + 2, ele vai pegar o primeiro elemento do vetor a que é agostinho e vai andar mais 2 posições ou seja que é BRITO
// em a + 1, ele vai pegar o primeiro elemento do vetor a que é agostinho e vai andar mais 1 posições ou seja que é MEDEIROS
// em a, ele vai pegar o primeiro elemento do vetor a que é agostinho e vai andar 0 posições ou seja que é AGOSTINHO

// então o char **b[] é um vetor que contém os endereços dos elementos do vetor a, mas em ordem inversa
// logo ele vai ficar assim: 
// b[0] = a + 3 -> JUNIOR
// b[1] = a + 2 -> BRITO
// b[2] = a + 1 -> MEDEIROS
// b[3] = a     -> AGOSTINHO


int main(){
    // Nesse print abaixo o que ele vai fazer é o seguinte: **++c começando de tras pra frente em ++c ele vai encrementar o ponteiro c que
    // ou seja é a mesma coisa que c = c + 1, então ele vai acessar o primeiro de b que é b[0] e vai encrementar mais uma vez o ponteiro c
    // ou seja c = c + 1, vai ser BRITO, e o ** vai acessar o valor que está em b[1] que é BRITO
    // então o primeiro printf vai imprimir BRITO
    printf("%s ", **++c);   

    // Nesse segundo print ele vai fazer o seguinte: *--*++c+3
    // o que ele vai fazer primeiro ele vai pegar o ponteiro c que está apontado para b[1] que é BRITO, pq ele salvou c na linha anterior
    // e agora ele vai pegar o valor que está em b[1] que é a + 2, e vai encrementar mais uma vez o ponteiro c
    // ou seja c = c + 1, então agora c está apontando para b [2] que é MEDEIROS e logo em seguida ele vai decrementar o ponteiro que está em b[2] que em a é a + 1
    // ou seja ele vai fazer a + 1 - 1, então ele vai acessar o valor que está em a + 0 que é AGOSTINHO
    // e logo em seguida ele vai deslocar C+3 vai pular os 3 primeiros caracteres de AGOSTINHO e vai imprimir o que sobrou que é STINHO
    printf("%s ", *--*++c+3);

    // Nesse terceiro print ele vai fazer o seguinte: *c[-2]+3
    // ele vai pegar o ponteiro c que está apontado para b[2] que é MEDEIROS, pq ele salvou c na linha anterior
    // e o c[-2] ele vai voltar 2 posições no vetor b, ou seja b[0] que é JUNIOR
    // e logo em seguida ele vai pegar o valor que está em b[0] que é a + 3, e vai deslocar +3, ou seja vai pular os 3 primeiros caracteres de JUNIOR
    // e vai imprimir o que sobrou que é IOR
    printf("%s ", *c[-2]+3);

    // Nesse quarto print ele vai fazer o seguinte: c[-1][-1]+1
    // ele vai pegar o ponteiro de b[0] que é JUNIOR, pq ele salvou c na linha anterior
    // e o c[-1] ele vai voltar 1 posição no vetor b, ou seja b[1] que é BRITO
    // e o c[-1][-1] ele vai pegar o valor que está em b[1] que é a + 2, e vai voltar 1 posição, ou seja a + 1 que é MEDEIROS
    // e logo em seguida ele vai deslocar +1, ou seja vai pular o 1 primeiro caractere de MEDEIROS
    // e vai imprimir o que sobrou que é EDEIROS
    printf("%s\n", c[-1][-1]+1);
    return 0;
}
