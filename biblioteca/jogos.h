#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <strings.h>
#include <time.h>

//STRUCTS DOS JOGOS

typedef struct TRILEGAL
{
    int numerosSorteados1[60];
    int numerosSorteados2[60];
    int numerosDigitados[30];
    int n1[30],n2[30];
}Trilegal;

typedef struct QUINA
{
    int numerosSorteados1[80];
    int numerosSorteados2[80];
    int numerosDigitados[5];
    int n1[5],n2[5];
}Quina;

typedef struct LOTO_FACIL
{
    int numerosSorteados1[25];
    int numerosSorteados2[25];
    int numerosDigitados[15];
    int n1[15],n2[15];
}Loto_facil;

typedef struct MEGASENA
{
    int numerosSorteados1[60];
    int numerosSorteados2[60];
    int numerosDigitados[6];
    int n1[6],n2[6];

}Megasena;

typedef struct LOTOMANIA
{
    int numerosSorteados1[100];
    int numerosSorteados2[100];
    int numerosDigitados[50];
    int n1[50],n2[50];
}Lotomania;

typedef struct DUPLA_SENA
{
    int numerosSorteados1[50];
    int numerosSorteados2[50];
    int numerosDigitados[7];
    int n1[7],n2[7];
}Duplasena;

/*
 -------------------------------------------------------------------------------------------------------------
 -------------------------------------------------------------------------------------------------------------
                                       1 - FUNÇÕES DO TRILEGAL
 -------------------------------------------------------------------------------------------------------------
 -------------------------------------------------------------------------------------------------------------
*/

void inserirNumerosDigitadosTrilegal(Trilegal *trilegal)
{
    int i=0,aux=0;
    int cont=0;
    printf("\n\nDIGITE 30 NUMEROS DE 1 A 60 PARA CONCORRER A PREMIOS\n\n");
/*tem que digitar 30 números de 1 a 60. Se digitar mais que 60 ou menor que 1,
voce terá que repetir*/
for(i=0; i<30; i++)
{
         printf("\n\nDIGITE O %d NUMERO: ",i+1);
         scanf("%d",&trilegal->numerosDigitados[i]);
        while(cont < i)
        {

    do{

    if(trilegal->numerosDigitados[cont] == trilegal->numerosDigitados[i] || trilegal->numerosDigitados[i] < 1 ||  trilegal->numerosDigitados[i] > 60)
    {
                system("cls");
                printf("NUMERO JA EXISTE \n\n");
                system("pause");
                printf("\n\nDIGITE 30 NUMEROS DE 1 A 60 PARA CONCORRER A PREMIOS\n\n");
                printf("\n\nDIGITE O NUMERO NOVAMENTE %i: ",i+1);
                scanf("%d",&trilegal->numerosDigitados[i]);
                system("cls");

    }

    }while(trilegal->numerosDigitados[i] < 1 ||  trilegal->numerosDigitados[i] > 60 || trilegal->numerosDigitados[cont] == trilegal->numerosDigitados[i]);
    cont++;
    //pra saber se ao pular uma linha e digitar um numero ja digitado não se repita
       for(aux=0; aux < cont; aux++)
       {
           do{
         if(trilegal->numerosDigitados[aux] == trilegal->numerosDigitados[cont])
    {
                system("cls");
                printf("NUMERO JA EXISTE \n\n");
                system("pause");
                printf("\n\nDIGITE 30 NUMEROS DE 1 A 60 PARA CONCORRER A PREMIOS\n\n");
                printf("\n\nDIGITE O NUMERO NOVAMENTE %i: ",i+1);
                scanf("%d",&trilegal->numerosDigitados[aux]);
                system("cls");

    }
           }while(trilegal->numerosDigitados[aux] == trilegal->numerosDigitados[cont]);
       }
}



      if(trilegal->numerosDigitados[i] < 1 ||  trilegal->numerosDigitados[i] > 60)
      {

          do
            {
                system("cls");
                printf("\n\nDIGITE 30 NUMEROS DE 1 A 60 PARA CONCORRER A PREMIOS\n\n");
                printf("\n\nDIGITE O NUMERO NOVAMENTE %i: ",i+1);
                scanf("%d",&trilegal->numerosDigitados[i]);
                system("cls");
            }while(trilegal->numerosDigitados[i] < 1 ||  trilegal->numerosDigitados[i] > 60);

     }
      else
      {
          continue;
      }

    }




    printf("\n\nFUNCAO TRILEGAL FUNCIONANDO\n\n");
}


