#include <stdio.h>
#include <math.h>

//DECLARAÇÃO DAS FUNÇÕES
void menu();

void main (){
printf("---BEM VINDO AO SISTEMA DE GESTÃO ACADÊMICA---\n");

//invocar a função menu
menu();


}


void menu(){
int opcao;
printf("1 - Estatisticas de medias de estudantes de um curso\n");
printf("2 - Estatisticas de Docentes de um curso\n\n");

printf("Escolha uma das opcoes acima\n");
scanf("%d",&opcao);

switch (opcao)
{
case 1:
    printf("Escolheu o menu de medias de estudantes");
    break;

case 2:
    printf("Escolheu o menu de estatisticas de docentes");
    break;

default:
    printf("Opcao invalida por favor escolha entre 1 e 2");
    break;
}

}