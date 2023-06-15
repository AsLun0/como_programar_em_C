/* 2.23 Escreva um programa que leia cinco números inteiros e então determine e imprima o maior e 
o menor inteiro do grupo. Use somente as técnicas de programação ensinadas neste capítulo. */

#include <stdio.h>

main(){
    int  a, b, c, d, e, maior, menor;

    printf("Entre com tres inteiros diferentes: ");
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);

   if (a > b)
        maior = a;
    if (b > maior)
        maior = b;
    if(c > maior)
        maior = c;
    if(d > maior)
        maior = d;
    if(e > maior)
        maior = e;   
    
    if (a < b)
        menor = a;
    if (b < menor)
        menor = b;
    if(c < menor)
        menor = c;
    if(d < menor)
        menor = d;
    if(e < menor)
        menor = e;    

    printf("O menor eh %d\nO menor eh %d\n", maior, menor);
    return 0;
}