/* 2.19 Escreva um programa em C que receba três números inteiros diferentes digitados no teclado 
e imprima a soma, a média, o produto, o menor e o maior desses números. Use a instrução if 
somente na forma ensinada neste capítulo. A tela de diálogo deve aparecer como se segue: 
Entre com três inteiros diferentes: 13 27 14
A soma e 54
A media e 18
O produto e 4914
O menor e 13
O maior e 27 */

#include <stdio.h>

main(){
    int x, y, z, maior, menor;

    printf("Entre com tres inteiros diferentes: ");
    scanf("%d%d%d", &x, &y, &z);
    
    printf("A soma eh %d\n", x + y +z);
    printf("A media eh %d\n", (x + y + z) / 3);
    printf("O produto eh %d\n", x * y * z);
    
    if (x < y)
        menor = x;
    if (y < menor)
        menor = y;
    if(z < menor)
        menor = z;
    printf("O menor eh %d\n", menor);

    if (x > y)
        maior = x;
    if (y > maior)
        maior = y;
    if (z > maior)
        maior = z;
    printf("O maior eh %d\n", maior);

    return 0;
}