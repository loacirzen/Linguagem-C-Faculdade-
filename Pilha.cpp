#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "Pilha.h"

using namespace std;

/***************************************************************************
* Funcao    : main
* Descricao : Programa principal para testar implementação de uma pilha.
* Parametros: Nenhum.
* Retorno   : nenhum
* Autor     : Alexandre Souza
**************************************************************************/
	Pilha *pPilha = criarPilha();
	Pilha *pAux  = criarPilhaAux();	

	void criarDiscos(){
	push(pPilha, 1);
	push(pPilha, 2);
	push(pPilha, 3);
	push(pPilha, 4);
	push(pPilha, 5);
	push(pPilha, 6);
	push(pPilha, 7);
	push(pPilha, 8);
	push(pPilha, 9);
	push(pPilha, 10);
	push(pPilha, 11);
	push(pPilha, 12);
	push(pPilha, 13);
	push(pPilha, 14);
	push(pPilha, 15);
}


	
int Search(Pilha* p, int x){
	cout << "Eis o verdadeiro topo -> " << p->n << endl;
	if(estaVazia(p)){
		cout << "Pilha vazia" << endl;
		return 0;
		
		}else{
			while(p->n !=0 ){

				if (p->info[p->n] != x+1){
		
				}else{	
					pushAux(pAux, pop(pPilha));
					p->n = 15;
					break;
				//criarDiscos();
				
			//	cout << "Eis o TOPO -> "<< verTopo(pPilha) << endl;
			//break;
				 }

				p->n--;
			}
		}
		
		
	}
//	cout << pop(p) << endl;
	 


int main()
{	// Variaveis auxiliares.
	int iTotal = 0;
	int iConta = 0;
	int contDisco=0;
	int x;
	
	// Aloca memória para a pilha.


	// Insere valores na pilha.
	
cout << "1 - Dark Side of the Moon - Pink Floyd" << endl;
cout << "2 - Led Zeppelin IV - Led Zeppelin" << endl;
cout << "3 - Nevermind - Nirvana" << endl;
cout << "4 - Metallica - Metallica" << endl;
cout << "5 - Back in Black - AC/DC" << endl; 
cout << "6 - Ten - Pearl Jam" << endl;
cout << "7 - Are You Experienced - Jimi Hendrix" << endl;
cout << "8 - Houses of the Holy - Led Zeppelin" << endl; 
cout << "9 - A Rush of Blood to the Head - Coldplay" << endl;
cout << "10 - Wish You Were Here - Pink Floyd" << endl;
cout << "11 - Blood Sugar - Red Hot Chili Peppers" << endl;
cout << "12 - And Justice for All - Metallica" << endl;
cout << "13 - Bringing It All - Bob Dylan" << endl;
cout << "14 - Dookie - Green Day" << endl;
cout << "15 - The Stranger - Billy Joel" << endl;

	criarDiscos();
	
	while(x!=0){
	cout << "Informe o Disco: ";
	cin >> x;
	Search(pPilha ,x);
}


	
	
	
	//faixa selecionadas
	
	//for(int i=1; i<contDisco; i++){
	//	cout << "Disco - " << i << ": ";
	//	cin >> vet[i];
	//	Search(pPilha ,vet[i]);
	//}
	

	// for para realocar elemento por elemento 

	
//	for(int j=1; j<contDisco; j++){
		//pushAux(pAux, vet[j]);
//		cout << "Empilhando na pilha auxiliar" << endl; 
	    //cout << popAux(pAux) << endl; 
//	    Search(pPilha ,vet[j]);
	   
//	}
	
	//pSearch(pPilha,20);
	

	// Recupera o total de elementos na pilha.
	iTotal = pPilha->n;

	// Recupera cada elemento da pilha.
//	for(; iConta < iTotal; iConta++)
//		cout << pop(pPilha) << endl;
		

		cout << "\n\nPilha " << endl;
		imprimePilha(pPilha);
		
		
		cout << "\n\nPilha Auxiliar" << endl;
		
	//for(; iConta < iTotal; iConta++)
	//	cout << popAux(pAux) << endl;
		
		
		
		imprimePilha(pAux);
	
//	for(; iConta < iTotal; iConta++)
//		cout << pop(pAux) << endl;
		
	// Desalocar memória;
	liberarPilha(pPilha);
	
	
	
	system("pause");
	return 0;

}
