#include <stdio.h>

int maior_de_idade(int idade)
{

if(idade >= 18)
{
return 1;
}

else
{
return 0;
}

}

int main(void)

{

int idade;

printf("Qual sua idade: ");
scanf("%d", &idade);

if(maior_de_idade(idade))
{
printf("Maior de idade\n");
}

else
{
printf("Menor de idade\n");
}

return 0;

}
