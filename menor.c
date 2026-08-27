#include <stdio.h>

int menor(int a, int b)
{

if (a > b)
{
return b;
}
else
{
return a;
}

}

int main(void)
{

int numero1, numero2, resultado;

printf("Digite 2 numeros\nPrimeiro numero: ");
scanf("%d", &numero1);

printf("Digite o segundo numero: ");
scanf("%d", &numero2);

resultado = menor(numero1, numero2);

printf("O numero menor é o %d\n", resultado);

return 0;

}


