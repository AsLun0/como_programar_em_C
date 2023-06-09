/* 2.17 Escreva um programa que imprima do número 1 ao 4 na mesma linha. Escreva o programa 
usando os seguintes métodos:
a) Usando uma instrução printf sem especificadores de conversão.
b) Usando uma instrução printf com identificadores de conversão.
c) Usando quatro instruções printf. */

main(){
    int a = 1 , b = 2, c = 3, d = 4;

    printf("1, 2, 3 e 4\n"); // questão A

    printf("%d, %d, %d e %d\n", a, b, c , d); // questão B

    // questão C
    printf("1, ");
    printf("2, ");
    printf("3 e ");
    printf("4");
    return 0;
}