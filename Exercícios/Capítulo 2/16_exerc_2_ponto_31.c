/* Usando apenas as técnicas aprendidas neste capítulo, escreva um programa que calcule o 
quadrado e o cubo dos números de 0 a 10 e use tabulações para imprimir a seguinte tabela de 
valores: 
    numero          quadrado            cubo
    0               0                   0
    1               1                   1
    2               4                   8
    3               9                   27
    4               16                  64
    5               25                  125
    6               36                  216
    7               49                  343
    8               64                  512
    9               81                  729
    10              100                 1000
    */

#include <stdio.h>
#include <math.h>

main(){
    int num0 = 0, num1 = 1, num2 = 2, num3 = 3, num4 = 4, num5 = 5,
    num6 = 6, num7 = 7, num8 = 8, num9 = 9, num10 = 10;

    printf("numero  quadrado  cubo\n");
    printf("%d\t%d\t  %d\n", num0, num0 * num0, num0 * num0 * num0);
    printf("%d\t%d\t  %d\n", num1, num1 * num1, num1 * num1 * num1);
    printf("%d\t%d\t  %d\n", num2, num2 * num2, num2 * num2 * num2);
    printf("%d\t%d\t  %d\n", num3, num3 * num3, num3 * num3 * num3);
    printf("%d\t%d\t  %d\n", num4, num4 * num4, num4 * num4 * num4);
    printf("%d\t%d\t  %d\n", num5, num5 * num5, num5 * num5 * num5);
    printf("%d\t%d\t  %d\n", num6, num6 * num6, num6 * num6 * num6);
    printf("%d\t%d\t  %d\n", num7, num7 * num7, num7 * num7 * num7);
    printf("%d\t%d\t  %d\n", num8, num8 * num8, num8 * num8 * num8);
    printf("%d\t%d\t  %d\n", num9, num9 * num9, num9 * num9 * num9);
    printf("%d\t%d\t  %d\n", num10, num10 * num10, num10 * num10 * num10);
    
    return 0;
}