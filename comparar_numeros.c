#include <stdio.h>

int main(void)
 
{

int numero1, numero2;

printf("Digite o primeiro numero: ");
scanf("%d", &numero1);

printf("Digite o segundo numero: ");
scanf("%d", &numero2);

if (numero1 > numero2)
{
printf("Primeiro numero e maior\n");
}
else if (numero2 > numero1)
{
printf("Segundo numero e maior\n");
}
else
{
printf("Os numeros sao iguais\n");
}

return(0);

}
