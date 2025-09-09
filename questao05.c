 #include <string.h>
 #include <stdio.h>
 #include <stdlib.h>

 void funcao(char** str){
    str++;
}

 int main(){
    char *str = (void *)malloc(50*sizeof(char));
    strcpy(str, "Agostinho");
    funcao(&str);
    puts(str);
    free(str);
    return 0;
}