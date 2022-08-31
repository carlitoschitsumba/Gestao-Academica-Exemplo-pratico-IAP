#include <stdio.h>
#define SIZE 200
char nome[SIZE][50];
char email[SIZE][50];
int cpf[SIZE];
int opcao;
void cadastro();
void pesquisa();
void lista();
int main (void){

  do{
      system("cls");
      printf("\n----Menu----\n1 - Cadastrar\n2 - Listar todos\n3 - Pesquisar\n4 - Sair");
      scanf("%d", &opcao);
      switch(opcao){
        case 1:
          cadastro();
          break;

        case 2:
          lista();
          break;

        case 3:
          pesquisa();
          break;

        case 4:
          system("exit");
          break;

        default:
          printf("Opcao invalida!");
    }


  }while(opcao!=4);

}
void lista(){
  int i;
  for(i=0; i<SIZE; i++){
    if(cpf[i]>0){
      printf("\nNome: %s\nEmail: %s\nCPF: %d", nome[i], email[i], cpf[i]);
    }else{
      break;
    }
  }
  getchar();
  getchar();
}
void cadastro(){

}