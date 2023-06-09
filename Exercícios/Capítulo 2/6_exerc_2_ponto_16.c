/* 2.16 Escreva um programa que peça ao usuário para digitar dois números, obtenha-os do usuário e 
imprima a soma, o produto, a diferença, o quociente e o resto da divisão dos dois números. */

#include<stdio.h>

main(){
    int x, y;

    printf("Entre com dois numeros inteiros: \n");
    scanf("%d%d", &x, &y);

    printf("soma: %d\nproduto: %d\nquociente: %d\nresto da divisao: %d", x + y, x * y, x / y, x % y);

    return 0;
}