/* 2.20 Escreva um programa que leia o raio de um círculo e imprima seu diâmetro, o valor de sua 
circunferência e sua área. Use o valor constante de 3,14159 para "pi". Faça cada um destes 
cálculos dentro da instrução (ou instruções) printf e use o especificador de conversão %f 
(Nota: Neste capítulo, analisamos apenas variáveis e constantes inteiras. No Capítulo 3 
analisaremos números de ponto flutuante, i.e., valores que podem possuir pontos decimais.) */

/*  Diametro é duas vezes o valor do raio
    Area = PI * (raio * raio)
    Circunferencia = 2 * PI * raio
   */ 

main(){
    float raio, pi = 3.14159;

    printf("Entre com o valor do raio de um circulo: ");
    scanf("%f", &raio);

    printf("Diametro: %f\nCircunferencia: %f\nArea: %f", 2 * raio, 2 * pi * raio, pi * (raio * raio));
}