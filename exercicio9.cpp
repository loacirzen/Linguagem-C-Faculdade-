#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<vector>

int main(){
    
    int vet [5][5], soma=0, maior=0, pos, aux;
    
        for (int lin = 0; lin < 5; lin++) {
            for (int col = 0; col < 5; col++) {
                printf("lin %d col %d -> ", lin, col);
                scanf("%d",&vet[lin][col]);
            }
            
        }
    
    for(int lin=0; lin<5; lin++){	 
                        for(int col=0; col<5; col++)
                                         soma = soma + vet[lin][col];
                                         
                                         if (soma > maior) 
                    { 
                        //aux = soma; 
                        //soma = maior; 
                        maior = soma; 
                        pos = lin;
                    } 
                                         
                    
                                         soma = 0;	
                                         }
                                         soma = 0;	
                                         printf("\n Linha %d :%d", pos, maior);
    
    getch();
    }
