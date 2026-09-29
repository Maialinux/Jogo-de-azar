#include <stdio.h>
#include <stdlib.h>
#include <maia_gets.h>
#include <gconio.h>
#include <sys/stat.h>
#include <strings.h>
#include <time.h>
#include "biblioteca/menus.h"
#include "biblioteca/cadastro.h"
#include "biblioteca/jogos.h"

int main()
{

    int menu0,menu1;

do
{

menuPrincipal();
scanf("%d",&menu0);

if(menu0 == 1)
{
    fflush(stdin);
    Cadastro cadastro;
    Preencher(&cadastro);

}

if(menu0 == 2)
{
     menuAposta(menu1);

}

if(menu0 == 3)
{
    Sair();
}
}while(menu0 !=3);

   /* fflush(stdin);
    Cadastro cadastro;
    Preencher(&cadastro);
    Exibe(cadastro);*/

    getch();
    return 0;
}

