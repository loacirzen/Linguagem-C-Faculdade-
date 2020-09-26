#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <sstream>

using namespace std;

typedef struct no {
	int info;
	int fb;
	struct no *dir, *esq;
};

typedef struct no No;


/********** PROTOTIPOS ***********/
No *criaNo( int );
void InsereEsquerda (No *, int );
void InsereDireita (No *, int );
void ImprimirEmOrdem (No *p);
void ImprimirPreOrder(No *p);
void ImprimirPosOrder(No *p);
void remover (No *tree, int num);

void main() 
{
	No *raiz, *p, *q;
	string linha;
	int num;
	int continua = 1;
	int primeiro = 1;
	int altura = 0;

	while(continua)
	{
		cout << "Entre com um valor, s para finalizar " << endl;
		cin >> linha;
		if (linha == "s")
		{
			continua = 0;
			continue;
		}
		stringstream sstemp(linha);
		sstemp >> num;
		
		if (primeiro)
		{
			raiz = criaNo(num);
			primeiro = 0;
		}
		else
		{
			q = raiz;
			p = raiz;			
			while (num != p->info && q != NULL) { 
				p = q;
				if (num < p->info)				
					q = p->esq;
				else
					q = p->dir;
			}
			if (num == p->info)
				cout << "O numero " << num << " ja existe na arvore" << endl;
			else {  
				if (num < p->info)
					InsereEsquerda(p, num);
				else
					InsereDireita(p, num);
			}
		}
	}
	ImprimirEmOrdem(raiz);
	cout << endl;
	ImprimirPosOrder(raiz);
	cout << endl;
	ImprimirPreOrder(raiz);
	fflush(stdin);
	getchar();
}

No *criaNo (int x) 
{
	No *p = new No;
	p->esq = NULL; 
	p->dir = NULL;
	p->info = x;
	return p;
}

void InsereEsquerda(No *p, int x) 
{	
	No *q = criaNo(x);
	p->esq = q;
}

void InsereDireita(No *p, int x) 
{
	No *q = criaNo(x);
	p->dir = q;	
} 


void ImprimirPreOrder (No *p) 
{
	if (p) 
	{
		cout << p->info;
		ImprimirPreOrder(p->esq);
		ImprimirPreOrder(p->dir);
	}
}

void ImprimirEmOrdem (No *p) 
{
	if (p) 
	{
		ImprimirEmOrdem(p->esq);
		cout << p->info;
		ImprimirEmOrdem(p->dir);
	}
}


void ImprimirPosOrder (No *p) 
{
	if (p) {
		ImprimirPosOrder(p->esq);
		ImprimirPosOrder(p->dir);
		cout << p->info;
	}
}

void Imprimir (No *p) 
{
	if (p) {
		Imprimir(p->esq);
		Imprimir(p->dir);
		cout << p->info;
	}
}


void remover (No *raiz, int num) 
{ 
     No *noExcluir,  /* p aponta para o no a ser removido */ 
         *noPai,  /* q aponta para o pai do no */ 
         *rp, /* rp aponta que ira substituir o no p */ 
         *f, 
         *s;  /* sucessor do no p */

     noExcluir = raiz; 
	 noPai = NULL;

     /* procura o no com a chave num, p aponta para o no e q aponta para o pai do no */ 
     while (noExcluir->info != num && noExcluir) { 
           noPai = noExcluir; 
           if ( num < noExcluir->info) 
              noExcluir = noExcluir->esq; 
           else 
               noExcluir = noExcluir->dir; 
     } /* fim do while */ 
     if (!noExcluir) 
		 return; /* a chave nao existe na arvore */
    
     if (noExcluir->esq == NULL) 
        rp = noExcluir->dir; 
     else 
	 {
         if (noExcluir->dir == NULL) 
            rp = noExcluir->esq; 
         else 
		 { 
              f = noExcluir; 
              rp = noExcluir->dir; 
              s = rp->esq;   /* s e sempre o filho esq de rp */ 
              while (s != NULL) 
			  { 
                    f = rp; 
                    rp = s; 
                    s = rp->esq; 
              } 
              /* neste ponto, rp e o sucessor em ordem de p */ 
              if (f != noExcluir) 
			  {  /*  p nao e o pai de rp e rp == f->left */ 
                 f->esq = rp->dir; 
                 /* remove o no rp de sua atual posicao e o substitui pelo filho direito de rp rp ocupa o lugar de p */ 
                 rp->dir = noExcluir->dir; 
              } 
              /* define o filho esquerdo de rp de modo que rp ocupe o lugar de p*/ 
              rp->esq = noExcluir->esq; 
         }
	 }
     /* insere rp na posicao ocupada anteriormente por p */ 
     if (noPai == NULL) 
        raiz = rp; 
     else 
         if (noExcluir == noPai->esq) 
            noPai->esq = rp; 
         else 
             noPai->dir = rp; 
     delete noExcluir; 
     //return rp; 
} 


