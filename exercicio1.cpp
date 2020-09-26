#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main(){
    int i, soma;
    printf("Digite um valor: ");
    scanf("%d",&i);
    soma = 0;
    
    while(i>0){
               soma = soma + i*(i+1);
               i--;
               }
               
    printf("O valor da soma e -> %d", soma);
    getch();
    
    }



