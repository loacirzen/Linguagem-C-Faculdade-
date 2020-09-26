#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;


struct Cliente{
       char nome[40];
       int num;
       };


struct ElemCli{
       Cliente *cliente;
       ElemCli *prox;
       };


struct Livros{
	char nome[40];
	int num;
	};


struct ElemLivros{
	Livros *livros;
	ElemLivros *prox;
	};


struct Data{
	int dia;
	int mes;
	int ano;
	};


struct Emprestimo{
	int num;
	Cliente * cliente;
	Livros * livro;
	Data * dataemprestimo;
	Data * devolucao;
	int ativo;
	};


struct ElemEmp{
       Emprestimo *emprestimo;
       ElemEmp *prox;
       };


void scanData(Data *d){

     printf("Dia: ");
     scanf("%d",&d->dia);
     printf("Mes: ");
     scanf("%d",&d->mes);
     printf("Ano: ");
     scanf("%d",&d->ano);
     }


void IncluirCliente(Cliente *a, ElemCli **inicioCli)
{
    ElemCli *e=(ElemCli *)malloc(sizeof(ElemCli));
    e->cliente = a;
    e->prox = NULL;
    if(*inicioCli==NULL){

        *inicioCli=e;
        FILE * pFile = fopen("CadastroCliente.txt","a");
         if(pFile != NULL){
                   fprintf(pFile, "%d : %s\n", e->cliente->num, e->cliente->nome);
                   fclose(pFile);
				   }
       }
    else
    {
        ElemCli *aux = *inicioCli;
        while(aux->prox!=NULL)
        aux = aux->prox;
        aux->prox = e;

        FILE * pFile = fopen("CadastroCliente.txt","a");
         if(pFile != NULL){
                   fprintf(pFile, "%d : %s\n", e->cliente->num, e->cliente->nome);
                   fclose(pFile);
				   }
    }
}


void cadastrarCli(ElemCli **inicioCli){

     Cliente *a = (Cliente*)malloc(sizeof(Cliente));
     printf("Numero ID: ");
     scanf("%d",&a->num);
     printf("Nome: ");
     scanf("%*[^\n]"); scanf("%*c");
     scanf("%[^\n]s",&a->nome);
     IncluirCliente(a,inicioCli);

     }


void IncluirLivros(Livros *a, ElemLivros **inicioLivros)
{
    ElemLivros *e=(ElemLivros *)malloc(sizeof(ElemLivros));
    e->livros = a;
    e->prox = NULL;
    if(*inicioLivros==NULL){

        *inicioLivros=e;
        FILE * pFile = fopen("CadastroLivros.txt","a");
         if(pFile != NULL){
                   fprintf(pFile, "%d : %s\n", e->livros->num, e->livros->nome);
                   fclose(pFile);
		}
    }
    else
    {
        ElemLivros *aux = *inicioLivros;
        while(aux->prox!=NULL)
        aux = aux->prox;
        aux->prox = e;

        FILE * pFile = fopen("CadastroLivros.txt","a");
         if(pFile != NULL){
                   fprintf(pFile, "%d : %s\n", e->livros->num, e->livros->nome);
                   fclose(pFile);
		}
    }
}


void cadastrarLi(ElemLivros **inicioLivros){

     int i =0;
     Livros *a = (Livros*)malloc(sizeof(Livros));
     printf("ID Emprestimo: ");
     scanf("%d",&a->num);
     printf("Nome: ");
     //fgetc(a->nome);
     scanf("%s",&a->nome);
     scanf("%[^\n]s",&a->nome);
     //while ((a->nome[i] = fgetc(stdin)) != '\n'){
      //     ++i;
       //    }
     
     IncluirLivros(a,inicioLivros);

     }


