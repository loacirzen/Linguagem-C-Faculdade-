#include <iostream>

#define N 50

using namespace std;


/************************************************************
*                 DECLARA��O DA ESTRUTURA
************************************************************/
typedef struct pilha{
	int info[N]; 
	int n; //n referencia a entrada pois � mais f�cil saber o tamanho
}Pilha;


/************************************************************
* Funcao    : criarPilha
* Descricao : Faz a aloca��o de mem�ria da pilha
* Parametros: Nenhum
* Retorno   : Ponteiro do tipo estrutura Pilha
*
*
/************************************************************/
Pilha*  criarPilha(){
	Pilha *p = new Pilha;
	p->n = 0; 
	return p;
}

/************************************************************
* Funcao    : push
* Descricao : Define um valor no topo da pilha
* Parametros: 1. Pilha *p - Ponteiro para a pilha a ser manipulada.
*	      2. int v - Valor a ser armazenado.
* Retorno   : Nenhum
/************************************************************/
void push(Pilha* p, int v){
	if(p->n == N){ 
		cout << endl << "Capacidade da pilha estourou!" << endl;
		return;
	}
	p->info[p->n] = v;
	//verificar para qual endere�o p aponta para cada chamada push no escopo main
	// p sempre tem o mesmo valor 	
	p->n++;
}


/************************************************************
* Funcao    : estaVazia
* Descricao : Retorna se a pilha esta vazia.
* Parametros: 1. Pilha *p - Ponteiro para a pilha a ser manipulada.
* Retorno   : int - Verdadeiro / Falso
/************************************************************/
int estaVazia(Pilha* p){	
	return (p->n==0);
}


/************************************************************
* Funcao    : pop
* Descricao : Recupera um valor no topo da pilha
* Parametros: 1. Pilha *p - Ponteiro para a pilha a ser manipulada.
* Retorno   : int - Valor do topo da pilha.
/************************************************************/
int pop(Pilha* p){
	if(estaVazia(p)){
		cout << "Pilha vazia" << endl;
		return 0;
	}
	int v = p->info[p->n - 1]; //p->n-1 n�o altera o valor simplimente pega o valor de subtrai 1 
	p->n--;// n-- � igual p->n = p->n-1 aqui � feito a altera��o de p->n 
	return v;
}


/************************************************************
* Funcao    : liberarPilha
* Descricao : Desalocar mem�ria.
* Parametros: 1. Pilha *p - Ponteiro para a pilha a ser manipulada.
* Retorno   : Nenhum.
/************************************************************/
void liberarPilha(Pilha* p){
	delete p;
}


/************************************************************
* Funcao    : estaCheia
* Descricao : Recupera um valor no topo da pilha
* Parametros: 1. Pilha *p - Ponteiro para a pilha a ser manipulada.
* Retorno   : int - Valor do topo da pilha.
/************************************************************/
int estaCheia(Pilha* p){
	return(p->n == N); 
}


/************************************************************
* Funcao    : imprimePilha
* Descricao : Mostra todos os elementos da pilha
* Parametros: 1. Pilha *p - Ponteiro para a pilha a ser manipulada.
* Retorno   : Nenhum
/************************************************************/
void imprimePilha(Pilha* p){
	int quantElementos = p->n;
	int i;
	for(i=0;i<quantElementos;i++){
		cout << p->info[i] << endl;
	}
}


/************************************************************
* Funcao    : verTopo
* Descricao : Mostra o valor no topo da pilha sem elimin�-lo
*		da pilha.
* Parametros: 1. Pilha *p - Ponteiro para a pilha a ser manipulada.
* Retorno   : char - Valor no topo da pilha.
/************************************************************/
char verTopo(Pilha* p){
	int quantElementos = p->n;
	quantElementos = quantElementos- 1;
	return p->info[quantElementos]; 
}

