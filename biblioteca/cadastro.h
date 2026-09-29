#include <strings.h>
#include <time.h>


typedef struct CADASTRO
{
    char nomeCompleto[101];
    char bairro[101];
    char cidade[101];
    char uf[3];
    char endereco[101];
    char cpf[15];
    char email[101];

}Cadastro;


void Preencher(Cadastro *cadastro)
{
    system("color 5");
    system("cls");
    TituloCadastro();
    printf("\n\n");
    printf("CADASTRE O SEU NOME: ");
    gets(cadastro->nomeCompleto);

    printf("\n\nCADASTRE O SEU BAIRRO: ");
    gets(cadastro->bairro);

    printf("\n\nCADASTRE O SUA CIDADE: ");
    gets(cadastro->cidade);

    printf("\n\nDIGITE O SEU UF: ");
    gets(cadastro->uf);

    printf("\n\nCADASTRE O SEU ENDERECO: ");
    gets(cadastro->endereco);

    printf("\n\nCADASTRE O SEU CPF: ");
    gets(cadastro->cpf);

    printf("\n\nCADASTRE O SEU EMAIL: ");
    gets(cadastro->email);


     printf("\n\nCADASTRADO COM SUCESSO\n\n");
     system("pause");

     int numero1;
     numeroDaCartela(numero1);

}

void Exibe(Cadastro cadastro)
{
    system("color 5A");
    printf("\n\tExibindo Cadastro\n\n");
    printf("NOME COMPLETO: %s\n", cadastro.nomeCompleto);
    printf("BAIRRO: %s\n", cadastro.bairro);
    printf("CIDADE: %s\n", cadastro.cidade);
    printf("UF: %s\n", cadastro.uf);
    printf("ENDERECO: %s\n", cadastro.endereco);
    printf("CPF: %s\n", cadastro.cpf);
    printf("EMAIL: %s\n", cadastro.email);
}

int numeroDaCartela(int numero1)
{
     system("cls");
     TituloCadastro();
     printf("\n\n");
     srand( (unsigned)time(NULL) );
     numero1 = rand() % 999999;
     printf("\n\nPOR FAVOR ANOTE O NUMERO DA SUA CARTELA\n\n\n");
     system("\n\npause\n\n");
     printf("\n\nNUMERO: %d\n\n\n",numero1);
     system("\n\npause\n\n");
     return numero1;
}

