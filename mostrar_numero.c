#include <stdio.h>

void msg_nmr(int numero)
{
printf("O numero digitado foi: %d\n", numero);
}

int main(void)

{

int numero;

printf("Digite um numero: ");
scanf("%d", &numero);

msg_nmr(numero);

return 0;

} 
