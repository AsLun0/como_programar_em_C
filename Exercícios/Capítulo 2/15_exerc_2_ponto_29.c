/* Eis um pequeno passo à frente. Neste capítulo você aprendeu a respeito de inteiros e o tipo 
int. O C também pode representar letras maiúsculas, letras minúsculas e uma grande 
variedade de símbolos especiais. O C usa internamente pequenos inteiros para representar 
cada caractere diferente. O conjunto de caracteres que um computador utiliza e as 
representações dos números inteiros correspondentes àqueles caracteres é chamado conjunto de 
caracteres do computador. Você pode imprimir o número inteiro equivalente à letra maiúscula A, por exemplo, executando a instrução

printf("%d", 'A');

Escreva um programa em C que imprima os inteiros equivalentes a algumas letras maiúsculas,
letras minúsculas e símbolos especiais. No mínimo, determine os números inteiros equivalentes 
ao conjunto seguinte: A BCabc 0 12 $ * + /eo caractere espaço em  branco. */

#include <stdio.h>

main(){
    char A = 'A', B = 'B', C = 'C', a = 'a', b = 'b', c = 'c', num0 = '0', num1 = '1', num2 = '2',
    cifrao = '$', vezes = '*', mais = '+', barra = '/', esp_branco = ' ';

    printf("O inteiro equivalente ao caractere |%c| eh %d\n", A, A);
    printf("O inteiro equivalente ao caractere |%c| eh %d\n", B, B);
    printf("O inteiro equivalente ao caractere |%c| eh %d\n", C, C);
    printf("O inteiro equivalente ao caractere |%c| eh %d\n", a, a);
    printf("O inteiro equivalente ao caractere |%c| eh %d\n", b, b);
    printf("O inteiro equivalente ao caractere |%c| eh %d\n", c, c);
    printf("O inteiro equivalente ao caractere |%c| eh %d\n", num0, num0);
    printf("O inteiro equivalente ao caractere |%c| eh %d\n", num1, num1);
    printf("O inteiro equivalente ao caractere |%c| eh %d\n", num2, num2);
    printf("O inteiro equivalente ao caractere |%c| eh %d\n", cifrao, cifrao);
    printf("O inteiro equivalente ao caractere |%c| eh %d\n", vezes, vezes);
    printf("O inteiro equivalente ao caractere |%c| eh %d\n", mais, mais);
    printf("O inteiro equivalente ao caractere |%c| eh %d\n", barra, barra);
    printf("O inteiro equivalente ao caractere |%c| eh %d\n", esp_branco, esp_branco);

    return 0;
}