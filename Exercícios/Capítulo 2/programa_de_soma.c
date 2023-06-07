/* 2.3 Outro Programa Simples em C: Somar Dois Números Inteiros */

/* Programa de soma */

#include <stdio.h>

main(){
    int inteiro1, inteiro2, soma; // declaração das variáveis
    
    printf("Entre com o primeiro inteiro\n"); // prompt
    scanf("%d", &inteiro1); // lê um inteiro
    
    printf("Entre com o segundo inteiro\n"); // prompt
    scanf("%d", &inteiro2); // lê um inteiro

    soma = inteiro1 + inteiro2; // atribui soma

    printf("A soma é %d\n",soma); // imprime soma

    return 0; // indica que o programa foi bem-sucedido 
}