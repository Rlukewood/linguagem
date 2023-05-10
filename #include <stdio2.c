#include <stdio.h>
int main () {
    char letra;
    printf ("digite 1, 2, 3 para linux window e mec respectivamente:");
    scanf ("%s", &letra);
    switch(letra) {
        case'1':
        printf("linux");
        break;
        case'2':
        printf("windows");
        break;
        case'3':
        printf("mec");
        break;
        case'L':
        printf("FAZ O L");
    }
}