#include <stdio.h>

int main (void)

{

int numero;

printf ("Digite um nunero maior que 0: ");
scanf ("%d", &numero);

while (numero <= 0)
{
printf("Digite um numero valido.\nDigite um numero maior que 0: ");
scanf ("%d", &numero);
}

for (int x = 1; x <= numero; x++)
{
printf("%d\n", x);
}

return 0;

}
