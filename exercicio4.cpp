#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main(){
    int den, num = 500;
    float soma = 0.0;
    
    for(den=2; den<=26; den++){
               soma = soma + (num/den);
                   num = num - 20;
               }
    
    printf("A soma vale -> %.2f",soma);
    getch();
    
    }
