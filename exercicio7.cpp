#include<conio.h>
#include<stdio.h>
#include<stdlib.h>

int main(){
    int vet[10], maior=0, aux, pos=0;
    
   for(int i=0;i<10;i++)
            {
             printf("Digite o %d elemento: ",i);
             scanf("%d",&vet[i]);
             
             
                    if (vet[i] > maior) 
                    { 
                        aux = vet[i]; 
                        vet[i] = maior; 
                        maior = aux; 
                        pos = i;
                    } 
                 
                                                                 
             }
             printf("O maior valor do vetor e -> %d na posicao %d", maior, pos) ; 
    getch();
    }
