#include <stdio.h>

int maior(int a, int b)
{

if(a > b)
{
return a;

}
else
{
return b;
}

}

int mdt(int a, int b, int c)
{

int d;

d = maior(a, b);

if(d > c)
{
return d;
}
else
{
return c;
}

}


int main(void)
{

int n1, n2, n3, resultado;

printf("Digite 3 numeros\nPrimeiro numero: ");
scanf("%d", &n1);

printf("Digite o 2 numero: ");
scanf("%d", &n2);

printf("Digite o 3 numero: ");
scanf("%d", &n3);

resultado = mdt(n1, n2, n3);

printf("O maior numero e: %d\n", resultado);

return 0;

}