void mostrarNumerosDigitadosTrilegal(Trilegal *trilegal)
{

int l=0,k=0,j=0,x=0,aux=0,acertos=-1;
printf("\n\nNUMEROS MARCADOS NA CARTELA VIRTUAL\n\n");
for(l=0; l<30; l++)
{
         printf("[  %d ",trilegal->numerosDigitados[l]);
         printf(" ");
         printf(" ] ");

}
system("pause");

printf("\n\nANILISANDO NUMEROS DIGITADOS\n\n");
system("pause");

printf("\n\nSAINDO OS NUMEROS SOTEADOS DA CARTELA : \n\n");
system("pause");



srand(time(NULL));
for (l=0; l<30; l++)
trilegal->numerosSorteados1[l]= 0;

for (j=0;j < 30;j++) {
trilegal->numerosSorteados2[j]=rand() % 60;
x=trilegal->numerosSorteados2[j];

if(trilegal->numerosSorteados1[x]==1) { /* se o valor ja foi usado*/
for (k=0; k < 30; k++){
if (trilegal->numerosSorteados1[k]==0) {
trilegal->numerosSorteados2[j]=k;
x=k;
break; } }
}

trilegal->numerosSorteados1[x]=1;

}
printf("\n\n\n\t\t\tNUMEROS SORTEADOS\n\n");

//coloca os numeros em ordem crescente
for(k = 0; k <= 28; k++)
    for(l = k +1; l <= 29; l++)
    if(trilegal->numerosSorteados2[k] > trilegal->numerosSorteados2[l])
{
    aux = trilegal->numerosSorteados2[k];
    trilegal->numerosSorteados2[k] = trilegal->numerosSorteados2[l];
    trilegal->numerosSorteados2[l] = aux;
}

for (j=0;j<30;j++){
        if(trilegal->numerosSorteados2[j] == 0 )
            trilegal->numerosSorteados2[j]=1;
         else{
        printf("[  %d ", trilegal->numerosSorteados2[j]);
        printf(" ");
        printf(" ] ");
         }

        }

        printf("\n\n\n\t\t\tRESULTADO FINAL\n\n");
acertos = 0;

        for(l=0;l < 30; l++){
            for(j=0;j < 30; j++)
             {
                trilegal->n1[l] = trilegal->numerosDigitados[l];
                trilegal->n2[j] = trilegal->numerosSorteados2[j];
                    if(trilegal->n1[l] == trilegal->n2[j])
                {
                      if(acertos < 0)
                        {
                            acertos=0;
                        }
                        acertos++;
                }
             }
        }

            if(trilegal->n1[l] == trilegal->n2[j])
                {

                    printf("\n\n\n\t\t\tVOCE GANHOU 1 MILHAO DE REAIS\n\n");
                }
                else
                    {
                        printf("\n\n\n\t\t\tVOCE PERDEU TUDO\n\n");
                    }


         printf("ACERTOS:  %d ",acertos);
         printf("\n\n");
         system("pause");
         getch();

}
/*
 -------------------------------------------------------------------------------------------------------------
 -------------------------------------------------------------------------------------------------------------
                                       2 - FUNÇÕES DA QUINA
 -------------------------------------------------------------------------------------------------------------
 -------------------------------------------------------------------------------------------------------------
*/
void inserirNumerosDigitadosQuina(Quina *quina)
{

int i=0,aux=0;
int cont=0;
     printf("\n\nDIGITE 5 NUMEROS DE 1 A 80 PARA CONCORRER A PREMIOS\n\n");

/*tem que digitar 5 números de 1 a 80. Se digitar mais que 80 ou menor que 1,
voce terá que repetir*/
for(i=0; i<5; i++)
{


         printf("\n\nDIGITE O %d NUMERO: ",i+1);
         scanf("%d",&quina->numerosDigitados[i]);

while(cont < i)
    {

do{

    if(quina->numerosDigitados[cont] == quina->numerosDigitados[i] || quina->numerosDigitados[i] < 1 ||  quina->numerosDigitados[i] > 80)
    {
                system("cls");
                printf("NUMERO JA EXISTE \n\n");
                system("pause");
                printf("\n\nDIGITE 5 NUMEROS DE 1 A 80 PARA CONCORRER A PREMIOS\n\n");
                printf("\n\nDIGITE O NUMERO NOVAMENTE %i: ",i+1);
                scanf("%d",&quina->numerosDigitados[i]);
                system("cls");

    }

    }while(quina->numerosDigitados[i] < 1 ||  quina->numerosDigitados[i] > 80 || quina->numerosDigitados[cont] == quina->numerosDigitados[i]);
    cont++;
    //pra saber se ao pular uma linha e digitar um numero ja digitado não se repita
       for(aux=0; aux < cont; aux++)
       {
           do{
         if(quina->numerosDigitados[aux] == quina->numerosDigitados[cont])
    {
                system("cls");
                printf("NUMERO JA EXISTE \n\n");
                system("pause");
                printf("\n\nDIGITE 5 NUMEROS DE 1 A 80 PARA CONCORRER A PREMIOS\n\n");
                printf("\n\nDIGITE O NUMERO NOVAMENTE %i: ",i+1);
                scanf("%d",&quina->numerosDigitados[aux]);
                system("cls");

    }
           }while(quina->numerosDigitados[aux] == quina->numerosDigitados[cont]);
       }
}



      if(quina->numerosDigitados[i] < 1 ||  quina->numerosDigitados[i] > 80)
      {

          do
            {
                system("cls");
                printf("\n\nDIGITE 5 NUMEROS DE 1 A 80 PARA CONCORRER A PREMIOS\n\n");
                printf("\n\nDIGITE O NUMERO NOVAMENTE %i: ",i+1);
                scanf("%d",&quina->numerosDigitados[i]);
                system("cls");
            }while(quina->numerosDigitados[i] < 1 ||  quina->numerosDigitados[i] > 80);

     }
      else
      {
          continue;
      }

    }




    printf("\n\nFUNCAO QUINA FUNCIONANDO\n\n");
}


