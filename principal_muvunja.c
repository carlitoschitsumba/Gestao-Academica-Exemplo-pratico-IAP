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
  char nome_curso [50], finalizar;
  int nivel, contador=0;
  float media_estudante, soma_media=0, media_maior=0, media_menor=0;

  printf("Introduza o nome do curso\n");
  scanf("%s", &nome_curso);

  printf ("Introduza o nivel do curso (de 1-4)\n");
  scanf ("%d",&nivel);

  while (finalizar !='s')
  {
    contador ++;

    printf("Introduza a media do estudante %d\n", contador);
    scanf("%f",&media_estudante);

    // ARMAZENAR A SOMA DAS MEDIAS
    soma_media = soma_media + media_estudante;

    // VERIFICAR A MAIOR MEDIA
    if (contador == 1)
    {
      media_maior = media_estudante;
      media_menor = media_estudante;
    }else if (media_estudante > media_maior)
    {
      media_maior = media_estudante;
    } else if (media_estudante < media_menor)
    {
      media_menor = media_estudante;
        }    
    

    if (media_estudante > media_maior)
    {
      media_maior = media_estudante;
    } else
    if (media_estudante < media_menor)
    {
      media_menor = media_estudante;
    }
    
    // VERIFICAR A MEDIA POSITIVA E NEGATIVA




    printf ("Finalizar o programa? s-Sim, n-Nao\n");
    scanf("%s" ,&finalizar);
  }

  printf("Curso: %s, %d Ano\n", nome_curso, nivel);
  printf("A media geral do curso e: %6.2f\n", soma_media/contador);
  printf("A maior media do curso e: %6.2f\n", &media_maior);
  printf("A menor media  do curso e: %6.2f\n", &media_menor);

  menu();
}

// ESTATISTICA DOCENTE

void est_docente(){
printf ("chamou a funcao da estatistica docente\n");


}