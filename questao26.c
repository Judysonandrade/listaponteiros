#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, b;
    int x, y, z;
    
    scanf("%d %d", &a, &b);

    x = a; // vou colocar a = 10 // 00001010
    y = b; // vou colocar b = 1 // 00000001
    z = a + b; // z = 11 // 00001011
 

    while(a){

    x = x | b; // porta logica OR // faz a comparação bit a bit entre x e b, se um dos dois bits for 1 o resultado é 1
    // ou seja se x = 00000001 e b = 00001011 x | b = 00001011 que é 11 em decimal

    // 2 interação x = 00001011 | 00001010 = 00001011 que é 11 em decimal

    // 3 interação x = 00001011 | 00000101 = 00001111 que é 15 em decimal

    // 4 interação x = 00001111 | 00000010 = 00001111 que é 15 em decimal

    printf("x: %d\n", x);

    y = y ^ a; // porta logica XOR // faaz a comparação bit a bit entre y e a, se os dois bits forem diferentes o resultado é 1
    // ou seja se y = 00000001 e a = 00001010 y ^ a = 00001011 que é 11 em decimal

    // 2 interação y = 00001011 ^ 00000101 = 00001110 que é 14 em decimal

    // 3 interação y = 00001110 ^ 00000010 = 00001100 que é 12 em decimal

    // 4 interação y = 00001100 ^ 00000001 = 00001101 que é 13 em decimal
    printf("y: %d\n", y);
    z = z & (a+b); // ele primeiro faz a soma de a + b que é 11, e depois faz a comparação bit a bit entre z e (a+b), se os dois bits forem 1 o resultado é 1
    // ou seja se z = 00001011 e (a+b) = 00001011 z & (a+b) = 00001011
    // então z = 11 que é 11 em decimal

    // 2 interação z = 00001011 mas a é 5 e b é 2 então a + b = 7
    // então z = 00001011 & 00000111 = 00000011 que é 3 em decimal

    // 3 interação z = 00000011 mas a é 2 e b é 4 então a + b = 6
    // então z = 00000011 & 00000110 = 00000010 que é 2 em decimal

    // 4 interação z = 00000010 mas a é 1 e b é 8 então a + b = 9
    // então z = 00000010 & 00001001 = 00000000 que é 0 em decimal

    printf("z: %d\n", z);
    a = a >> 1; // ele desloca um bit de da variavel a para a direita 
    // então a que é 00001010 vira 00000101 que é 5 em decimal

    // 2 interação a = 00000101 vira 00000010 que é 2 em decimal

    // 3 interação a = 00000010 vira 00000001 que é 1 em decimal

    // 4 interação a = 00000001 vira 00000000 que é 0 em decimal
    printf("a: %d\n", a); 
    b = b << 1; // ele desloca um bit da variavel b para a esquerda
    // então b que é 00000001 vira 00000010 que é 2 em decimal
    // 2 interação b = 00000010 vira 00000100 que é 4 em decimal 
    // 3 interação b = 00000100 vira 00001000 que é 8 em decimal
    // 4 interação b = 00001000 vira 00010000 que é 16 em decimal
    printf("b: %d\n", b); 
    
    // devido ao while a vai ser dividido por 2 a cada iteração
    // enquanto o while for verdadeiro ou seja enquanto a for diferente de 0
    // o while vai continuar executando ele so para quando a chegar em 0
    printf("-----\n");

    }

    printf("\n");
    
    printf("%d %d %d\n", x, y, z); // 15 13 0
    return 0;


}