void mostrarNumerosDigitadosQuina(Quina *quina)
{


int l=0,k=0,j=0,x=0,aux=0,acertos=-1;
printf("\n\nNUMEROS MARCADOS NA CARTELA VIRTUAL\n\n");
for(l=0; l<5; l++)
{
         printf("[  %d ",quina->numerosDigitados[l]);
         printf(" ");
         printf(" ] ");

}
system("pause");

printf("\n\nANILISANDO NUMEROS DIGITADOS\n\n");
system("pause");

printf("\n\nSAINDO OS NUMEROS SOTEADOS DA CARTELA : \n\n");
system("pause");



srand(time(NULL));
for (l=0; l<7; l++)
quina->numerosSorteados1[l]= 0;

for (j=0;j < 7;j++) {
quina->numerosSorteados2[j]=rand() % 80;
x=quina->numerosSorteados2[j];

if(quina->numerosSorteados1[x]==1) { /* se o valor ja foi usado*/
for (k=0; k < 7; k++){
if (quina->numerosSorteados1[k]==0) {
quina->numerosSorteados2[j]=k;
x=k;
break; } }
}

quina->numerosSorteados1[x]=1;

}
printf("\n\n\n\t\t\tNUMEROS SORTEADOS\n\n");

//coloca os numeros em ordem crescente
for(k = 0; k <= 5; k++)
    for(l = k +1; l <= 6; l++)
    if(quina->numerosSorteados2[k] > quina->numerosSorteados2[l])
{
    aux = quina->numerosSorteados2[k];
    quina->numerosSorteados2[k] = quina->numerosSorteados2[l];
    quina->numerosSorteados2[l] = aux;
}

for (j=0;j<7;j++){
        if(quina->numerosSorteados2[j] == 0 )
            quina->numerosSorteados2[j]=1;
         else{
        printf("[  %d ", quina->numerosSorteados2[j]);
        printf(" ");
        printf(" ] ");
         }

        }


        printf("\n\n\n\t\t\tRESULTADO FINAL\n\n");
acertos = 0;

        for(l=0;l < 5; l++){
            for(j=0;j < 7; j++)
             {
                quina->n1[l] = quina->numerosDigitados[l];
                quina->n2[j] = quina->numerosSorteados2[j];
                    if(quina->n1[l] == quina->n2[j])
                {
                      if(acertos < 0)
                        {
                            acertos=0;
                        }
                        acertos++;
                }
             }
        }

            if(quina->n1[l] == quina->n2[j])
                {

                    printf("\n\n\n\t\t\tVOCE GANHOU 1 MILHAO DE REAIS\n\n");
                }
                else
                    {
                        printf("\n\n\n\t\t\tVOCE PERDEU TUDO\n\n");
                    }


         printf("ACERTOS:  %d ",acertos);
         printf("\n\n");
system("pause");
 getch();

}

