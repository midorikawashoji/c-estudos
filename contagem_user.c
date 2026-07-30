#include <stdio.h>

int main(void)

{

int x, y = 1;

printf("Digite um numero acima de 0: ");
scanf("%d", &x);

while (x <= 0)
{
printf("Digite um número válido: ");
scanf("%d", &x);
}
while (y <= x)
{
printf("%d\n", y);
y++;
}

return(0);

} 
