/* Usando instruções if, operadores relacionais e operadores de igualdade */

#include <stdio.h>

main(){
    int num1, num2;

    printf("Entre com dois inteiros e lhe direi \n");
    printf("o relacionamento que ele satisfazem:");

    scanf("%d%d",&num1,&num2);
    
    if(num1 == num2)
        printf("%d é igual a %d\n",num1,num2);
    
    if (num1 != num2)
        printf("%d não é igual a %d\n", num1, num2);

    if(num1 < num2)
        printf("%d é menor que %d\n", num1, num2);
    
    if(num1 > num2)
        printf("%d é maior que %d\n", num1, num2);

    if(num1 <= num2)
        printf("%d é menor que ou igual a %d\n", num1, num2);

    if(num1 >= num2)
        printf("%d é maior que ou igual a %d\n", num1, num2);
    
    return 0; // indica que o programa foi bem-sucedido
}