/*
 -------------------------------------------------------------------------------------------------------------
 -------------------------------------------------------------------------------------------------------------
                                      3 - FUNÇÕES DA LOTO FÁCIL
 -------------------------------------------------------------------------------------------------------------
 -------------------------------------------------------------------------------------------------------------
*/
void inserirNumerosDigitadosLotoFacil(Loto_facil *loto_facil)
{

int i=0,aux=0;
int cont=0;
     printf("\n\nDIGITE 15 NUMEROS DE 1 A 25 PARA CONCORRER A PREMIOS\n\n");

/*tem que digitar 15 números de 1 a 25. Se digitar mais que 25 ou menor que 1,
voce terá que repetir*/
for(i=0; i<15; i++)
{


         printf("\n\nDIGITE O %d NUMERO: ",i+1);
         scanf("%d",&loto_facil->numerosDigitados[i]);

while(cont < i)
    {

do{

    if(loto_facil->numerosDigitados[cont] == loto_facil->numerosDigitados[i] || loto_facil->numerosDigitados[i] < 1 ||  loto_facil->numerosDigitados[i] > 25)
    {
                system("cls");
                printf("NUMERO JA EXISTE \n\n");
                system("pause");
                printf("\n\nDIGITE 15 NUMEROS DE 1 A 25 PARA CONCORRER A PREMIOS\n\n");
                printf("\n\nDIGITE O NUMERO NOVAMENTE %i: ",i+1);
                scanf("%d",&loto_facil->numerosDigitados[i]);
                system("cls");

    }

    }while(loto_facil->numerosDigitados[i] < 1 ||  loto_facil->numerosDigitados[i] > 25 || loto_facil->numerosDigitados[cont] == loto_facil->numerosDigitados[i]);
    cont++;
    //pra saber se ao pular uma linha e digitar um numero ja digitado não se repita
       for(aux=0; aux < cont; aux++)
       {
           do{
         if(loto_facil->numerosDigitados[aux] == loto_facil->numerosDigitados[cont])
    {
                system("cls");
                printf("NUMERO JA EXISTE \n\n");
                system("pause");
                printf("\n\nDIGITE 15 NUMEROS DE 1 A 25 PARA CONCORRER A PREMIOS\n\n");
                printf("\n\nDIGITE O NUMERO NOVAMENTE %i: ",i+1);
                scanf("%d",&loto_facil->numerosDigitados[aux]);
                system("cls");

    }
           }while(loto_facil->numerosDigitados[aux] == loto_facil->numerosDigitados[cont]);
       }
}



      if(loto_facil->numerosDigitados[i] < 1 ||  loto_facil->numerosDigitados[i] > 25)
      {

          do
            {
                system("cls");
                printf("\n\nDIGITE 15 NUMEROS DE 1 A 25 PARA CONCORRER A PREMIOS\n\n");
                printf("\n\nDIGITE O NUMERO NOVAMENTE %i: ",i+1);
                scanf("%d",&loto_facil->numerosDigitados[i]);
                system("cls");
            }while(loto_facil->numerosDigitados[i] < 1 ||  loto_facil->numerosDigitados[i] > 25);

     }
      else
      {
          continue;
      }

    }




    printf("\n\nFUNCAO LOTO FACIL FUNCIONANDO\n\n");
}


void mostrarNumerosDigitadosLotoFacil(Loto_facil *loto_facil)
{


int l=0,k=0,j=0,x=0,aux=0,acertos=-1;
printf("\n\nNUMEROS MARCADOS NA CARTELA VIRTUAL\n\n");
for(l=0; l<15; l++)
{
         printf("[  %d ",loto_facil->numerosDigitados[l]);
         printf(" ");
         printf(" ] ");

}
system("pause");

printf("\n\nANILISANDO NUMEROS DIGITADOS\n\n");
system("pause");

printf("\n\nSAINDO OS NUMEROS SOTEADOS DA CARTELA : \n\n");
system("pause");



srand(time(NULL));
for (l=0; l<15; l++)
loto_facil->numerosSorteados1[l]= 0;

for (j=0;j < 15;j++) {
loto_facil->numerosSorteados2[j]=rand() % 25;
x=loto_facil->numerosSorteados2[j];

if(loto_facil->numerosSorteados1[x]==1) { /* se o valor ja foi usado*/
for (k=0; k < 15; k++){
if (loto_facil->numerosSorteados1[k]==0) {
loto_facil->numerosSorteados2[j]=k;
x=k;
break; } }
}

loto_facil->numerosSorteados1[x]=1;

}
printf("\n\n\n\t\t\tNUMEROS SORTEADOS\n\n");

//coloca os numeros em ordem crescente
for(k = 0; k <= 13; k++)
    for(l = k +1; l <= 14; l++)
    if(loto_facil->numerosSorteados2[k] > loto_facil->numerosSorteados2[l])
{
    aux = loto_facil->numerosSorteados2[k];
    loto_facil->numerosSorteados2[k] = loto_facil->numerosSorteados2[l];
    loto_facil->numerosSorteados2[l] = aux;
}

for (j=0;j<15;j++){
        if(loto_facil->numerosSorteados2[j] == 0 )
            loto_facil->numerosSorteados2[j]=1;
         else{
        printf("[  %d ", loto_facil->numerosSorteados2[j]);
        printf(" ");
        printf(" ] ");
         }

        }


        printf("\n\n\n\t\t\tRESULTADO FINAL\n\n");
acertos = 0;

        for(l=0;l < 15; l++){
            for(j=0;j < 15; j++)
             {
                loto_facil->n1[l] = loto_facil->numerosDigitados[l];
                loto_facil->n2[j] = loto_facil->numerosSorteados2[j];
                    if(loto_facil->n1[l] == loto_facil->n2[j])
                {
                      if(acertos < 0)
                        {
                            acertos=0;
                        }
                        acertos++;
                }
             }
        }

            if(loto_facil->n1[l] == loto_facil->n2[j])
                {

                    printf("\n\n\n\t\t\tVOCE GANHOU 1 MILHAO DE REAIS\n\n");
                }
                else
                    {
                        printf("\n\n\n\t\t\tVOCE PERDEU TUDO\n\n");
                    }


         printf("ACERTOS:  %d ",acertos);
         printf("\n\n");
system("pause");

 getch();

}


