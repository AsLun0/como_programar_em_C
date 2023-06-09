/* 2.3 Escreva uma instrução simples em C para realizar cada um dos pedidos que se seguem:
a) Declare do tipo int as variáveis c, estaVariavel, q76354 e numero.
b) Peça ao usuário para fornecer um inteiro. Termine sua mensagem (prompt) com dois 
pontos (:) seguidos de um espaço e deixe o cursor posicionado após o espaço.
c) Leia um inteiro digitado no teclado e armazene na variável a o valor fornecido.
d) Se a variável numero não for igual a 7, imprima "A variável numero nao e igual a 7".
e) Imprima a mensagem "Este e um programa em C" em uma linha.
f) Imprima a mensagem "Este e um programa em C" em duas linhas, sendo que a primeira 
linha termina com a palavra um.
g) Imprima a mensagem "Este e um programa em C" com cada palavra em uma linha 
separada.
h) Imprima a mensagem "Este e um programa em C" com todas as palavras separadas por 
tabulações. */

#include <stdio.h>

main(){
    int c, estaVariavel, q76395, numero; // questão A

    printf("Entre com um valor inteiro: "); // questão B
    scanf("%d", &numero); // questão C

    if(numero != 7) // questão D
        printf("a variavel %d não eh gual a 7\n");

    printf("Este eh um programa em C\n"); //questão E

    printf("Este eh um\nprograma em C\n"); //questão F

    printf("Este\neh\num\nprograma\nem\nC\n"); // questão G

    printf("Este\teh\tum\tprograma\tem\tC\t"); // questão H
    
    return 0;
}