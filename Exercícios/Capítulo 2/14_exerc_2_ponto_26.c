/* 2.26 Escreva um programa que leia dois inteiros e então determine e imprima se o primeiro é 
múltiplo do segundo. (Dica: Use o operador resto.) */

#include <stdio.h>
#include <math.h>

main(){
    int num1, num2;
    
    printf("Entre com dois numeros inteiros: ");
    scanf("%d%d", &num1, &num2);
    
    if (num1 % num2 == 0)
        printf("O numero %d EH multiplo do numero %d", num1, num2);
    else
        printf("O numero %d NAO eh multiplo do numero %d", num1, num2);

    return 0;
}