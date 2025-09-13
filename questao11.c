#include <stdio.h>

/*/
struct teste{
    int x = 3; // não pode ser inicializado  nada no struct
    char nome[] = "Jose"; // não pode ser inicializado no struct

};

int main(){
    struct teste *s; // s é um ponteiro, mas NÃO foi inicializado
    printf("%d", s->x); // acessando memória através de ponteiro não inicializado
    printf("%s", s->nome); // acessando memória através de ponteiro não inicializado
}

*/

struct teste{
    int x;
    char nome[20];

};

int main(){
    struct teste s; // Declaração de um tipo de struct S

    s.x = 3; // atribuir um valor a x

    strcpy(s.nome, "Jose"); // atribuir Jose a nome

    printf("%d\n", s.x);

    printf("%s\n", s.nome);


    return 0;
}