#include <stdio.h>
#include <math.h>

//Declaracao de funcoes
void Menu();

void main(){

printf("---BEM VINDO A GESTAO ACADEMICA---\n");

//invocar a funcao menu
Menu();


}

void Menu(){
int opcao;
printf("1 - Estatísticas de médias de estudantes de um curso\n");
printf("2 - Estatísticas de Docentes de um curso\n");

printf("escolha uma opcao acima\n");
scanf("%d",&opcao);

switch (opcao)
{
case 1:
    printf("voce escolheu menu de media dos estudantes");
    break;

case 2:
    printf("voce escolheu menu  dos docentes");
    break;

default:
    printf("voce escolheu opcao invalida por favor escolha entre 1 e 2");
    break;

}



}