/*
 -------------------------------------------------------------------------------------------------------------
 -------------------------------------------------------------------------------------------------------------
                                       4 - FUNÇÕES DA MEGA SENA
 -------------------------------------------------------------------------------------------------------------
 -------------------------------------------------------------------------------------------------------------
*/

/*
Como jogar
A Mega-Sena paga milhões para o acertador dos 6 números sorteados.
Ainda é possível ganhar prêmios ao acertar 4 ou 5 números dentre os 60 disponíveis no volante de apostas.
Para realizar o sonho de ser o próximo milionário, você deve marcar de 6 a 15 números do volante, podendo deixar que o sistema escolha os números para você (Surpresinha) e/ou concorrer com a mesma aposta por 2, 4 ou 8 concursos consecutivos (Teimosinha).
*/

void inserirNumerosDigitadosMegasena(Megasena *megasena)
{

int i=0,aux=0;
int cont=0;
     printf("\n\nDIGITE 6 NUMEROS DE 1 A 60 PARA CONCORRER A PREMIOS\n\n");

for(i=0; i<6; i++)
{


         printf("\n\nDIGITE O %d NUMERO: ",i+1);
         scanf("%d",&megasena->numerosDigitados[i]);

while(cont < i)
    {

do{

    if(megasena->numerosDigitados[cont] == megasena->numerosDigitados[i] || megasena->numerosDigitados[i] < 1 ||  megasena->numerosDigitados[i] > 60)
    {
                system("cls");
                printf("NUMERO JA EXISTE \n\n");
                system("pause");
                printf("\n\nDIGITE 6 NUMEROS DE 1 A 60 PARA CONCORRER A PREMIOS\n\n");
                printf("\n\nDIGITE O NUMERO NOVAMENTE %i: ",i+1);
                scanf("%d",&megasena->numerosDigitados[i]);
                system("cls");

    }

    }while(megasena->numerosDigitados[i] < 1 ||  megasena->numerosDigitados[i] > 60 || megasena->numerosDigitados[cont] == megasena->numerosDigitados[i]);
    cont++;
    //pra saber se ao pular uma linha e digitar um numero ja digitado não se repita
       for(aux=0; aux < cont; aux++)
       {
           do{
         if(megasena->numerosDigitados[aux] == megasena->numerosDigitados[cont])
    {
                system("cls");
                printf("NUMERO JA EXISTE \n\n");
                system("pause");
                printf("\n\nDIGITE 6 NUMEROS DE 1 A 60 PARA CONCORRER A PREMIOS\n\n");
                printf("\n\nDIGITE O NUMERO NOVAMENTE %i: ",i+1);
                scanf("%d",&megasena->numerosDigitados[aux]);
                system("cls");

    }
           }while(megasena->numerosDigitados[aux] == megasena->numerosDigitados[cont]);
       }
}



      if(megasena->numerosDigitados[i] < 1 || megasena->numerosDigitados[i] > 60)
      {

          do
            {
                system("cls");
                printf("\n\nDIGITE 6 NUMEROS DE 1 A 60 PARA CONCORRER A PREMIOS\n\n");
                printf("\n\nDIGITE O NUMERO NOVAMENTE %i: ",i+1);
                scanf("%d",&megasena->numerosDigitados[i]);
                system("cls");
            }while(megasena->numerosDigitados[i] < 1 || megasena->numerosDigitados[i] > 60);

     }
      else
      {
          continue;
      }

    }




    printf("\n\nFUNCAO MEGASENA FUNCIONANDO\n\n");
}


