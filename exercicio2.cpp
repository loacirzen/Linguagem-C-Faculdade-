#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>

int main(){
    float soma=0;
    int i,n;
    
    printf("Digite um valor para N");
    scanf("%d",&n);
    
    for(i=1; i<=n; i++){
             soma = soma + pow(i,2);     
             }
    
    printf("O valor da somatoria -> %.2f", soma);
    getch();
    }
