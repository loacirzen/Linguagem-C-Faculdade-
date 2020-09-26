#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>

int main(){
     int vet[25];
     int i, cont=0;
     
      
     for (int i = 0; i <= 14; i++) { 
        
          vet[i] = rand(time(NULL)) % 25; 
          printf("O valor na posicao %d -> %d\n",i, vet[i]);
          
            
}     

 getch();
 
 
}
