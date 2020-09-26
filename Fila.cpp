#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <sstream>

using namespace std;

#define N 5

typedef struct fila{
	int elementos[N]; 
	int n; 
	int inicio;
}Fila;


Fila*  criarFila(){
	Fila *f = new Fila;
	f->n = 0;
	f->inicio = 0;
	return f;
}

void push(Fila* f, int v){
	if(f->n == N){
		cout << endl << "Capacidade da fila estourou!" << endl;
		return;
	}
	f->elementos[f->n] = v;
	f->n++;
}


int estaVazia(Fila* f){	
	return (f->n==0);
}


int pop(Fila* f){
	int v = 0;
	if(estaVazia(f))
		cout << "Pilha vazia";		
	else {
		v = f->elementos[f->inicio];
		f->inicio++;	
	}
	return v;
}


void liberarFila(Fila* f){
	free(f);
}


int estaCheia(Fila* f){
	return(f->n == N); 
}


void imprimeFila(Fila* f){
	int quantElementos = f->n;
	int i;
	for(i=0;i<quantElementos;i++){
		cout << f->elementos[i] << endl;
	}
}


int verTopo(Fila* f){	
	return f->elementos[f->inicio]; 
}

int main()
{	

	Fila *pFila = criarFila();
	push(pFila, 10);
	push(pFila, 20);
	push(pFila, 30);
	push(pFila, 40);
	push(pFila, 50);
	push(pFila, 60);
	push(pFila, pop(pFila) * 10);
	pop(pFila);
	pop(pFila);
	push(pFila, 70);
	cout << "Valor: " << pop(pFila);
	system("pause");
	return 0;

}