void mostrarNumerosDigitadosMegasena(Megasena *megasena)
{


int l=0,k=0,j=0,x=0,aux=0,acertos=-1;
printf("\n\nNUMEROS MARCADOS NA CARTELA VIRTUAL\n\n");
for(l=0; l<6; l++)
{
         printf("[  %d ",megasena->numerosDigitados[l]);
         printf(" ");
         printf(" ] ");

}
system("pause");

printf("\n\nANILISANDO NUMEROS DIGITADOS\n\n");
system("pause");

printf("\n\nSAINDO OS NUMEROS SOTEADOS DA CARTELA : \n\n");
system("pause");



srand(time(NULL));
for (l=0; l<6; l++)
megasena->numerosSorteados1[l]= 0;

for (j=0;j < 6;j++) {
megasena->numerosSorteados2[j]=rand() % 60;
x=megasena->numerosSorteados2[j];

if(megasena->numerosSorteados1[x]==1) { /* se o valor ja foi usado*/
for (k=0; k < 6; k++){
if (megasena->numerosSorteados1[k]==0) {
megasena->numerosSorteados2[j]=k;
x=k;
break; } }
}

megasena->numerosSorteados1[x]=1;

}
printf("\n\n\n\t\t\tNUMEROS SORTEADOS\n\n");

//coloca os numeros em ordem crescente
for(k = 0; k <= 4; k++)
    for(l = k +1; l <= 5; l++)
    if(megasena->numerosSorteados2[k] > megasena->numerosSorteados2[l])
{
    aux = megasena->numerosSorteados2[k];
    megasena->numerosSorteados2[k] = megasena->numerosSorteados2[l];
    megasena->numerosSorteados2[l] = aux;
}

for (j=0;j<6;j++){
        if(megasena->numerosSorteados2[j] == 0 )
           megasena->numerosSorteados2[j]=1;
         else{
        printf("[  %d ", megasena->numerosSorteados2[j]);
        printf(" ");
        printf(" ] ");
         }
        }


printf("\n\n\n\t\t\tRESULTADO FINAL\n\n");
acertos = 0;


        for(l=0;l < 6; l++){
            for(j=0;j < 6; j++)
             {
                megasena->n1[l] = megasena->numerosDigitados[l];
                megasena->n2[j] = megasena->numerosSorteados2[j];
                    if(megasena->n1[l] == megasena->n2[j])
                {
                    if(acertos < 0)
                        {
                            acertos=0;
                        }
                        acertos++;
                }
             }
        }

            if(megasena->n1[l] == megasena->n2[j])
                {

                    printf("\n\n\n\t\t\tVOCE GANHOU 1 MILHAO DE REAIS\n\n");
                }
                else
                    {
                        printf("\n\n\n\t\t\tVOCE PERDEU TUDO\n\n");

                    }

        printf("ACERTOS:  %i ",acertos);

         printf("\n\n");

system("pause");

 getch();

}

/*
 -------------------------------------------------------------------------------------------------------------
 -------------------------------------------------------------------------------------------------------------
                                         5 - FUNÇÕES DA LOTOMANIA
 -------------------------------------------------------------------------------------------------------------
 -------------------------------------------------------------------------------------------------------------
A Lotomania é fácil de jogar e de ganhar:
basta escolher 50 números e então concorrer a prêmios para acertos de 20, 19, 18, 17, 16 ou nenhum número.
Além da opção de marcar no volante, você ainda pode marcar menos que 50 números e deixar que o sistema complete o jogo para você;
não marcar nada e deixar que o sistema escolha todos os números na Surpresinha e/ou concorrer com a mesma aposta por 2, 4 ou 8 concursos consecutivos com a Teimosinha.
Outra opção é efetuar uma nova aposta com o sistema selecionando os outros 50 números não registrados no jogo original, através da
*/

void inserirNumerosDigitadosLotomania(Lotomania *lotomania)
{

int i=0,aux=0;
int cont=0;
     printf("\n\nDIGITE 50 NUMEROS DE 1 A 99 PARA CONCORRER A PREMIOS\n\n");

for(i=0; i<50; i++)
{


         printf("\n\nDIGITE O %d NUMERO: ",i+1);
         scanf("%d",&lotomania->numerosDigitados[i]);

while(cont < i)
    {

do{

    if(lotomania->numerosDigitados[cont] == lotomania->numerosDigitados[i] || lotomania->numerosDigitados[i] < 1 ||  lotomania->numerosDigitados[i] > 99)
    {
                system("cls");
                printf("NUMERO JA EXISTE \n\n");
                system("pause");
                printf("\n\nDIGITE 50 NUMEROS DE 1 A 99 PARA CONCORRER A PREMIOS\n\n");
                printf("\n\nDIGITE O NUMERO NOVAMENTE %i: ",i+1);
                scanf("%d",&lotomania->numerosDigitados[i]);
                system("cls");

    }

    }while(lotomania->numerosDigitados[i] < 1 ||  lotomania->numerosDigitados[i] > 99 || lotomania->numerosDigitados[cont] == lotomania->numerosDigitados[i]);
    cont++;
    //pra saber se ao pular uma linha e digitar um numero ja digitado não se repita
       for(aux=0; aux < cont; aux++)
       {
           do{
         if(lotomania->numerosDigitados[aux] == lotomania->numerosDigitados[cont])
    {
                system("cls");
                printf("NUMERO JA EXISTE \n\n");
                system("pause");
                printf("\n\nDIGITE 50 NUMEROS DE 1 A 99 PARA CONCORRER A PREMIOS\n\n");
                printf("\n\nDIGITE O NUMERO NOVAMENTE %i: ",i+1);
                scanf("%d",&lotomania->numerosDigitados[aux]);
                system("cls");

    }
           }while(lotomania->numerosDigitados[aux] == lotomania->numerosDigitados[cont]);
       }
}



      if(lotomania->numerosDigitados[i] < 1 || lotomania->numerosDigitados[i] > 99)
      {

          do
            {
                system("cls");
                printf("\n\nDIGITE 50 NUMEROS DE 1 A 99 PARA CONCORRER A PREMIOS\n\n");
                printf("\n\nDIGITE O NUMERO NOVAMENTE %i: ",i+1);
                scanf("%d",&lotomania->numerosDigitados[i]);
                system("cls");
            }while(lotomania->numerosDigitados[i] < 1 || lotomania->numerosDigitados[i] > 99);

     }
      else
      {
          continue;
      }

    }




    printf("\n\nFUNCAO LOTOMANIA FUNCIONANDO\n\n");
}


