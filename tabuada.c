#include <stdio.h>

int main (void)

{

int numero;

printf("Digite um numero maior que 0 para visualizar sua tabuada até o 10: ");
scanf("%d", &numero);

while (numero <= 0)
{
printf("Na na nao, digite um numero maior que 0!\nDigite um numero maior que 0 para visualizar sua tabuada até o 10: ");
scanf("%d", &numero);
}

for (int x = 1; x <= 10; x++)
{
printf("%d x %d = %d\n", numero, x, x * numero);
}

return 0;

}