void IncluirEmprestimo(Emprestimo *a, ElemEmp **inicioEmp)
{
    ElemEmp *e = (ElemEmp *)malloc(sizeof(ElemEmp));

    e->emprestimo = a;
    e->prox = NULL;


    if(*inicioEmp==NULL){
       *inicioEmp=e;
	
        FILE * pFile = fopen("CadastroEmprestimo.txt","a");
         if(pFile != NULL)
            {
             fprintf(pFile, "%d : %s : %s : %d/%d/%d : %d \n", e->emprestimo->num, e->emprestimo->cliente->nome, e->emprestimo->livro->nome, e->emprestimo->dataemprestimo->dia,e->emprestimo->dataemprestimo->mes,e->emprestimo->dataemprestimo->ano , e->emprestimo->ativo);
             fclose(pFile);
			}
    }
    else{

        ElemEmp *aux = *inicioEmp;
        while(aux->prox!=NULL)
         aux = aux->prox;
         aux->prox = e;

        FILE * pFile = fopen("CadastroEmprestimo.txt","a");
         if(pFile != NULL)
            {
             fprintf(pFile, "%d : %s : %s : %d/%d/%d : %d \n", e->emprestimo->num, e->emprestimo->cliente->nome, e->emprestimo->livro->nome, e->emprestimo->dataemprestimo->dia,e->emprestimo->dataemprestimo->mes,e->emprestimo->dataemprestimo->ano , e->emprestimo->ativo);
             fclose(pFile);
			}
        printf("\npasso 4\n");
    }
}


void cadastrarEmp(ElemEmp **inicioEmp){

     Emprestimo *a = (Emprestimo*)malloc(sizeof(Emprestimo)); //Alocar memoria para as structs, pq tava excedendo o tamanho
     Livros *l = (Livros*)malloc(sizeof(Livros));
     Cliente *c = (Cliente *)malloc(sizeof(Cliente));
     Data *d = (Data*)malloc(sizeof(Data));
     a->cliente = c;
     a->livro = l;
     a->dataemprestimo = d;
     printf("Numero ID: ");
     scanf("%d",&a->num);
     printf("Nome do Cliente: ");
     scanf("%s",&a->cliente->nome);
     printf("Nome do Livro: ");
     scanf("%s",&a->livro->nome);
     scanData(a->dataemprestimo);
     a->ativo=1;
     IncluirEmprestimo(a,inicioEmp);

}


void listarCliente(ElemCli **inicioCli){

     ElemCli *aux= *inicioCli;

     if(aux == NULL){
             system("CLS");
                printf("Falha ao Listar!!!\n\n");

    }

               while(aux != NULL){

                               printf("ID: %d\n",aux->cliente->num);
                               printf("Nome: %s\n",aux->cliente->nome);
                               printf("\n<<------------------------>>\n");

					  aux=aux->prox;
               }
     }


void listarLivros(ElemLivros **inicioLivros){

     ElemLivros *aux= *inicioLivros;

     if(aux == NULL)
	 {
             system("CLS");
                printf("Falha ao Listar!!!\n\n");

    }

               while(aux != NULL){

                               printf("ID: %d\n",aux->livros->num);
                               printf("Nome: %s\n",aux->livros->nome);
                               printf("\n<<------------------------>>\n");

					  aux=aux->prox;
               }

     }


void listarEmprestimo(ElemEmp **inicioEmp){

     ElemEmp *aux= *inicioEmp;

     if(aux == NULL){
             system("CLS");
                printf("Falha ao Listar!!!\n\n");

    }

               while(aux != NULL){

                   printf("ID: %d\n",aux->emprestimo->num);
                   printf("Nome do Cliente: %s\n",aux->emprestimo->cliente->nome);
			       printf("Nome do Livro: %s\n",aux->emprestimo->livro->nome);
			       printf("Data emprestimo: %d/%d/%d\n",aux->emprestimo->dataemprestimo->dia,aux->emprestimo->dataemprestimo->mes,aux->emprestimo->dataemprestimo->ano);
			       //printf("Data devolucao: %d/%d/%d\n",aux->emprestimo->devolucao->dia,aux->emprestimo->devolucao->mes,aux->emprestimo->devolucao->ano);
			       printf("Ativo: %d",aux->emprestimo->ativo);
                               printf("\n<<------------------------>>\n");

					  aux=aux->prox;
               }

     }



void pesquisarCliente(int numero, ElemCli **inicioCli){
    ElemCli *aux = *inicioCli;

     if(aux == NULL){
             system("CLS");
                 printf("Falha ao Listar!!!\n\n");

    }

	while (aux != NULL) {

		if (aux->cliente->num == numero)
			printf("Aluno -> %s\n",aux->cliente->nome);

            aux = aux->prox;
  }

}

void pesquisarCli(ElemCli **inicioCli){
	int numero;
	printf("Informe a numero: ");
	scanf("%d",&numero);
	pesquisarCliente(numero,inicioCli);

}

void pesquisarLivros(int numero, ElemLivros **inicioLivros){
    ElemLivros *aux = *inicioLivros;

     if(aux == NULL){
             system("CLS");
                 printf("Falha ao Listar!!!\n\n");

    }

	while (aux != NULL) {

		if (aux->livros->num == numero)
			printf("Livros -> %s\n",aux->livros->nome);

            aux = aux->prox;
  }

}

