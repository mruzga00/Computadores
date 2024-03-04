#include <stdio.h>
int calcula_divisores(int num);
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    while(num <= 0){
        printf("Please enter a positive number\n");
        printf("Enter a number: ");
        scanf("%d", &num);
    }
    int div = calcula_divisores(num);
    printf("The number of divisors of %d is %d\n", num, div);
    return 0;
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