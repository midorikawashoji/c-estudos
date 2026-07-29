#include <stdio.h>

int main(void)

{

int idade;
float altura;

printf ("Qual sua idade: ");
scanf ("%d", &idade);

printf ("Qual sua altura: ");
scanf("%f", &altura);

printf("Idade = %d\n", idade);
printf("Altura = %.20f\n", altura);

if (idade >= 12 && altura >= 1.40)
{
printf ("Pode entrar no brinquedo\n");
}
else
{
printf ("Nao pode entrar no brinquedo\n");
}

return(0);

}
