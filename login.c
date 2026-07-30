#include <stdio.h>

int main(void)

{

int logado, admin, superv;

printf("Para todas as perguntas a seguir, digite 1 para sim ou 0 para nao\n");

printf("Você está logado? ");
scanf("%d", &logado);

printf("Seu perfil e de administrador? ");
scanf("%d", &admin);

printf("Seu perfil e de supervisor? ");
scanf("%d", &superv);

if (logado == 1 && (admin == 1 || superv == 1))
{
printf("Acesso permitido\n");
}
else
{
printf("Acesso negado\n");
}

return(0);

}
