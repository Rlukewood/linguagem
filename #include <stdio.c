#include <stdio.h>
int main () {
    char letra;
    printf ("digite uma letra:");
    scanf ("%s", &letra);
    switch(letra) {
        case'a':
        printf("domingo");
        
        break;
        case'b':

        printf("segunda");
        
        break;
        case'c':

        printf("terça");
        
        break;
        case'd':
        printf("quarta");
        
        break;
        case'f':

        printf("quinta");
        
        break;
        case'g':

        printf("sexta");
        
        break;
        case'h':

        printf("sabado");
        break;
        case'i':
        defalt:
        printf("opção invalida");
    }
}