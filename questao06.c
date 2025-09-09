#include <stdio.h>

void funcao(char **p){
    char *t;
    t = (p += sizeof(int))[-1];
    printf("%s\n", t);
}

int main(){
    
    char *a[] = {"ab", "cd", "ef", "gh", "ij", "kl"};
    funcao(a);
    return 0; 
}
