#include <stdio.h>

int soma(int x1, int x2)
{
return x1 + x2;
}

int main(void)

{
int numero1, numero2, resultado;

printf("Digite o primeiro numero: ");
scanf("%d", &numero1);

printf("Digite o segundo  numero: ");
scanf("%d", &numero2);

resultado = soma(numero1, numero2);

printf("A soma dos numeros e: %d\n", resultado);

return 0;

}
