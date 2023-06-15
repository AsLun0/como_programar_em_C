/* 2.24 Escreva um programa que leia um número inteiro e então determine e imprima se ele é par 
ou ímpar. (Dica: Use o operador resto. Um número par é múltiplo de dois. Qualquer múltiplo 
de dois deixa resto zero ao ser dividido por 2.) */

#include <stdio.h>
#include <math.h>

main(){
    int num;

    printf("Entre com um numero inteiro: ");
    scanf("%d", &num);

    if (num % 2 == 0)
        printf("O numero %d eh PAR", num);
    else
        printf("O numero %d eh IMPAR", num);
    
    return 0;
}