void mostrarNumerosDigitadosLotomania(Lotomania *lotomania)
{


int l=0,k=0,j=0,x=0,aux=0,acertos=-1;
printf("\n\nNUMEROS MARCADOS NA CARTELA VIRTUAL\n\n");
for(l=0; l<50; l++)
{
         printf("[  %d ",lotomania->numerosDigitados[l]);
         printf(" ");
         printf(" ] ");

}
system("pause");

printf("\n\nANILISANDO NUMEROS DIGITADOS\n\n");
system("pause");

printf("\n\nSAINDO OS NUMEROS SOTEADOS DA CARTELA : \n\n");
system("pause");



srand(time(NULL));
for (l=0; l<21; l++)
lotomania->numerosSorteados1[l]= 0;

for (j=0;j < 21;j++) {
lotomania->numerosSorteados2[j]=rand() % 99;
x=lotomania->numerosSorteados2[j];

if(lotomania->numerosSorteados1[x]==1) { /* se o valor ja foi usado*/
for (k=0; k < 21; k++){
if(lotomania->numerosSorteados1[k]==0) {
lotomania->numerosSorteados2[j]=k;
x=k;
break; } }
}

lotomania->numerosSorteados1[x]=1;

}
printf("\n\n\n\t\t\tNUMEROS SORTEADOS\n\n");

//coloca os numeros em ordem crescente
for(k = 0; k <= 19; k++)
    for(l = k +1; l <= 20; l++)
    if(lotomania->numerosSorteados2[k] > lotomania->numerosSorteados2[l])
{
    aux = lotomania->numerosSorteados2[k];
    lotomania->numerosSorteados2[k] = lotomania->numerosSorteados2[l];
    lotomania->numerosSorteados2[l] = aux;
}

for (j=0;j<21;j++){
        if(lotomania->numerosSorteados2[j] == 0 )
           lotomania->numerosSorteados2[j]=1;
         else{
        printf("[  %d ", lotomania->numerosSorteados2[j]);
        printf(" ");
        printf(" ] ");
         }

        }

        printf("\n\n\n\t\t\tRESULTADO FINAL\n\n");
acertos = 0;

        for(l=0;l < 50; l++){
            for(j=0;j < 21; j++)
             {
                lotomania->n1[l] = lotomania->numerosDigitados[l];
                lotomania->n2[j] = lotomania->numerosSorteados2[j];
                    if(lotomania->n1[l] == lotomania->n2[j])
                {
                      if(acertos < 0)
                        {
                            acertos=0;
                        }
                        acertos++;
                }
             }
        }

            if(lotomania->n1[l] == lotomania->n2[j])
                {

                    printf("\n\n\n\t\t\tVOCE GANHOU 1 MILHAO DE REAIS\n\n");
                }
                else
                    {
                        printf("\n\n\n\t\t\tVOCE PERDEU TUDO\n\n");
                    }


         printf("ACERTOS:  %d ",acertos);
         printf("\n\n");
system("pause");

 getch();

}




/*
 -------------------------------------------------------------------------------------------------------------
 -------------------------------------------------------------------------------------------------------------
                                       6 - FUNÇÕES DA DUPLA SENA
 -------------------------------------------------------------------------------------------------------------
 -------------------------------------------------------------------------------------------------------------
Como jogar na Dupla Sena
Para jogar na Dupla Sena compareça a uma Casa Lotérica e preencha seu jogo no volante de apostas que contém 50 números de 01 a 50.
Com um único jogo você concorre aos dois sorteios do concurso e pode escolher entre 6 e 15 números com os respectivos custos de aposta por jogo:
*/

