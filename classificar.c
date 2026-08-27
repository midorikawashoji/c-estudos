#include <stdio.h>

int classificar(int numero)
{
if (numero > 0)
{
return 1;
}
else if (numero < 0)
{
return -1;
}
else
{
return 0;
}
}

int main(void)
{

int numero, resultado;

printf("Digite um numero: ");
scanf("%d", &numero);

resultado = classificar(numero);

printf("%d\n", resultado);

return 0;

}
