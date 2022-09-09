#include <stdio.h>
#include <math.h>


//DECLARAÇAO DAS FUNÇOES

void menu();
void est_estudante();
void est_docente();

void main()
{
printf("-----BEM VINDO AO SISTEMA DE GESTAO ACADEMICA-----\n");

  //Invocaçao da funçao menu 
  menu();
}

//IMPLEMENTAÇAO DE FUNÇOES

//FUNÇAO DE MENU

void menu()
{
int opcao;
printf("1 - Estatisticas de medias de estudantes de um curso\n");
printf("2 - Estatisticas de Docentes de um curso\n\n");

printf("Escolha uma das opcoes acima\n");
scanf("%d",&opcao);
switch (opcao)
{
case 1:
    //INVOCAÇAO DA FUNÇAO DE ESTATISTICAS DO ESTUDANTE
  est_estudante();
    break;

case 2:
    //INVOCAÇAO DA FUNÇAO DE ESTATISTICAS DO DOCENTE
  est_docente();
    break;

default:
    printf("Opcao invalida, por favor escolha entre 1 e 2");
    break;
}
}
//ESTATISTICA ESTUDANTE
void est_estudante(){
    printf("Chamou a funçao de estatisticas do estudante");
}

//ESTATISTICA DOCENTE
void est_docente(){
    printf("Chamou a funçao de estatisticas do docente");

}
