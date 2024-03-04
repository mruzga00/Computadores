#include <stdio.h>

int main(){

    int num1, num2;
    do{
            if(num1 > num2){
                printf("ERROR, el primer número no es menor que el segundo\n");
            }
            printf("Introduce el primer número: \n");
            scanf("%d", &num1);
            printf("Introduce el segundo número: \n");
            scanf("%d", &num2);
    }while(num1 > num2);

        int i;
        int cont;
        for(i = num2; i > num1; i --){
            int checkNum = i%2;
            if(checkNum == 0 && cont == 0){
                 printf("Aquí está la lista de los números pares en forma descendiente: \n");
                    cont ++;
                }
                if(checkNum == 0){
                    printf("%d, ", i);
                }
        }
        printf("\n");
        
        
    


    return 0;
}