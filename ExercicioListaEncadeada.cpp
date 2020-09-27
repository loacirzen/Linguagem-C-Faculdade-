#include<conio.h>
#include<stdio.h>
#include<stdlib.h>


struct Aluno{//struct para aluno
       char nome[40];
       int mat;
       };

       
struct Elem{//struct para elemento
       Aluno *aluno;
       Elem *prox;
       };

       
void IncluirAluno(Aluno *a, Elem **inicio) 
{
    Elem *e=(Elem *)malloc(sizeof(Elem));
    e->aluno = a;
    e->prox = NULL;
    if(*inicio==NULL)
        *inicio=e;
    else
    {
        Elem *aux = *inicio;
        while(aux->prox!=NULL)
            aux = aux->prox;
        aux->prox = e;
    }
}

       
void cadastrar(Elem **inicio){
     
     Aluno *a = (Aluno*)malloc(sizeof(Aluno));
     printf("Matricula: ");
     scanf("%d",&a->mat);
     printf("Nome: ");
     scanf("%s",&a->nome);
     IncluirAluno(a,inicio);
     
     }
      
void listar(Elem **inicio){
     
     Elem *aux= *inicio;
     
     if(aux == NULL){ //veritica se a lista está vazia  
             system("CLS");
                 printf("Falha ao Listar!!!\n\n");
                 
                 }
                 
               while(aux != NULL){ // percorre prox até achar NULL
               
                               printf("Matricula: %d\n",aux->aluno->mat);
                               printf("Nome: %s\n",aux->aluno->nome);
                               printf("\n<<--------------------->>\n");
                               
					  aux=aux->prox;   
               }
               
     }
void excluirAluno(int registro, Elem **inicio){
     
    Elem *aux= *inicio, *pont;
    if(aux == NULL){
                 printf("Falha ao excluir lista vazia!!!\n\n");
                 exit(0);
                 }
                 
	while(aux != NULL && aux->aluno->mat != registro){ 
		pont = aux; //pont da estruct recebe aux 
		aux = aux->prox;
		
    }
		
		if(aux == NULL){ 
                printf("Registro não existe !!!\n");
                	exit(0);
                }
                
		if(aux == *inicio){
               *inicio = aux->prox;
               }else{
               
               pont->prox = aux->prox;
			free(aux);
        }

	}

     
void excluir(Elem **inicio){
	int registro;
	printf("Informe o registro");
	scanf("%d",&registro);
	excluirAluno(registro,inicio);

}

     
void pesquisarAluno(int matricula, Elem **inicio){
    Elem *aux = *inicio;
    
     if(aux == NULL){//veritica se a lista está vazia  
             system("CLS");
                 printf("Falha ao Listar!!!\n\n");
                 
                 }
                 
	while (aux != NULL) {
    		 
		if (aux->aluno->mat == matricula)// percorre a lista até achar a matricula informada 
			printf("Aluno -> %s\n",aux->aluno->nome);     
          
            aux = aux->prox;
  }

}    
     
void pesquisar(Elem **inicio){
	int matricula;
	printf("Informe a matricula: ");
	scanf("%d",&matricula);
	pesquisarAluno(matricula,inicio);	

}
    
int main(){
    int op;
    Elem *inicio=NULL;
    
	do
        {         
                      printf(" |------------------|\n");
                      printf(" | .. :: MENU :: .. |\n");
                      printf(" |------------------|\n");
                      printf(" | 1 - CADASTRAR    |\n");
                      printf(" | 2 - LISTAR       |\n");
                      printf(" | 3 - REMOVER      |\n");
                      printf(" | 4 - PROCURAR     |\n");
                      printf(" |------------------|\n");
                      
                      printf("\nDigite uma opcao: ");
                      scanf("%d",&op);


	switch (op)
        {
        	case 1:
                 system("CLS");
                	cadastrar(&inicio);
        	break;
        	case 2:
                 system("CLS");
                	listar(&inicio);
        	break;
        	case 3:
                 system("CLS");
                	excluir(&inicio);
        	break;
        	case 4:
                 system("CLS");
                	pesquisar(&inicio);
        	break;
        }
        
        
        } while ((op>1)||(op<4));
                      
                      
                      
                                              

    getch();
    
    }
