#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <strings.h>
#include "jogos.h";
#include "tituloMenu.h";

void menuPrincipal()
{

    system("cls");
    TituloMenu();
    printf("\n\n\n\n\n\n\n\n\n\n\n");
    printf("\t\t\t\t\t\t\t  1 - CADASTRE O APOSTADOR\n\n\n\n");
    printf("\t\t\t\t\t\t\t  2 - FACAM SUAS APOSTAS\n\n\n\n");
    printf("\t\t\t\t\t\t\t  3 - SAIR DO JOGO\n\n\n\n");
 system("color 1F");
}

void menuAposta(int menu1)
{


    system("cls");
    TituloMenu();
    printf("\n\n\n");
    printf("\t\t\t\t\t\t\tSELECIONE UM JOGO E APOSTE\n\n\n\n");
    printf("\t\t\t\t\t\t\t    [ 1 ]    TRILEGAL\n\n");
    printf("\t\t\t\t\t\t\t    [ 2 ]    QUINA\n\n");
    printf("\t\t\t\t\t\t\t    [ 3 ]    LOTO FACIL\n\n");
    printf("\t\t\t\t\t\t\t    [ 4 ]    MEGA SENA\n\n");
    printf("\t\t\t\t\t\t\t    [ 5 ]    LOTOMANIA\n\n");
    printf("\t\t\t\t\t\t\t    [ 6 ]    DUPLA SENA\n\n");
    printf("\t\t\t\t\t\t\t    [ 7 ]    PARA SAIR\n\n");
    scanf("%d",&menu1);

  if(menu1==1){
 system("color 2F");
        system("cls");
        TituloTrilegal();
        fflush(stdin);
        Trilegal trilegal;
        inserirNumerosDigitadosTrilegal(&trilegal);
        system("pause");
        mostrarNumerosDigitadosTrilegal(&trilegal);
        FimJogo();
     }
fflush(stdin);

if(menu1==2){
system("color 3F");
        system("cls");
        TituloQuina();
        fflush(stdin);
        Quina quina;
        inserirNumerosDigitadosQuina(&quina);
        system("pause");
        mostrarNumerosDigitadosQuina(&quina);
        FimJogo();
     }
fflush(stdin);

     if(menu1==3){
system("color 4F");
        system("cls");
        TituloLotofacil();
        fflush(stdin);
        Loto_facil loto_facil;
        inserirNumerosDigitadosLotoFacil(&loto_facil);
        system("pause");
        mostrarNumerosDigitadosLotoFacil(&loto_facil);
        FimJogo();
     }

fflush(stdin);

     if(menu1==4){
system("color 5F");
        system("cls");
        TituloMegasena();
        fflush(stdin);
        Megasena megasena;
        inserirNumerosDigitadosMegasena(&megasena);
        system("pause");
        mostrarNumerosDigitadosMegasena(&megasena);
        FimJogo();
     }

fflush(stdin);

     if(menu1==5){
system("color 6F");
        system("cls");
        TituloLotomania();
        fflush(stdin);
        Lotomania lotomania;
        inserirNumerosDigitadosLotomania(&lotomania);
        system("pause");
        mostrarNumerosDigitadosLotomania(&lotomania);
        FimJogo();
     }

fflush(stdin);

     if(menu1==6){
system("color 70");
        system("cls");
        TituloDuplasena();
        fflush(stdin);
        Duplasena duplasena;
        inserirNumerosDigitadosDuplasena(&duplasena);
        system("pause");
        mostrarNumerosDigitadosDuplasena(&duplasena);
        FimJogo();
     }

fflush(stdin);

    if(menu1 == 7)
    {
          menuPrincipal();
    }

   }

//funções de fim

void Sair()
{

    printf("\n\n\n\n\n\nSAINDO DO SIMULADOR\n\n");
    system("pause");

}

void FimJogo()
{
    system("cls");
    TituloMenu();
    printf("\n\n\n\n\nO SEU JOGO TERMINOU\n\n");
    system("pause");

}
