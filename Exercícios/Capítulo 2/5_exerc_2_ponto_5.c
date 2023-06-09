/* 2.4 Escreva uma instrução (ou comentário) para realizar cada um dos pedidos seguintes:
a) Crie um comentário declarando que um programa calculará o produto de três números 
inteiros.
b) Declare as variáveis x, y, z e resultado como sendo do tipo int.
c) Peça ao usuário para digitar três números inteiros.
d) Leia os três números inteiros fornecidos através do teclado e armazene-os nas variáveis x, 
y e z.
e) Calcule o produto dos três números inteiros contidos nas variáveis x, y e z e atribua o 
resultado à variável resultado.
f) Imprima "O produto e" seguido do valor da variável resultado */

#include <stdio.h>

main(){
    int x, y, z, resultado; // questão B

    printf("Entre com tres numeros inteiros: "); // questão C
    scanf("%d%d%d",&x, &y, &z); // questão D

    resultado = x + y + z; //questão E

    printf("O produto eh %d\n", resultado);

    return 0;
}