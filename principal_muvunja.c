#include <stdio.h>
#include <math.h>

// DECLARACAO DAS FUNCOES

void menu ();


void main ()
{

printf ("--BEM VINDO AO SISTEMA DE GESTAO ACADEMICA--\n");

// invocacao da funcao menu
menu ();

    
}

void menu (){

int opcao;
printf ("1- Estatistica de medias dos estudante de um curso\n");
printf ("2- Estatistica de docentes de um curso\n");

printf ("Escolha uma das opcoes acima\n");
scanf ("%d",&opcao);

switch (opcao)
{
case 1:
  printf ("Escolheu o menu de estatistica de estudantes");
  break;


case 2:
  printf("Escolheu o menu de estatistica dos docentes");
default:
printf ("Escolheu a opcao errada");
  break;
}


}