
#include <stdio.h>

int main(){

    int num;
    
    printf("Introduce un número: ");
    scanf("%d", &num);

    if(num == 3){
        printf("Has introducido un 3\n");
    }else{
        printf("No has introducido un 3 sino un%d\n");
    }

    printf("Fin del algoritmo\n");

    return 0;
}

