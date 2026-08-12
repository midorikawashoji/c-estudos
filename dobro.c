#include <stdio.h>

int dobro(int numero)
{
return numero * 2;
}

int main(void)

{

int numero, resultado;

printf("Digite um numero: ");
scanf("%d", &numero);

resultado = dobro(numero);

printf("O dobro do seu numero é: %d\n", resultado);

return 0;

}
