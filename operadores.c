#include <stdio.h>

int main(void)

{

int numero1, numero2, resultado;

printf("Escolha o primeiro número: ");
scanf("%d",&numero1);

printf("Escolha o segundo número: ");
scanf("%d", &numero2);

resultado = numero1 + numero2;

printf("Soma = %d\n", resultado);

resultado = numero1 - numero2;

printf("Subtração = %d\n", resultado);

resultado = numero1 * numero2;

printf("Multiplicação = %d\n", resultado);

resultado = numero1 / numero2;

printf("Divisão inteira = %d\n", resultado);

resultado = numero1 % numero2;

printf("Sobra da divisão inteira = %d\n", resultado);

return(0);

}