void inserirNumerosDigitadosDuplasena(Duplasena *duplasena)
{

int i=0,aux=0;
int cont=0;
     printf("\n\nDIGITE 7 NUMEROS DE 1 A 50 PARA CONCORRER A PREMIOS\n\n");

for(i=0; i<7; i++)
{


         printf("\n\nDIGITE O %d NUMERO: ",i+1);
         scanf("%d",&duplasena->numerosDigitados[i]);

while(cont < i)
    {

do{

    if(duplasena->numerosDigitados[cont] == duplasena->numerosDigitados[i] || duplasena->numerosDigitados[i] < 1 ||  duplasena->numerosDigitados[i] > 50)
    {
                system("cls");
                printf("NUMERO JA EXISTE \n\n");
                system("pause");
                printf("\n\nDIGITE 7 NUMEROS DE 1 A 50 PARA CONCORRER A PREMIOS\n\n");
                printf("\n\nDIGITE O NUMERO NOVAMENTE %i: ",i+1);
                scanf("%d",&duplasena->numerosDigitados[i]);
                system("cls");

    }

    }while(duplasena->numerosDigitados[i] < 1 ||  duplasena->numerosDigitados[i] > 50 || duplasena->numerosDigitados[cont] == duplasena->numerosDigitados[i]);
    cont++;
    //pra saber se ao pular uma linha e digitar um numero ja digitado não se repita
       for(aux=0; aux < cont; aux++)
       {
           do{
         if(duplasena->numerosDigitados[aux] == duplasena->numerosDigitados[cont])
    {
                system("cls");
                printf("NUMERO JA EXISTE \n\n");
                system("pause");
                printf("\n\nDIGITE 7 NUMEROS DE 1 A 50 PARA CONCORRER A PREMIOS\n\n");
                printf("\n\nDIGITE O NUMERO NOVAMENTE %i: ",i+1);
                scanf("%d",&duplasena->numerosDigitados[aux]);
                system("cls");

    }
           }while(duplasena->numerosDigitados[aux] == duplasena->numerosDigitados[cont]);
       }
}



      if(duplasena->numerosDigitados[i] < 1 || duplasena->numerosDigitados[i] > 50)
      {

          do
            {
                system("cls");
                printf("\n\nDIGITE 7 NUMEROS DE 1 A 50 PARA CONCORRER A PREMIOS\n\n");
                printf("\n\nDIGITE O NUMERO NOVAMENTE %i: ",i+1);
                scanf("%d",&duplasena->numerosDigitados[i]);
                system("cls");
            }while(duplasena->numerosDigitados[i] < 1 || duplasena->numerosDigitados[i] > 50);

     }
      else
      {
          continue;
      }

    }




    printf("\n\nFUNCAO DUPLA SENA FUNCIONANDO\n\n");
}


void mostrarNumerosDigitadosDuplasena(Duplasena *duplasena)
{


int l=0,k=0,j=0,x=0,aux=0,acertos=-1;
printf("\n\nNUMEROS MARCADOS NA CARTELA VIRTUAL\n\n");
for(l=0; l<7; l++)
{
         printf("[  %d ",duplasena->numerosDigitados[l]);
         printf(" ");
         printf(" ] ");

}
system("pause");

printf("\n\nANILISANDO NUMEROS DIGITADOS\n\n");
system("pause");

printf("\n\nSAINDO OS NUMEROS SOTEADOS DA CARTELA : \n\n");
system("pause");



srand(time(NULL));
for (l=0; l<7; l++)
duplasena->numerosSorteados1[l]= 0;

for (j=0;j < 7;j++) {
duplasena->numerosSorteados2[j]=rand() % 50;
x=duplasena->numerosSorteados2[j];

if(duplasena->numerosSorteados1[x]==1) { /* se o valor ja foi usado*/
for (k=0; k < 7; k++){
if(duplasena->numerosSorteados1[k]==0) {
duplasena->numerosSorteados2[j]=k;
x=k;
break; } }
}

duplasena->numerosSorteados1[x]=1;

}
printf("\n\n\n\t\t\tNUMEROS SORTEADOS\n\n");

//coloca os numeros em ordem crescente
for(k = 0; k <= 5; k++)
    for(l = k +1; l <= 6; l++)
    if(duplasena->numerosSorteados2[k] > duplasena->numerosSorteados2[l])
{
    aux = duplasena->numerosSorteados2[k];
    duplasena->numerosSorteados2[k] = duplasena->numerosSorteados2[l];
    duplasena->numerosSorteados2[l] = aux;
}

for (j=0;j<7;j++){
        if(duplasena->numerosSorteados2[j] == 0 )
           duplasena->numerosSorteados2[j]=1;
         else{
        printf("[  %d ", duplasena->numerosSorteados2[j]);
        printf(" ");
        printf(" ] ");
         }

        }


        printf("\n\n\n\t\t\tRESULTADO FINAL\n\n");
        acertos = 0;

        for(l=0;l < 7; l++){
            for(j=0;j < 7; j++)
             {
                duplasena->n1[l] = duplasena->numerosDigitados[l];
                duplasena->n2[j] = duplasena->numerosSorteados2[j];
                    if(duplasena->n1[l] == duplasena->n2[j])
                {
                      if(acertos < 0)
                        {
                            acertos=0;
                        }
                        acertos++;
                }
             }
        }

            if(duplasena->n1[l] == duplasena->n2[j])
                {

                    printf("\n\n\n\t\t\tVOCE GANHOU 1 MILHAO DE REAIS\n\n");
                }
                else
                    {
                        printf("\n\n\n\t\t\tVOCE PERDEU TUDO\n\n");
                    }


         printf("ACERTOS:  %d ",acertos);
         printf("\n\n");

system("pause");

 getch();

}

