/* 2.18 Escreva um programa em C que peça ao usuário para fornecer dois números inteiros, 
obtenha-os do usuário e imprima o maior deles seguido das palavras "e maior". Se os 
números forem iguais, imprima a mensagem "Estes números sao iguais". Use a instrução if 
somente na forma de seleção simples que você aprendeu neste capítulo. */

#include <stdio.h>

main(){
    return 0;

    int num1, num2;

    printf("Entre com dois numeros interiros: ");
    scanf("%d%d", &num1, &num2);

    if(num1 < num2)
        printf("%d eh maior\n", num1);
    
    if (num2 > num1)
        printf("%d eh maior\n");

    if (num1 == num2)
        printf("Estes numeros sao iguais\n");
    
    return 0;
}