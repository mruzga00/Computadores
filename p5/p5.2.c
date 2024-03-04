#include <stdio.h>

int calculo_si_es_primo(int num);
int calcula_divisores(int num);

int main(){
    int num;
    do{
        if(num < 0){
            printf("El número introducido es negativo, por favor introduce un número positivo: \n");
        }
        printf("Introduce un número positivo: \n");
        scanf("%d", &num);

    }while(num < 0);

    int count = calculo_si_es_primo(num);
    if(count == 1){
        printf("El número %d es primo\n", num); 
    }else{
        printf("El número %d no es primo\n", num);
    }
}

int calculo_si_es_primo(int num){
    int final = 0;
    int count = calcula_divisores(num);
    if(count == 2){
        final = 1;
    }
    return final;

}

int calcula_divisores(int num){
    int i, count = 0;
    for(i = 1; i <= num; i++){
        if(num % i == 0){
            count++;
        }
    }
    return count;
}