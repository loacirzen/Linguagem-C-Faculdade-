#include <iostream>

#define N 50

using namespace std;


/************************************************************
*                 DECLARAÇÃO DA ESTRUTURA
************************************************************/
	

typedef struct pilha{
	int info[N]; 
	int n; 
}Pilha;


/************************************************************
* Funcao    : criarPilha
* Descricao : Faz a alocação de memória da pilha
* Parametros: Nenhum
* Retorno   : Ponteiro do tipo estrutura Pilha
/************************************************************/
Pilha*  criarPilha(){
	Pilha *p = new Pilha;
	p->n = 0;
	return p;
}


Pilha* criarPilhaAux(){
	Pilha *pAux = new Pilha;
	pAux->n = 0;
	return pAux;
}

//	Pilha *pAux  = criarPilhaAux();
//	Pilha *pPilha = criarPilha();
	

/************************************************************
* Funcao    : push
* Descricao : Define um valor no topo da pilha
* Parametros: 1. Pilha *p - Ponteiro para a pilha a ser 
*							manipulada.
*			  2. int v - Valor a ser armazenado.
* Retorno   : Nenhum
/************************************************************/
void push(Pilha* p, int v){
	if(p->n == N){
		cout << endl << "Capacidade da pilha estourou!" << endl;
		return;
	}
	p->info[p->n] = v;
	p->n++;
}


void pushAux(Pilha* pAux, int v){
	if(pAux->n == N){
		cout << endl << "Capacidade da pilha estourou!" << endl;
		return;
	}
	pAux->info[pAux->n] = v;
	pAux->n++;
}




/************************************************************
* Funcao    : estaVazia
* Descricao : Retorna se a pilha esta vazia.
* Parametros: 1. Pilha *p - Ponteiro para a pilha a ser 
*							manipulada.
* Retorno   : int - Verdadeiro / Fals0
/************************************************************/
int estaVazia(Pilha* p){	
	return (p->n==0);
}


int estaVaziaAux(Pilha* pAux){	
	return (pAux->n==0);
}


/************************************************************
* Funcao    : pop
* Descricao : Recupera um valor no topo da pilha
* Parametros: 1. Pilha *p - Ponteiro para a pilha a ser 
*							manipulada.
* Retorno   : int - Valor do topo da pilha.
/************************************************************/
int pop(Pilha* p){
	if(estaVazia(p)){
		cout << "Pilha vazia" << endl;
		return 0;
	}
	int v = p->info[p->n - 1];
	p->n--;
	return v;
}


int popAux(Pilha* pAux){
	if(estaVaziaAux(pAux)){
		cout << "Pilha vazia" << endl;
		return 0;
	}
	int v = pAux->info[pAux->n - 1];
	pAux->n--;
	return v;
}


/************************************************************
* Funcao    : liberarPilha
* Descricao : Desalocar memória.
* Parametros: 1. Pilha *p - Ponteiro para a pilha a ser 
*							manipulada.
* Retorno   : Nenhum.
/************************************************************/
void liberarPilha(Pilha* p){
	delete p;
}


/************************************************************
* Funcao    : estaCheia
* Descricao : Recupera um valor no topo da pilha
* Parametros: 1. Pilha *p - Ponteiro para a pilha a ser 
*							manipulada.
* Retorno   : int - Valor do topo da pilha.
/************************************************************/
int estaCheia(Pilha* p){
	return(p->n == N); 
}


/************************************************************
* Funcao    : imprimePilha
* Descricao : Mostra todos os elementos da pilha
* Parametros: 1. Pilha *p - Ponteiro para a pilha a ser 
*							manipulada.
* Retorno   : Nenhum
/************************************************************/
void imprimePilha(Pilha* p){
	int quantElementos = p->n;
	int i;
	for(i=0;i<quantElementos;i++){
		//cout << p->info[i] << endl;
		switch (p->info[i]){
		case 1:
		cout <<"Tocando -> 1 - Dark Side of the Moon - Pink Floyd"<< endl;
		break;
		case 2:
		cout <<"Tocando -> 2 - Led Zeppelin IV - Led Zeppelin"<< endl;
		break;
		case 3:
		cout <<"Tocando -> 3 - Nevermind - Nirvana"<< endl;
		break;
		case 4:
		cout <<"Tocando -> 4 - Metallica - Metallica"<< endl;
		break;
		case 5:
		cout <<"Tocando -> 5 - Back in Black - AC/DC"<< endl;
		break;
		case 6:
		cout <<"Tocando -> 6 - Ten - Pearl Jam"<< endl;
		break;
		case 7:
		cout <<"Tocando -> 7 - Are You Experienced - Jimi Hendrix"<< endl;
		break;
		case 8:
		cout <<"Tocando -> 8 - Houses of the Holy - Led Zeppelin"<< endl;
		break;
		case 9:
		cout <<"Tocando -> 9 - A Rush of Blood to the Head - Coldplay"<< endl;
		break;
		case 10:
		cout <<"Tocando -> 10 - Wish You Were Here - Pink Floyd"<< endl;
		break;
		case 11:
		cout <<"Tocando -> 11 - Blood Sugar - Red Hot Chili Peppers"<< endl;
		break;
		case 12:
		cout <<"Tocando -> 12 - And Justice for All - Metallica"<< endl;
		break;
		case 13:
		cout <<"Tocando -> 13 - Bringing It All - Bob Dylan"<< endl;
		break;
		case 14:
		cout <<"Tocando -> 14 - Dookie - Green Day"<< endl;
		break;
		case 15:
		cout <<"Tocando -> 15 - The Stranger - Billy Joel"<< endl;
		break;
		
	}
}
}


/************************************************************
* Funcao    : verTopo
* Descricao : Mostra o valor no topo da pilha sem eliminá-lo
*			  da pilha.
* Parametros: 1. Pilha *p - Ponteiro para a pilha a ser 
*							manipulada.
* Retorno   : char - Valor no topo da pilha.
/************************************************************/
int verTopo(Pilha* p){
	int quantElementos = p->n;
	quantElementos = quantElementos- 1;
	return p->info[quantElementos]; 
}

/*
int pSearch(Pilha* p, int x){
	if(estaVazia(p)){
		cout << "Pilha vazia" << endl;
		return 0;
	}
	while(p->n != 0){
		if(p->info[p->n] != x){
		//return p->n-1;
		pushAux(pAux, pop(pPilha));
		p->n--;
	}
		else if (p->info[p->n] == x){
		break;
		pushAux(pAux, pop(pPilha));}
			while(pAux->n != 0){
				if(pAux->info[pAux->n] != x){
					//return p->n-1;
				push(pPilha, popAux(pAux));}
			else if (p->info[p->n] == x){
			
			
				push(pPilha, popAux(pAux));}
		p->n--;
	}	 
}
	cout << pop(p) << endl;
}
	 
*/



