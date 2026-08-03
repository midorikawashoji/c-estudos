#include <stdio.h>

int main (void)

{

int numero;

printf ("Digite um numero: ");
scanf ("%d", &numero);

numero += 10;

printf ("Seu numero + 10: %d\n", numero);

numero *= 2;

printf ("Resultado * 2: %d\n", numero);

numero -= 5;

printf("Resultado - 5: %d\n", numero);

numero /= 3;

printf ("Resultado dividido por 3: %d\n", numero);

return(0);

}
