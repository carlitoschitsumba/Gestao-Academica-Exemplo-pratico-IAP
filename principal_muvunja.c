#include <stdio.h>
#include <math.h>

// DECLARACAO DAS FUNCOES

void menu ();
void est_estudante();
void est_docente();


void main ()
{

printf ("--BEM VINDO AO SISTEMA DE GESTAO ACADEMICA--\n");

// invocacao da funcao menu
menu ();

    
}
// IMPLEMETACAO DE FUNCOES

//IMPLEMENTACAO DA FUNCAO MENU
void menu (){

int opcao;
printf ("1- Estatistica de medias dos estudante de um curso\n");
printf ("2- Estatistica de docentes de um curso\n");

printf ("Escolha uma das opcoes acima\n");
scanf ("%d",&opcao);

switch (opcao)
{
case 1:
// INVOCACAO DA FUNCAO DE ESTATISTICA DE ESTUDANTES
  est_estudante();
  break;


case 2:
// INVOCACAO DA FUNCAO DE ESTATISTICA DE DOCENTES
  est_docente();
break;
default:
printf ("Escolheu a opcao errada\n");
  break;
}


}

//ESTATISTICA ESTUDANTES

void est_estudante(){

printf ("Chamou a funcao de estatistica de estudantes\n");
}

// ESTATISTICA DOCENTE

void est_docente(){
printf ("chamou a funcao da estatistica docente\n");


}