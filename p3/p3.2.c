
#include <stdio.h>

int main(){
    int nota;
    printf("Escribe la nota numérica: ");
    scanf("%d", &nota);

    if(nota == 5 || nota == 6){
        printf("Aprobado\n");
    } else if(nota == 7 || nota == 8){
        printf("Notable\n");
    }else if( nota == 9 || nota == 10){
        printf("Sobresaliente\n");
    }else if( nota >= 0 && nota < 5){
        printf("Suspenso\n");
    }else{
        printf("ERROR, tiene que estar entre 0 y 10\n");
    }

    return 0;
}