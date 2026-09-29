// Não deixa o valor 0 ser incluido no lugar de um vetor de char
// Por esse motivo foi removido do sistema da linguagem c, a função gets() da biblioteca conio.h e gconio.h
//
// Essa função abaixo é um modo de substituir a função original gets()
// Esta função é responsável por nos permitir cadastros com espaços entre as palavras
//
//
static char *my_gets(char *str, size_t strsize){
  int c;  // int, não char!
  int n=0;
  if(strsize==0)
    return NULL;
  --strsize;
  while(n<strsize && (c=getchar())!=EOF && c!='\n')
    str[n++]=c;
  str[n]='\0';
  return n==0 && c==EOF? NULL: str;
}
