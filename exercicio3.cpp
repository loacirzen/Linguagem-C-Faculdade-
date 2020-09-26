#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main(){
    int num,den,i;
    float soma = 0.0;
    printf("Digite um valor: ");
    scanf("%d",&den);
    den = den * 2;
   
    
    for(i=2; i<den; i=i+2){
             if(i % 2 == 0){
   
                       soma = soma - (1/den);
                       printf("O valor do termo %d vale -> %d\n",i, 1/i);
                     }else{

               soma = soma + (1/den);
               printf("O valor do termo %d vale -> %.2f\n",i, 1/i);
               }
               }
    
    printf("A soma vale -> %.2f",soma);
    getch();
    
    }
