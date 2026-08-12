#include <stdio.h>

int dobro(int x)
{
return x * 2;
}

int quadrado(int y)
{
return y * y;
}

int dobro_do_quadrado(int z)
{
return dobro(quadrado(z));
}

int main(void)

{

int numero, resultado;

printf("Digite um numero: ");
scanf("%d", &numero);

resultado = dobro_do_quadrado(numero);

printf("O dobro do quadro do seu numero e: %d\n", resultado);

return 0;

}
