#include <stdio.h>

//Declaracao de Funcoes
void menu();
void est_estudante();

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
        est_estudante();
        break;
    
    case 2:
        printf("Escolheu o menu de estatisticas de docentes");
        break;
    default:
        printf("Opcao invalida, por favor, escolha entre 1 e 2!");
        break;
    }
}

void est_estudante(){
    char nome_curso[50];
    char finalizar;
    int nivel;
    int contador;
    float media_est;
    float soma_media = 0;
    float media_maior = 0;
    float media_menor = 0; 

    printf("Introduza o nome do curso \n");
    scanf("%s", &nome_curso);

    printf("Introduza o nivel do curso (de 1 - 4)\n");
    scanf("%d", &nivel);

    while (finalizar != 's')
    {
        contador ++;

        printf("Introduza a media do estudante %d\n", contador);
        scanf("%f", &media_est);
        //Armazenar a soma das medias
        soma_media = soma_media + media_est;

        //Verificar a Maior e Menor Nota
        if (contador == 1)
        {
            media_maior = media_est;
            media_menor = media_est;
        }else if (media_maior < media_est)
        {
            media_maior = media_est;
        } else if (media_menor > media_est){
            media_menor = media_est;
        }    


        printf("Finalizar o programa? [S/N] \n");
        scanf("%s", &finalizar);
    }

    printf("Curso: %s , %d Ano \n", nome_curso, nivel);
    printf("Media geral do curso e: %.2f \n", soma_media/contador);
    printf("Media Maior: %.2f \n", media_maior);
    printf("Media Menor: %.2f \n", media_menor);

    
}