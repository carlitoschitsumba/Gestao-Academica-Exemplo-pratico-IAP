#include <stdio.h>

//Declaracao de Funcoes
void menu();

int main(){
printf("----BEM VINDO AO SISTEMA DE GESTAO ACADEMICA----\n\n");

//Invocacao da funcao menu
menu();

    return 0;
}

void menu(){
    int opcao;
    printf("1 - Estatísticas de médias de estudantes de um curson\n");
    printf("2 - Estatísticas de Docentes de um curso\n");

    printf("Escolha uma das opcies acima \n\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("Escolheu o menu de medias de estudantes");
        break;
    
    case 2:
        printf("Escolheu o menu de estatisticas de docentes");
        break;
    default:
        printf("Opcao invalida, por favor, escolha entre 1 e 2!");
        break;
    }
}