void pesquisarLi(ElemLivros **inicioLivros){
	int numero;
	printf("Informe a numero: ");
	scanf("%d",&numero);
	pesquisarLivros(numero,inicioLivros);

}


void lerArquivoCli(){

		FILE *pFile = fopen("CadastroCliente.txt","r");
         if(pFile != NULL){
                  char buffer[100];
                  char *c;

                  while(!feof(pFile)){
                    c=fgets(buffer,100,pFile);
                    
                    if(c){
                          printf("%s",c);
                          
					}
                    
                  }
                  
        }
            else {
                 printf("Falha ao Ler!!!");
            }

}

void lerArquivoLivro(){

		FILE *pFile = fopen("CadastroLivros.txt","r");
         if(pFile != NULL){
                  char buffer[100];
                  char *c;

                  while(!feof(pFile)){
                    c=fgets(buffer,100,pFile);
                    
                    if(c){
                          printf("%s",c);
                    }
                    
                  }
                  
        }
            else {
                 printf("Falha ao Ler!!!");
            }

}


void lerArquivoEmprestimo(){

	FILE *pFile = fopen("CadastroEmprestimo.txt","r");
         if(pFile != NULL){
                  char buffer[100];
                  char *c;

                  while(!feof(pFile)){
                    c=fgets(buffer,100,pFile);
                    
                    if(c){
                          printf("%s",c);
                    }
                    
                  }
                  
    	}
            else {
                 printf("Falha ao Ler!!!");
            }

}


void alterEmprestimoLivros(int numero, ElemEmp **inicioEmp){
     ElemEmp *aux= *inicioEmp;
     
     if(aux == NULL){
             system("CLS");
                 printf("Falha ao Alterar!!!\n\n");

    }

	while (aux != NULL) {

		if (aux->emprestimo->num == numero)
		aux->emprestimo->ativo = 0;

            aux = aux->prox;
  }
}

void lerLivroDev(ElemEmp **inicioEmp){
	
	int numero;
	printf("Informe o ID o emprestimo: ");
	scanf("%d",&numero);
	
	alterEmprestimoLivros(numero,inicioEmp);

}


int main(){
    int op;
    Data *d;
    ElemCli *inicioCli=NULL;
    ElemLivros *inicioLivros=NULL;
    ElemEmp *inicioEmp=NULL;

	do
        {
                      printf("\n |------------------------------|\n");
                      printf(" |       .. :: MENU :: ..       |\n");
                      printf(" |------------------------------|\n");
                      printf(" | 1 - CADASTRAR CLIENTE        |\n");
                      printf(" | 2 - LISTAR CLIENTE           |\n");
		              printf(" | 3 - CADASTRAR LIVROS         |\n");
                      printf(" | 4 - LISTAR LIVROS            |\n");
                      printf(" | 5 - REGISTRAR EMPRESTIMO     |\n");
                      printf(" | 6 - LISTAR EMPRESTIMO        |\n");
                      printf(" | 7 - REGISTRAR DEVOLUCAO      |\n");
                      printf(" | 8 - HISTORICO DE EMPRESTIMOS |\n");
                      printf(" | 9 - SALVAR                   |\n");
                      printf(" |------------------------------|\n");

                      printf("\nDigite uma opcao: ");
                      scanf("%d",&op);


	switch (op)
        {
        	case 1:
                 system("CLS");
                	cadastrarCli(&inicioCli);
        	break;
        	case 2:
                 system("CLS");
                	//listar(&inicio);
                	lerArquivoCli();
        	break;
        	case 3:
                 system("CLS");
                	cadastrarLi(&inicioLivros);
        	break;
        	case 4:
                 system("CLS");
                	lerArquivoLivro();
        	break;
        	case 5:
                 system("CLS");
                	cadastrarEmp(&inicioEmp);
        	break;
        	case 6:
                 system("CLS");
                 //listarEmprestimo(&inicioEmp);
        	       lerArquivoEmprestimo();
        	break;
        	case 7:
                 system("CLS");
                	lerLivroDev(&inicioEmp);
        	break;
        	case 8:
                 system("CLS");
                	listarEmprestimo(&inicioEmp);
        	break;
        	case 9:
                 system("CLS");
                	//SalvarArquivo(&inicioEmp);
        	break;
        }


        } while ((op>1)||(op<9));


    getch();

    }
