#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){
     int vetA[25], vetB[25], vetC[25];
     int i;
     
     
     for (int i = 0; i <= 24; i++) { 
          vetA[i] = rand() % 100;           
}     

     for (int i = 0; i <= 24; i++) { 
          vetB[i] = rand() % 100;           
}     

     for(int i=0;i<24;i++){
             vetC[i]=vetA[i]+vetB[i];
             printf("vet A + vet B na posicao %d -> %d\n",i,vetC[i]);
}

 getch();
 
}
