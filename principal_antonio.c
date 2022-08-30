#include <stdio.h>

void main (){

menu();

}

void menu(){

    int opcao,nivel;
    char curso[30];
 
    printf("\nMENU");
    printf("\n1 - Estatisticas de medias de estudantes de um curso: ");
    printf("\n2 - Estatisticas de Docentes de um curso: ");
    printf("\nDigite a opcao: ");
    scanf( "%d", &opcao);

  switch (opcao){
    case 1:
      printf("\n-Por favor escreva o nome do curso: ");
      scanf("%s", &curso);
      printf("\n-Por favor digite o nivel: ");
      scanf("%d", &nivel);
      break;
    case 2:
      printf("\n-Estatistica sobre os Docentes ");
      break;

    default:
      printf("\n-Opcao invalida ");
      break;
  }

}
